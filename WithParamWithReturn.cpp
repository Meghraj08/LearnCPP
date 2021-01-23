#include<iostream>
using namespace std;
int add1(int x,int y)
{
    return x+y;
}

int main()
{
    int a,b,ans;
    cout<<" Enter Number :- ";
    cin>>a;
    cout<<" Enter Number :- ";
    cin>>b;
    ans=add1(a,b);
    cout<<" Answer Is "<<ans;
}
