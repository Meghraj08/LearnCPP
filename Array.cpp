#include<iostream>
using namespace std;
int main()
{
    int marks[7];
    int total=0;
    float avg=0;
    for(int i=0; i<7; i++)
    {
        do
        {
            cout<<" Enter Marks :- "<<(i+1)<<endl;
            cin>>marks[i];
        }
        while(marks[i]<0 || marks[i]>100);
        total+=marks[i];
    }
    avg=total/7.0;
    cout<<" Your Total Marks Are :- "<<total<<endl;
    cout<<" Your Average Marks Are :- "<<avg<<endl;
    if(avg>=0 && avg<=100)
    {
        if(avg>80)
        {
            cout<<"* Grade A *";
        }
        else if(avg>50)
        {
            cout<<"* Grade B *";
        }
        else if(avg>35)
        {
            cout<<"* Grade C *";
        }
        else
        {
            cout<<"* FAIL *";
        }
    }
    else
    {
        cout<<"* INVALID CHOICE *";
    }
}
