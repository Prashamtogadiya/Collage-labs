// 2. Perform arithmetic operations based on user choice
import 'dart:io';

void main() {
  print("Choose operation: 1. Addition, 2. Subtraction, 3. Multiplication, 4. Division");
  int choice = int.parse(stdin.readLineSync()!);

  print("Enter two numbers:");
  double a = double.parse(stdin.readLineSync()!);
  double b = double.parse(stdin.readLineSync()!);

  if (choice == 1) {
    print("Addition: ${a + b}");
  } else if (choice == 2) {
    print("Subtraction: ${a - b}"); 
  } else if (choice == 3) {
    print("Multiplication: ${a * b}");
  } else if (choice == 4) {
    if (b != 0) {
      print("Division: ${a / b}");
    } else {
      print("Division by zero is not allowed.");
    }
  } else {
    print("Invalid choice");
  }
}