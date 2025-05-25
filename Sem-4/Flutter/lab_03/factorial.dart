// Program 2: Find factorial of a number
import 'dart:io';

void main() {
  stdout.write("Enter num : ");
  int num = int.parse(stdin.readLineSync()!);
  int fact = 1;
  for (int i = 1; i <= num; i++) {
    fact *= i;
  }
  print(fact);
}
