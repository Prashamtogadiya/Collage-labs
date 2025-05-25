import 'package:flutter/material.dart';

class FormPage extends StatefulWidget {
  final Map<String, dynamic>? user;
  const FormPage({super.key, this.user});

  @override
  State<FormPage> createState() => _FormPageState();
}

class _FormPageState extends State<FormPage> {
  final _nameController = TextEditingController();
  final _ageController = TextEditingController();
  final _cityController = TextEditingController();

  @override
  void initState() {
    // TODO: implement initState
    super.initState();
    if(widget.user!=null) {
      _nameController.text = widget.user?['name'];
      _ageController.text = widget.user?['age'];
      _cityController.text = widget.user?['city'];
    }
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
          title: const Text('CRUD',
              style: TextStyle(
                  fontSize: 25,
                  fontWeight: FontWeight.bold,
                  color: Colors.white)),
          backgroundColor: Colors.red),
      body: Padding(
        padding: EdgeInsets.all(20),
        child: Column(
          children: [
            _formField(_nameController, 'Name', 'Enter your name'),
            _formField(_ageController, 'Age', 'Enter your age'),
            _formField(_cityController, 'City', 'Enter your city'),
            SizedBox(
              height: 10,
            ),
            ElevatedButton(onPressed: ()=>_submit(), child: Text('Add'))
          ],
        ),
      ),
    );
  }

  Widget _formField(TextEditingController controller, String label, String hintText) {
    return Padding(
      padding: EdgeInsets.only(bottom: 10),
      child: TextField(
        controller: controller,
        decoration: InputDecoration(
          labelText: label,
          hintText: hintText,
          border: OutlineInputBorder(borderRadius: BorderRadius.circular(15)),
        ),
      ),
    );
  }

  _submit() {
    Navigator.pop(context, {
      'name': _nameController.text,
      'age': _ageController.text,
      'city': _cityController.text,
    });
  }
}
