#include<iostream>
using namespace std;

int main()
{
    int a,b;
    char op;
    cout<<"enter first number:"<<endl;
    cin>>a;
    cout<<"enter second number:"<<endl;
    cin>>b;
    cout<<"plz type + for add,- for sub,* for multiplication,/ for quotient,% for remainder"<<endl;
    cin>>op;
    if(op=='+')
        cout<<endl<<"additional result ="<<a+b;
    else if(op=='-')
    cout<<endl<<"subtraction result ="<<a-b;
    else if(op=='*')
    cout<<endl<<"multiplication result ="<<a*b;
    else if(op=='/')
    cout<<endl<<"quotient result ="<<a/b;
    else if(op=='%')
    cout<<endl<<"remainder result ="<<a%b;
    return 0;
    }
    