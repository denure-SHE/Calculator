#include<stdio.h>

int main()                                   //beginning of main function
{
        float num1,num2,result=0.0;              //declaration of variables
        char op;
        printf("Enter the numbers:");        //two numbers are read
        scanf("%f %f",&num1,&num2);
        printf("Enter the operator:");       //operator is taken from user
        scanf(" %c",&op);
        switch(op)
        {
                case '+':
                        result=num1+num2;
                        break;
                case '-':
                        result=num1-num2;
                        break;
                case '*':
                        result=num1*num2;
                        break;
                default :
                        printf("UNKNOWN OPERATOR....");         //unknown operator is found
        }
        printf("%.1f %c %.1f = %.1f",num1,op,num2,result);
        return 0;
}
