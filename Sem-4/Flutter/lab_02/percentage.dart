// 4. Read marks and calculate percentage and class
import 'dart:io';

void main() {
  print("Enter marks of 5 subjects:");
  int totalMarks = 0;
  for (int i = 0; i < 5; i++) {
    totalMarks += int.parse(stdin.readLineSync()!);
  }
  double percentage = totalMarks / 5;
  print("Percentage: $percentage%");

  if (percentage < 35) {
    print("Fail");
  } else if (percentage < 45) {
    print("Pass Class");
  } else if (percentage < 60) {
    print("Second Class");
  } else if (percentage < 70) {
    print("First Class");
  } else {
    print("Distinction");
  }
}