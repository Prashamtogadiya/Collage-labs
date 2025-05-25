// Program 3: Check if a number is prime
import 'dart:io';

void main() {
  stdout.write("Enter number : ");
  int num = int.parse(stdin.readLineSync()!);
  if (num < 2){ print("not prime"); return;}
  for (int i = 2; i <= num ~/ 2; i++) {
    if (num % i == 0) {print("not prime"); return;}
  }
  print("prime");
}