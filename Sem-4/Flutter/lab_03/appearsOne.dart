// Program 7: Find the element that appears only once in an array
import 'dart:io';

void main() {
  List<int> nums = [];
  while (true) {
    print("Enter a number (0 to quit):");
    int num = int.parse(stdin.readLineSync()!);
    if (num == 0) break;
    nums.add(num);
  }
  int result = 0;
  for (int num in nums) {
    result ^= num;
  }
  print(result);
}