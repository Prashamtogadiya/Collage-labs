// WAP to find the intersection of two integer arrays
List<int> findIntersection(List<int> nums1, List<int> nums2) {
  Map<int, int> counts = {};
  for (int num in nums1) {
    counts[num] = (counts[num] ?? 0) + 1;
  }
  List<int> intersection = [];
  for (int num in nums2) {
    if (counts.containsKey(num) && counts[num]! > 0) {
      intersection.add(num);
      counts[num] = counts[num]! - 1;
    }
  }
  intersection.sort();
  return intersection;
}
void main() {
  print("Intersection: ${findIntersection([4, 9, 5], [9, 4, 9, 8, 4])}");
}