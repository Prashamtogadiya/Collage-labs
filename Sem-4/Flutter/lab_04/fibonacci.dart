// WAP to generate Fibonacci series of N given number using method
void generateFibonacci(int n) {
  int a = 0, b = 1;
  print("Fibonacci series:");
  for (int i = 0; i < n; i++) {
    print(a);
    int temp = a + b;
    a = b;
    b = temp;
  }
}
void main() {
  generateFibonacci(5);
}