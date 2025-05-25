// 7. Find length of the last word in a string
import 'dart:io';

void main() {
  print("Enter a string:");
  String s = stdin.readLineSync()!;
  List<String> words = s.trim().split(' ');
  print("Length of last word: ${words.last.length}");
}