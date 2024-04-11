#include <iostream>
using namespace std;

int main() {
int number1 ;
int number2 ;
int number3 ;
int result;
  	
cout <<"Calcutator"<<endl;
cout <<"Please Enter 3 numbers to Calculate: "<<endl;
  	
cout<<"First number = ";
cin>>number1;
cout<<"Second number =";
cin>>number2;
cout<<"Third number =";
cin>>number3;
  	
cout<<number1<<"+"<<number2<<"+"<<number3<<"="<<number1+number2+number3<<endl;

cout<<number1<<"-"<<number2<<"-"<<number3<<"="<<number1-number2-number3<<endl;

cout<<number1<<"*"<<number2<<"*"<<number3<<"="<<number1*number2*number3<<endl;

cout<<number1<<"/"<<number2<<"/"<<number3<<"="<<number1/number2/number3<<endl;

  return 0;
}