import 'package:flutter/cupertino.dart';
import 'package:flutter/material.dart';

import 'database.dart';

class DemoDatabase extends StatefulWidget {
  const DemoDatabase({super.key});

  @override
  State<DemoDatabase> createState() => _DemoDatabaseState();
}

class _DemoDatabaseState extends State<DemoDatabase> {
  MyDatabase databse = MyDatabase();

  @override
  void initState() {
    super.initState();
  }

  Future<void> selectAll() async {
    await databse.selectAllState();
  }

  @override
  Widget build(BuildContext context) {
    return SafeArea(
      child: Scaffold(
        appBar: AppBar(
          title: Text('State Management'),
          centerTitle: true,
          backgroundColor: Colors.blueAccent,
        ),
        body: FutureBuilder(
          future: databse.selectAllState(),
          builder: (context, snapshot) {
            if (snapshot.connectionState == ConnectionState.waiting) {
              return Center(child: CircularProgressIndicator());
            } else if (snapshot.hasData) {
              return ListView.builder(
                padding: EdgeInsets.all(10.0),
                itemCount: snapshot.data!.length,
                itemBuilder: (context, index) {
                  return Card(
                    elevation: 5,
                    margin: EdgeInsets.symmetric(vertical: 8.0),
                    child: ListTile(
                      contentPadding: EdgeInsets.all(15),
                      title: Text(
                        snapshot.data![index]["state_name"],
                        style: TextStyle(fontSize: 18, fontWeight: FontWeight.bold),
                      ),
                      trailing: Container(
                        width: 100,
                        child: Row(
                          children: [
                            IconButton(
                              onPressed: () async {
                                await databse.deleteState(snapshot.data![index]["state_id"]);
                                setState(() {});
                              },
                              icon: Icon(Icons.delete, color: Colors.red),
                            ),
                            IconButton(
                              onPressed: () {
                                showDialog(
                                  context: context,
                                  builder: (context) {
                                    TextEditingController state = TextEditingController(
                                        text: snapshot.data![index]["state_name"]);
                                    return AlertDialog(
                                      title: Text("Edit State"),
                                      content: TextField(
                                        controller: state,
                                        decoration: InputDecoration(labelText: "State Name"),
                                      ),
                                      actions: [
                                        ElevatedButton(
                                          onPressed: () async {
                                            await databse.updateState({
                                              "state_id": snapshot.data![index]["state_id"],
                                              "state_name": state.text
                                            });
                                            Navigator.of(context).pop();
                                          },
                                          child: Text("Save Changes"),
                                          style: ElevatedButton.styleFrom(
                                            backgroundColor: Colors.blueAccent,
                                          ),
                                        )
                                      ],
                                    );
                                  },
                                ).then((value) {
                                  setState(() {});
                                });
                              },
                              icon: Icon(Icons.edit, color: Colors.green),
                            ),
                          ],
                        ),
                      ),
                    ),
                  );
                },
              );
            } else {
              return Center(child: Text("Error: Unable to load data", style: TextStyle(fontSize: 18)));
            }
          },
        ),
        floatingActionButton: FloatingActionButton(
          onPressed: () {
            showDialog(
              context: context,
              builder: (context) {
                TextEditingController state = TextEditingController();
                return AlertDialog(
                  title: Text("Add New State"),
                  content: TextField(
                    controller: state,
                    decoration: InputDecoration(labelText: "State Name"),
                  ),
                  actions: [
                    ElevatedButton(
                      onPressed: () async {
                        await databse.insertState({"state_name": state.text});
                        Navigator.of(context).pop();
                      },
                      child: Text("Add State"),
                      style: ElevatedButton.styleFrom(
                        backgroundColor: Colors.blueAccent,
                      ),
                    )
                  ],
                );
              },
            ).then((value) {
              setState(() {});
            });
          },
          backgroundColor: Colors.blueAccent,
          child: Icon(Icons.add, size: 30),
        ),
      ),
    );
  }
}
