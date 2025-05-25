// Write a flutter code to divide the whole screen into 9 equal size with different colors
import 'package:flutter/material.dart';

class P3 extends StatelessWidget {
  const P3({super.key});

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: Column(
        children: [
          Expanded(child: Row(
            children: [
              Expanded(child: Container(color: Colors.red,),),
              Expanded(child: Container(color: Colors.brown,)),
              Expanded(child: Container(color: Colors.black,)),
            ],
          )),
          Expanded(child: Row(
            children: [
              Expanded(child: Container(color: Colors.green,)),
              Expanded(child: Container(color: Colors.blue,)),
              Expanded(child: Container(color: Colors.red,)),
            ],
          )),
          Expanded(child: Row(
            children: [
              Expanded(child: Container(color: Colors.cyan,)),
              Expanded(child: Container(color: Colors.purple,)),
              Expanded(child: Container(color: Colors.orange,)),
            ],
          ))
        ],
      ),
    );
  }
}
