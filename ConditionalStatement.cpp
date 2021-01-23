#include<iostream>
using namespace std;
int main()
{
    int math,sci,eng;
    int total;
    float avg;
    cout<<" Enter Maths Marks :- "<<endl;
    cin>>math;
    cout<<" Enter Science Marks :- "<<endl;
    cin>>sci;
    cout<<" Enter English Marks :- "<<endl;
    cin>>eng;
    total=math+sci+eng;
    avg=total/3.0;
    cout<<" Your Total Is :- "<<total<<endl;
    cout<<" Your Average Marks Are :- "<<avg<<endl;
    if(avg>80)
    {
        cout<<"* Grade A *";
    }
    else if(avg>50)
    {
        cout<<"* Grade B *";
    }
    else if(avg>=35)
    {
        cout<<"* Pass *";
    }
    else
    {
        cout<<"* Fail *";
    }
}
