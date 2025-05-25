import 'dart:convert';

import 'package:flutter/material.dart';
import 'package:flutter_spinkit/flutter_spinkit.dart';
import 'package:http/http.dart' as http;
import 'package:lab_06/lab_20/user_data.dart';

String baseURL = "https://67b56440a9acbdb38ed2155f.mockapi.io/users";

Future<List<User>> getAllUsers() async {

  var res = await http.get(Uri.parse(baseURL));
  List<dynamic> data = jsonDecode(res.body);
  List<User> users = [];
  data.forEach(
    (element) {
      users.add(User.toUser(element));
    },
  );
  return users;
}

Future<void> addUSer(User user) async {
  var res = await http.post(Uri.parse(baseURL), body: user.toMap());
}

Future<void> deleteUser(String id) async {
  var res = await http.delete(Uri.parse("$baseURL/$id"));
}

Future<void> updateUser(User user) async {
  var res =
      await http.put(Uri.parse("$baseURL/${user.id}"), body: user.toMap());
}
