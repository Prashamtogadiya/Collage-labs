import 'package:flutter/cupertino.dart';
import 'package:flutter/material.dart';
import 'package:flutter_labs/crud2/formPage.dart';

class HomePage extends StatefulWidget {
  const HomePage({super.key});
  @override
  State<HomePage> createState() => _HomePageState();
}

class _HomePageState extends State<HomePage> {
  List<Map<String, dynamic>> userList = [];
  bool isGrid = false;

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: _appbar(),
      body: isGrid ? _gridView() : _listView(),
      floatingActionButton: FloatingActionButton(
        onPressed: () => _navigateToForm(null),
        child: Icon(Icons.add),
      ),
    );
  }

  AppBar _appbar() {
    return AppBar(
      backgroundColor: Colors.red,
      title: Text(
        'CRUD',
        style: TextStyle(
            color: Colors.white, fontSize: 30, fontWeight: FontWeight.bold),
      ),
      centerTitle: true,
      actions: [
        IconButton(
          onPressed: () {
            setState(() {
              isGrid = !isGrid;
            });
          },
          icon: Icon(
            isGrid ? Icons.grid_3x3 : Icons.list,
            color: Colors.white,
          ),
        )
      ],
    );
  }

  Widget _gridView() {
    return GridView.builder(
      gridDelegate:
          SliverGridDelegateWithFixedCrossAxisCount(crossAxisCount: 4),
      itemCount: userList.length,
      itemBuilder: (_, index) => _card(index),
    );
  }

  Widget _listView() {
    return ListView.builder(
      itemCount: userList.length,
      itemBuilder: (_, index) => _card(index),
    );
  }

  Widget _card(int index) {
    final user = userList[index];
    return Card(
      elevation: 5,
      shape: RoundedRectangleBorder(borderRadius: BorderRadius.circular(15)),
      child: Padding(
        padding: EdgeInsets.all(5),
        child: Column(
          crossAxisAlignment: CrossAxisAlignment.start,
          children: [
            _cardHeader(index),
            _cardInfo(user['age'], Colors.blue),
            _cardInfo(user['city'], Colors.orange),
          ],
        ),
      ),
    );
  }

  Widget _cardHeader(int index) {
    return Row(
      mainAxisAlignment: MainAxisAlignment.spaceBetween,
      children: [
        Expanded(
            child: Text(userList[index]['name'],
                style: TextStyle(
                    color: Colors.orange, fontWeight: FontWeight.bold))),
        IconButton(
            onPressed: () => _navigateToForm(index), icon: Icon(Icons.edit)),
        IconButton(
            onPressed: () => _confirmDelete(index), icon: Icon(Icons.delete))
      ],
    );
  }

  Widget _cardInfo(String text, Color color) {
    return Text(
      text,
      style: TextStyle(
        color: color,
      ),
    );
  }

  _navigateToForm(int? index) async {
    final user = index != null ? userList[index] : null;
    final updateUser = await Navigator.push(
      context,
      MaterialPageRoute(
        builder: (_) => FormPage(
          user: user,
        ),
      ),
    );
    print(updateUser);
    if (updateUser != null) {
      if (index != null) {
        userList[index] = updateUser;
      } else {
        userList.add(updateUser);
      }
      setState(() {});
    }
  }

  _confirmDelete(int index) {
    showDialog(
      context: context,
      builder: (_) => CupertinoAlertDialog(
        title: Text('Are you sure you want to delete'),
        actions: [
          TextButton(
            onPressed: () => _deleteUser(index),
            child: Text('Yes'),
          ),
          TextButton(
            onPressed: () => Navigator.pop(context),
            child: Text('No'),
          )
        ],
      ),
    );
  }

  _deleteUser(int index) {
    userList.removeAt(index);
    Navigator.pop(context);
    setState(() {});
  }
}
