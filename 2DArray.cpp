#include<iostream>
using namespace std;
int main()
{
    int marks[2][3],total[2];
    for(int i=0; i<2; i++)
    {
        total[i]=0;
        for(int j=0; j<=2; j++)
        {
            cout<<" Enter Marks :- "<<endl;
            cin>>marks[i][j];
            total[i]=total[i]+marks[i][j];
        }
        for(int k=0; k<=2; k++)
        {
            cout<<" Your Marks Are :- "<<marks[i][k]<<endl;
        }
        cout<<" Total Is :- "<<total[i]<<endl;
    }
}
