// Write a flutter code to display “hello world” using Text widget. Change color & size of text using different properties.
import 'package:flutter/material.dart';

class helloWorld extends StatefulWidget {
  const helloWorld({super.key});

  @override
  State<helloWorld> createState() => _helloWorldState();
}

class _helloWorldState extends State<helloWorld> {
  final TextEditingController _controller1 = TextEditingController();

  final TextEditingController _controller2 = TextEditingController();

  String _displayText = '';

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: Center(
        child: Column(
          children: [
            Text('1. Hello world'),

            SizedBox(
              height: 10,
            ),

            getText("2.1. Hello world"),

            SizedBox(
              height: 10,
            ),

            getText("2.2. Hello world",
                TextStyle(fontSize: 26, color: Colors.blue)),

            SizedBox(
              height: 10,
            ),

            Text('3. '),
            TextField(
              controller: _controller1,
              decoration: InputDecoration(
                labelText: 'Enter something',
              ),
            ),
            ElevatedButton(
                onPressed: () {
                  print(_controller1.text);
                },
                child: Text('Printed in terminal')
            ),

            SizedBox(
              height: 10,
            ),

            Text('4. '),
            TextField(
              decoration: InputDecoration(
                labelText: 'Enter something',
                hintText: 'Enter name',
                border: OutlineInputBorder(
                  borderRadius: BorderRadius.circular(12.0),
                ),
                floatingLabelBehavior: FloatingLabelBehavior.always,
              ),
            ),

            SizedBox(
              height: 10,
            ),

            Text('5. '),
            TextField(
              controller: _controller2,
              decoration: InputDecoration(
                hintText: 'Try something',
                labelText: 'Try name',
                border: OutlineInputBorder(
                  borderRadius: BorderRadius.circular(20)
                ),
                floatingLabelBehavior: FloatingLabelBehavior.always
              ),

            ),
            ElevatedButton(
                onPressed: () {
                  setState(() {
                    _displayText = _controller2.text;
                  });
                },
                child: Text('Show text')),
            SizedBox(
              height: 10,
            ),
            Text(
              _displayText,
              style: TextStyle(fontSize: 24),
            )
          ],
        ),
      ),
    );
  }

  Widget getText(String text, [TextStyle? style]) {
    return Text(text,
        style: style ?? TextStyle(fontSize: 24, color: Colors.red));
  }
}
