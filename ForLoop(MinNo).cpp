#include<iostream>
using namespace std;
int main()
{
    int num[5],min=0;
    for(int i=0; i<5; i++)
    {
        do
        {
            cout<<" Enter Number :- "<<(i+1)<<endl;
            cin>>num[i];
        }
        while(num[i]<0);
        min=num[i];
    }
    for(int j=0; j<5; j++)
    {
        if(num[j]<min)
        {
            min=num[j];
        }
    }
    cout<<" Your Minimum Number Is "<<min;
}
