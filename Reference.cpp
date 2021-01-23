#include<iostream>
using namespace std;
void swapping(int &a,int &b)
{
    int t;
    t=a;
    a=b;
    b=t;
}
int main()
{
    int x=5,y=10;
    swapping(x,y);
    cout<<" x = "<<x<<endl;
    cout<<" y = "<<y<<endl;
}
