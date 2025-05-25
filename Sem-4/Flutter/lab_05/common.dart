// WAP to read 2 list and return list that contains only the elements that are common between them.

import 'dart:io';

void main() {
  List<int> l1 = [];
  List<int> l2 = [];
  for(int i=0; i<10; i++) {
    if(i<5) {
      stdout.write("Enter in l1 : ");
      l1.add(int.parse(stdin.readLineSync()!));
    }
    else {
      stdout.write("Enter in l2 : ");
      l2.add(int.parse(stdin.readLineSync()!));
    }
  }
  List<int> common = findCommonElements(l1,l2);
  print(common);
}

List<int> findCommonElements(List<int> l1, List<int> l2) {
  Set<int> set = Set<int>();

  for (int element in l1) {
    set.add(element);
  }

  List<int> commonElements = [];

  for (int element in l2) {
    if (set.remove(element)) {
      commonElements.add(element);
    }
  }

  return commonElements;
}