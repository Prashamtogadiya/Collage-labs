/* WAP that prompts the user to enter 5 numbers, stores them in a List, and displays them in increasing order.*/

import 'dart:io';

void main() {
  List<int> list = [];
  for(int i=0; i<5; i++) {
    stdout.write("Enter a number : ");
    list.add(int.parse(stdin.readLineSync()!));
  }
  list.sort();
  print(list);
}