#include<iostream>
using namespace std

void main()           //beginning of main function, execution starts here
{
int a,b,result;
char choice;     //declaration of variables
cout<<"enter the numbers:";
cin>>a>>b;.                 //Reading input from the user
cout<<"enter your choice(+,-,*,/,%):";
cin>>choice; // reading choice 
switch(choice)
{
case '+':cout<<"sum="<<a+b;break; //calculation based on choice
case '-':cout<<"difference="<<a-b;break;
case '*':cout<<"product="<<a*b;break;
case '/':cout<<"quotient="<<a/b;break;
case '%':cout<<"remainder="<<a%b;break;
default:cout<<"invalid option"; //when unknown operation is given as choice
}
}
