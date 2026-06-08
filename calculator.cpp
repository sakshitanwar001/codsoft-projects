#include <iostream>
using namespace std;
int main()
{
    int num1,num2;
    char op;
    cout<<"Enter the first number:";
    cin>>num1 ;
    cout<<"Enter the second number:";
    cin>>num2;
    cout<<"Enter the operator (+, -, *, /): ";
    cin>>op;
    switch(op)
    {
        case '+':
            cout<<"Result: "<<num1+num2<<endl;
            break;
        case '-':
            cout<<"Result: "<<num1-num2<<endl;
            break;
        case '*':
            cout<<"Result: "<<num1*num2<<endl;
            break;
        case '/':
            if(num2!=0)
                cout<<"Result: "<<num1/num2<<endl;
            else
                cout<<"Error: Division by zero!"<<endl;
            break;
        default:
            cout<<"Invalid operator!"<<endl;
    }
}