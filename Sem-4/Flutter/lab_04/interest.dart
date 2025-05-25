void calculateSimpleInterest({required double principal, required double rate, double time = 1}) {
  double interest = (principal * rate * time) / 100;
  print("Simple Interest: $interest");
}
void main() {
  calculateSimpleInterest(principal: 1000, rate: 5, time: 2);
}