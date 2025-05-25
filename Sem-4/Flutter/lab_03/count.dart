// Program 8: Count occurrences of each word in a sentence
import 'dart:io';

void main() {
  String str = stdin.readLineSync()!;
  Map<String, int> count = countWords(str);
  print(count);
}
Map<String, int> countWords(String sentence) {
  List<String> words = sentence.split(' ');
  Map<String, int> wordCount = {};
  for (String word in words) {
    wordCount[word] = (wordCount[word] ?? 0) + 1;
  }
  return wordCount;
}