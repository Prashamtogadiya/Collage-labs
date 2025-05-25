import 'dart:math';

import 'package:flutter/material.dart';

class DiceRoller extends StatefulWidget {
  const DiceRoller({super.key});

  @override
  State<DiceRoller> createState() => _DiceRollerState();
}

class _DiceRollerState extends State<DiceRoller> {
  int _diceNumber = 1;

  void _rollDice() {
    setState(() {
      _diceNumber = Random().nextInt(6)+1;
    });
  }
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: Center(
        child: Column(
          mainAxisAlignment: MainAxisAlignment.center,
          children: [
            Image.asset('../assets/images/dice/dice_$_diceNumber.jpeg', height: 100,),
            SizedBox(height: 10,),
            ElevatedButton(onPressed: _rollDice, child: Text('Roll Dice'))
          ],
        ),
      ),
    );
  }
}
