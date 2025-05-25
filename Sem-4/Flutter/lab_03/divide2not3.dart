// Program 1: Print numbers divisible by 2 but not by 3
import 'dart:io';

void main() {
  stdout.write("Enter starting : ");
  int start = int.parse(stdin.readLineSync()!);
  stdout.write("Enter ending : ");
  int end = int.parse(stdin.readLineSync()!);
  for (int i = start; i <= end; i++) {
    if (i % 2 == 0 && i % 3 != 0) {
      print(i);
    }
  }
}