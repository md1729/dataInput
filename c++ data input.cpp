#include<iostream>
using namespace std;
main(){
char c;
string text;
int number1;
float number2;
double number3;

cout<<"Enter a character:";
cin>>c;
cout<<"Enter a text:";
cin>>text;
cout<<"Enter a integer number:";
cin>>number1;
cout<<"Enter a decimal number:";
cin>>number2;
cout<<"Enter a number of type Double:";
cin>>number3;

cout<<&number1;
cout<<c<<endl;	
cout<<text<<endl;
cout<<number1<<endl;
cout<<number2<<endl;
cout<<number3<<endl;
	
}
