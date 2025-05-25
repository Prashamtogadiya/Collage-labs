// Write a flutter code to divide the vertical space of the screen in 3 different equal parts with different colors

import 'package:flutter/material.dart';

class P2 extends StatelessWidget {
  const P2({super.key});

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: Row(
        children: [
          Expanded(child: Container(color: Colors.red,)),
          Expanded(child: Container(color: Colors.yellow,)),
          Expanded(child: Container(color: Colors.green,)),
        ],
      ),
    );
  }
}

