#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<" Enter The Value Of a "<<endl;
    cin>>a;
    cout<<a<<" + 2 = "<<(a+=2)<<endl;
    cout<<a<<" - 2 = "<<(a-=2)<<endl;
    cout<<a<<" * 2 = "<<(a*=2)<<endl;
    cout<<a<<" / 2 = "<<(a/=2)<<endl;
    cout<<a<<" % 2 = "<<(a%=2)<<endl;
}
