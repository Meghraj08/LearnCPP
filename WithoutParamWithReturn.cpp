#include<iostream>
using namespace std;
int add3()
{
    int x,y;
    cout<<" Enter Number :- ";
    cin>>x;
    cout<<" Enter Number :- ";
    cin>>y;
    return x+y;
}

int main()
{
    int ans;
    ans = add3();
    cout<<" Answer Is "<<ans;
}
