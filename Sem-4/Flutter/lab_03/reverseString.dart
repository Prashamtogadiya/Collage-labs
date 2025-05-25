// Program 5: Reverse a string
import 'dart:io';

void main() {
  String str = stdin.readLineSync()!;
  String reversed = "";
  for (int i = str.length - 1; i >= 0; i--) {
    reversed += str[i];
  }
  print(reversed);
}