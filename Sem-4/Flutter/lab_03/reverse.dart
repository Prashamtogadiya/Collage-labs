// Program 4: Reverse a number
import 'dart:io';

void main() {
  int num = int.parse(stdin.readLineSync()!);
  int reverse = 0;
  while (num != 0) {
    reverse = reverse * 10 + num % 10;
    num ~/= 10;
  }
  print(reverse);
}