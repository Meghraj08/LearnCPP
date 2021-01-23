#include<iostream>
using namespace std;
int main()
{
    int a,b,ans;
    cout<<" Enter The Value Of a "<<endl;
    cin>>a;
    cout<<" Enter The Value Of b "<<endl;
    cin>>b;
    ans=a>b;
    cout<<" a > b = "<<ans<<endl;
    ans=a<b;
    cout<<" a < b = "<<ans<<endl;
    ans=a>=b;
    cout<<" a >= b = "<<ans<<endl;
    ans=a<=b;
    cout<<" a <= b = "<<ans<<endl;
    ans=a==b;
    cout<<" a == b = "<<ans<<endl;
    ans=a!=b;
    cout<<" a != b = "<<ans<<endl;
}
