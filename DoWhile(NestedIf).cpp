#include<iostream>
using namespace std;
int main()
{
    int math,sci,eng;
    int total;
    float avg;
    do
    {
        cout<<" Enter Maths Marks "<<endl;
        cin>>math;
    }
    while(math<0 || math>100);
    do
    {
        cout<<" Enter Science Marks "<<endl;
        cin>>sci;
    }
    while(sci<0 || sci>100);
    do
    {
        cout<<" Enter English Marks "<<endl;
        cin>>eng;
    }
    while(eng<0 || eng>100);
    total=math+sci+eng;
    avg=total/3.0;
    cout<<" Your Total Is "<<total<<endl;
    cout<<" Your Average Marks Are "<<avg<<endl;
    if(avg>=0 && avg<=100)
    {
        if(avg>80)
        {
            cout<<" Grade A ";
        }
        else if(avg>50)
        {
            cout<<" Grade B ";
        }
        else if(avg>35)
        {
            cout<<" Pass ";
        }
        else
        {
            cout<<" Fail ";
        }
    }
    else
    {
        cout<<" Invalid Choice ";
    }
}
