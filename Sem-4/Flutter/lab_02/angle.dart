// 8. Calculate angle between hour and minute hands of a clock
import 'dart:io';

void main() {
  print("Enter hours (1-12):");
  int hours = int.parse(stdin.readLineSync()!);
  print("Enter minutes (0-59):");
  int minutes = int.parse(stdin.readLineSync()!);

  double hourAngle = (hours % 12) * 30 + (minutes / 60) * 30;
  double minuteAngle = minutes * 6;
  double angle = (hourAngle - minuteAngle).abs();
  angle = angle > 180 ? 360 - angle : angle;
  print("Angle between hands: $angle degrees");
}