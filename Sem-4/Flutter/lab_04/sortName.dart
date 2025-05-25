// WAP to sort names based on heights in descending order
void sortNamesByHeights(List<String> names, List<int> heights) {
  List<MapEntry<String, int>> combined = List.generate(names.length, (i) => MapEntry(names[i], heights[i]));
  combined.sort((a, b) => b.value.compareTo(a.value));
  List<String> sortedNames = combined.map((e) => e.key).toList();
  print("Sorted Names: $sortedNames");
}
void main() {
  sortNamesByHeights(["Mary", "John", "Emma"], [180, 165, 170]);
}