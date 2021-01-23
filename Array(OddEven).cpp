#include<iostream>
using namespace std;
int main()
{
    int num[5];
    int odd=0,even=0;
    for(int i=0; i<5; i++)
    {
        cout<<" Enter Number :- ";
        cin>>num[i];
        if(num[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    cout<<" There Are "<<odd<<" Odd Numbers & "<<even<<" Even Numbers. ";
}
