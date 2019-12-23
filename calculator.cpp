// Header file for input output functions
#include<stdio.h>
#include<stdlib.h>/* atoi */

//Function to compute sum 
int add(int a, int b)
 {
   return(a+b);
 }
 
 //Function to compute difference
int subtract(int a,int b)
{
  return(a-b);
}

//Function to compute product
int multiply(int a, int b)
{
  return(a*b);
}


int main(int argc,char** argv)
 {
   int num1,num2;
   char* op;
   if(argc==1)   //Check if the lenth of args array is 1
     printf("No comand line argument found.\n");
   else
    {
      num1=atoi(argv[1]);   //Converting string to integer type 
      num2=atoi(argv[2]);   //Converting string to integer type  
      if(num1==0 || num2==0)   //Check if the input is integer or not
       {
         printf("Invalid integer input.\n");
         return 0;  //Program execution ends
       }
      op=argv[3];  //Stores the operator in a pointer variable
      if(*op=='+')  //Operator checking
       printf("%d\n", add(num1, num2));
      else if(*op=='-')
       printf("%d\n", subtract(num1, num2));
      else if(*op=='*')
       printf("%d\n", multiply(num1, num2));
      else
       printf("Invalid operator input.\n");  //Invalid operator
     }
   return 0;
  }
