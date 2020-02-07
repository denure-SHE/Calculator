#include<iostream>
using namespace std

void main()           //beginning of main function, execution starts here
{
int a,b,result,choice;       //declaration of variables
cout<<"enter the numbers:";
cin>>a>>b;.                 //Reading input from the user
cout<<"1.addition\n2.subtraction\n3.multiplication\n4.division\n5.modulus\nenter your choice:";
cin>>choice; // reading choice (1,2,3,4 & 5 are valid options)
switch(choice)
{
case 1:cout<<"sum="<<a+b;break; //calculation based on choice
case 2:cout<<"difference="<<a-b;break;
case 3:cout<<"product="<<a*b;break;
case 4:cout<<"quotient="<<a/b;break;
case 5:cout<<"remainder="<<a%b;break;
default:cout<<"invalid option"; //when unknown operation is given as choice
}
}
