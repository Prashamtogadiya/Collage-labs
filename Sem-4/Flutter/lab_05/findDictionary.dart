// WAP to find friends detail by their name using dictionary. (Create local dictionary and search from it using Map<String,Object?> & Model Class).
import 'dart:io';

class Friend {
  String? name;
  int? age;
  Friend(String name, int age) {
    this.name = name;
    this.age = age;
  }
}
void main() {
  Map<String, Friend> map = {};
  for(int i=0; i<2; i++) {
    stdout.write("Enter your name : ");
    String yourName = stdin.readLineSync()!;
    stdout.write("Enter your friend's name : ");
    String FriendName = stdin.readLineSync()!;
    stdout.write("Enter your friend's age : ");
    int FriendAge = int.parse(stdin.readLineSync()!);

    map[yourName] = Friend(FriendName, FriendAge);
    print("\n");
  }

  stdout.write("Enter name to get details of their friend : ");
  String name = stdin.readLineSync()!;
  print('${name}s friend details : \nName: ${map[name]!.name},Age: ${map[name]!.age}');
}