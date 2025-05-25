// WAP to count number of even or odd numbers from an array
void countEvenOdd(List<int> nums) {
  int evenCount = 0, oddCount = 0;
  for (int num in nums) {
    if (num % 2 == 0) {
      evenCount++;
    } else {
      oddCount++;
    }
  }
  print("Even: $evenCount, Odd: $oddCount");
}
void main() {
  countEvenOdd([1, 2, 3, 4, 5, 6]);
}