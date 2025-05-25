// WAP to create and read phonebook dictionary
import 'dart:io';

void main() {
  Map<String, String> phonebook = {
    'Jevin': '123456789',
    'Yash': '9876543210',
    'Prasham': '5551234567',
    'Jineesh': '5559876543',
    'Neel': '5555555555'
  };

  print('Phonebook:');
  phonebook.forEach((name, number) {
    print('$name: $number');
  });
}