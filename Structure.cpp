#include<iostream>
using namespace std;
class student
{
public:
    int rollNo;
    string name;
    student()
    {
        cout<<" I Am Constructed "<<endl;
    }
    student(int r,string n)
    {
        rollNo=r;
        name=n;
    }
};
int main()
{
    student s(8," Meghraj ");
    cout<<s.rollNo<<s.name<<endl;
}
