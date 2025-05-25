// Program 9: Insert an element at a specific position in an array
import 'dart:io';

void main() {
  List<int> array = [1,2,3];
  int element = int.parse(stdin.readLineSync()!);
  int position = int.parse(stdin.readLineSync()!);;
  array.insert(position, element);
  print("Modified array: $array");
}