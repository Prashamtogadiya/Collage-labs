import 'dart:io';

void main() {
  stdout.write("Enter weight in pound : ");
  double pound = double.parse(stdin.readLineSync()!);
  stdout.write("Enter height in inch : ");
  double inch = double.parse(stdin.readLineSync()!);

  double kg = pound*0.45359237;
  double meter = inch*0.0254;

  print("BMI = ${kg/(meter*meter)}");
}