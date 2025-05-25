// WAP that creates List with following value:'Delhi', 'Mumbai', 'Bangalore', 'Hyderabad' and 'Ahmedabad' Replace 'Ahmedabad' with 'Surat' in above List.
void main() {
  List<String> list = ['Delhi', 'Mumbai', 'Bangalore', 'Hyderabad', 'Ahmedabad'];
  int index = list.indexOf('Ahmedabad');
  if(index!=-1) {
    list[index] = 'Surat';
  }
  print(list);
}