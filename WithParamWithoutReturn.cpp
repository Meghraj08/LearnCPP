#include<iostream>
using namespace std;
int add2(int x,int y)
{
    cout<<" Addition Is "<<(x+y);
}

int main()
{
    int a,b,ans;
    cout<<" Enter Number :- ";
    cin>>a;
    cout<<" Enter Number :- ";
    cin>>b;
    add2(a,b);
}
