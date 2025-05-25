import 'dart:io';

void main() {
  stdout.write("Enter length in meter : ");
  double m = double.parse(stdin.readLineSync()!);
  print("${m}meter = ${3.28084*m}feet");
}