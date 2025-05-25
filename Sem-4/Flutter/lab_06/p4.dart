// Write a flutter code to divide the whole screen into 9 different size with different colors
import 'package:flutter/material.dart';

class P4 extends StatelessWidget {
  const P4 ({super.key});

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: Row(
        children: [
          Expanded(child: Column(
            children: [
              Expanded(child: Container(color: Colors.white38,)),
              Expanded(child: Container(color: Colors.orange,)),
              Expanded(child: Container(color: Colors.blue,)),
            ],
          )),
          Expanded(child: Column(
            children: [
              Expanded(child: Container(color: Colors.brown,),flex: 2,),
              Expanded(child: Container(color: Colors.green,),flex: 2,),
              Expanded(child: Container(color: Colors.cyan,)),
            ],
          )),
          Expanded(child: Column(
            children: [
              Expanded(child: Container(color: Colors.red,)),
              Expanded(child: Container(color: Colors.yellow,),flex: 3,),
              Expanded(child: Container(color: Colors.purple,),flex: 2,),
            ],
          ))
        ],
      ),
    );
  }
}
