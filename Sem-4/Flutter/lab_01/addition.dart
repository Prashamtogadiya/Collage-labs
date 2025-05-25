import 'dart:io';

void main() {
  print("Hello world!");
  stdout.write("Enter a : ");
  double a = double.parse(stdin.readLineSync()!);
  stdout.write("Enter b : ");
  double b = double.parse(stdin.readLineSync()!);
  print("$a + $b = ${a+b}");
}