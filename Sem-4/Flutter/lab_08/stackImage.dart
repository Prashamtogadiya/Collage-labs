import 'package:flutter/material.dart';

class Stackimage extends StatelessWidget {
  const Stackimage({super.key});

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text('Stack example'),
      ),
      body: Stack(
        children: [
          Image.asset(
            '../assets/images/image.png',
            width: double.infinity,
            height: double.infinity,
          ),
          Center(
            child: Text(
              'Hello flutter',
              style: TextStyle(
                  fontSize: 24, color: Colors.red, fontWeight: FontWeight.bold, backgroundColor: Colors.amber,),
            ),
          )
        ],
      ),
    );
  }
}
