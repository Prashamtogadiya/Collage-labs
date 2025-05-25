import 'dart:io';

void main() {
  stdout.write("Enter temperature in Fahrenheit : ");
  double f = double.parse(stdin.readLineSync()!);
  double c = (f - 32)/(9/5);
  print("${f}F = ${c}c");
}
