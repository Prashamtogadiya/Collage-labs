import 'package:flutter/material.dart';
import 'package:flutter_spinkit/flutter_spinkit.dart';
import 'package:lab_06/lab_20/user_data.dart';
import 'api_service.dart';

class Demo201 extends StatefulWidget {
  const Demo201({super.key});

  @override
  State<Demo201> createState() => _Demo201State();
}

class _Demo201State extends State<Demo201> {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: PreferredSize(
        preferredSize: const Size.fromHeight(60),
        child: AppBar(
            title: Container(
              margin: EdgeInsets.all(30),
              decoration: BoxDecoration(
                color: Colors.red,
                borderRadius: const BorderRadius.all(
                  Radius.circular(15),
                ),
              ),
              child: Center(
                child: Text(
                  "API Data!!!",
                  style: TextStyle(color: Colors.white, fontSize: 35),
                ),
              ),
            ),
            backgroundColor: Colors.transparent),
      ),
      body: FutureBuilder(
          future: getAllUsers(),
          builder: (context, snapshot) {
            if (snapshot.connectionState == ConnectionState.waiting) {
              return const Center(child: SpinKitChasingDots(color: Colors.green,));
            } else if (snapshot.hasData) {
              List<dynamic> data = snapshot.data!;
              return ListView.builder(
                itemCount: data.length,
                itemBuilder: (context, index) {
                  return Padding(
                    padding: const EdgeInsets.all(10.0),
                    child: InkWell(
                      onTap: () {
                        showDialog(
                          context: context,
                          builder: (context) {
                            TextEditingController name =
                                TextEditingController(text: data[index].name);
                            return AlertDialog(
                              title: Text("Edit"),
                              content: TextField(
                                controller: name,
                              ),
                              actions: [
                                ElevatedButton(
                                    onPressed: () async {
                                      await updateUser(User(
                                          id: data[index].id, name: name.text));
                                      if (context.mounted)
                                        Navigator.of(context).pop();
                                    },
                                    child: Text("Edit"))
                              ],
                            );
                          },
                        ).then(
                          (value) {
                            setState(() {});
                          },
                        );
                      },
                      child: Card(
                        color: Colors.white,
                        elevation: 2,
                        child: Padding(
                          padding: const EdgeInsets.all(20.0),
                          child: Column(
                            children: [
                              Row(
                                children: [
                                  Icon(
                                    Icons.person,
                                    color: Colors.blue,
                                  ),
                                  SizedBox(
                                    width: 5,
                                  ),
                                  Expanded(
                                    child: Text(
                                      data[index].name,
                                      style: TextStyle(
                                          color: Colors.blue,
                                          fontWeight: FontWeight.bold,
                                          fontSize: 30),
                                    ),
                                  ),
                                  IconButton(
                                      onPressed: () async {
                                        await deleteUser(data[index].id);
                                        setState(() {});
                                      },
                                      icon: Icon(Icons.delete),color: Colors.red,),
                                ],
                              ),
                              SizedBox(
                                height: 10,
                              ),
                              Row(
                                children: [
                                  Icon(
                                    Icons.cake,
                                    color: Colors.green,
                                  ),
                                  SizedBox(
                                    width: 5,
                                  ),
                                  Text(
                                    data[index].id,
                                    style: TextStyle(
                                        color: Colors.green, fontSize: 20),
                                  ),
                                ],
                              ),
                            ],
                          ),
                        ),
                      ),
                    ),
                  );
                },
              );
            } else {
              return Text("Error");
            }
          }),
      floatingActionButton: FloatingActionButton(
        onPressed: () {
          showDialog(
            context: context,
            builder: (context) {
              TextEditingController name = TextEditingController();
              return AlertDialog(
                title: Text("Add"),
                content: TextField(
                  controller: name,
                ),
                actions: [
                  ElevatedButton(
                      onPressed: () async {
                        await addUSer(User(id: "12", name: name.text));
                        if (context.mounted) Navigator.of(context).pop();
                      },
                      child: Text("Add"))
                ],
              );
            },
          ).then(
            (value) {
              setState(() {});
            },
          );
        },
        child: Icon(Icons.add),
      ),
    );
  }
}
