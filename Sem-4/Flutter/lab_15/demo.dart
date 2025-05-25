import 'package:flutter/cupertino.dart';
import 'package:flutter/material.dart';

import 'database.dart';

class AppDB extends StatefulWidget {
  const AppDB({super.key});

  @override
  State<AppDB> createState() => _AppDBState();
}

class _AppDBState extends State<AppDB> {
  MyDatabase database = MyDatabase();

  @override
  void initState() {
    // TODO: implement initState
    super.initState();
    selectAll();
  }

  Future<void> selectAll() async {
    // await database.insertActivity();
    await database.selectToDoList();
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: FutureBuilder(
        future: database.selectToDoList(),
        builder: (context, snapshot) {
          if (snapshot.connectionState == ConnectionState.waiting) {
            return Center(child: CircularProgressIndicator());
          } else if (snapshot.hasData) {
            return ListView.builder(
              itemCount: snapshot.data!.length,
              itemBuilder: (context, index) {
                return ListTile(
                  title: Text(
                    snapshot.data![index]["activity_name"],
                    style: TextStyle(fontSize: 20, color: Colors.black),
                  ),
                );
              },
            );
          } else {
            return Text("Error");
          }
        },
      ),
      floatingActionButton: FloatingActionButton(
        onPressed: () {
          showDialog(
              context: context,
              builder: (context) {
                TextEditingController activity = TextEditingController();
                return AlertDialog(
                  title: Text("Add activity"),
                  content: TextField(
                    decoration: InputDecoration(
                        border: OutlineInputBorder(
                            borderRadius: BorderRadius.circular(20)),
                        labelText: "Enter Activity"),
                    controller: activity,
                  ),
                  actions: [
                    ElevatedButton(
                        onPressed: () async {
                          await database
                              .insertActivity({"activity_name": activity.text});
                          Navigator.of(context).pop();
                        },
                        child: Text("Submit"))
                  ],
                );
              }).then((value) {
            setState(() {});
          });
        },
        child: Icon(CupertinoIcons.add),
      ),
    );
  }
}
