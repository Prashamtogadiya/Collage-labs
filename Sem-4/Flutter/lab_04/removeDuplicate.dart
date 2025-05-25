// WAP to remove duplicates from a sorted integer array in-place
int removeDuplicates(List<int> nums) {
  if (nums.isEmpty) return 0;
  int j = 0;
  for (int i = 1; i < nums.length; i++) {
    if (nums[i] != nums[j]) {
      j++;
      nums[j] = nums[i];
    }
  }
  return j + 1;
}
void main() {
  List<int> nums = [0, 0, 1, 1, 1, 2, 2, 3, 3, 4];
  int uniqueCount = removeDuplicates(nums);
  print("Unique Count: $uniqueCount, Updated Array: ${nums.sublist(0, uniqueCount)}");
}