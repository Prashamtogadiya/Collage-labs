import 'dart:io';

void main() {
  print("Enter array elements separated by spaces:");
  List<int> nums = [];
  List<String> input = stdin.readLineSync()!.split(' ');
  for (var n in input) {
    nums.add(int.parse(n));
  }

  for (int num in nums) {
    if (nums.where((e) => e == num).length > nums.length ~/ 2) {
      print("Majority element: $num");
      return;
    }
  }
}