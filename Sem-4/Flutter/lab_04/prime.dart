// WAP to check whether the number is prime or not using method
int check(int n) {
  if (n < 2) return 0;
  for (int i = 2; i <= n ~/ 2; i++) {
    if (n % i == 0) return 0;
  }
  return 1;
}
void main() {
  print("Is Prime: ${check(7) == 1 ? 'Yes' : 'No'}");
}