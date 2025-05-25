import 'dart:io';

void main() {
  List<int> list = [];
  int total = 0;
  for(int i=1; i<=5; i++) {
    stdout.write("Enter marks of subject $i : ");
    int marks = int.parse(stdin.readLineSync()!);
    list.add(marks);
    total += marks;
  }

  print("Percentage of $list ${total/5}%");
}