#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char op;
    cout<<" Enter The Value Of a "<<endl;
    cin>>a;
    cout<<" Enter The Value Of b "<<endl;
    cin>>b;
    cout<<" Enter Operational Character "<<endl;
    cin>>op;
    switch(op)
    {
    case '+':
        cout<<" Addition Is "<<(a+b);
        break;
    case '-':
        cout<<" Subtraction Is "<<(a-b);
        break;
    case '*':
        cout<<" Multiplication Is "<<(a*b);
        break;
    case '/':
        cout<<" Division Is "<<(a/b);
        break;
    default:
        cout<<" Invalid Choice ";
        break;
    }
}
