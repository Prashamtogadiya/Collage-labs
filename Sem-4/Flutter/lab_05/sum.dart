import 'dart:io';

void main() {
  List<int> list = [];
  stdout.write("Enter n : ");
  int n = int.parse(stdin.readLineSync()!);
  int sum = 0;
  for(int i=0; i<n; i++) {
    list.add(n);
    if(n%3==0 || n%5==0) {
      sum+=n;
    }
  }
  print(sum);
}