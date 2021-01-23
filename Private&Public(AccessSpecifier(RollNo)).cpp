#include<iostream>
using namespace std;
class student
{
private:
    int rollNo;
    void setRollNo(int rollNo)
    {
        this->rollNo = rollNo;
    }
    int getRollNo()
    {
        return this->rollNo;
    }
    void setStudent()
    {
        int rollNo;
        cout<<" Enter Your Roll No :- "<<endl;
        cin>>rollNo;
        setRollNo(rollNo);
    }
    void displayStudent()
    {
        cout<<" Your Roll No Is :- "<<getRollNo()<<endl;
        cout<<"***********************"<<endl;
    }
public:
    runStudent()
    {
        setStudent();
        displayStudent();
    }
};

int main()
{
    student a,b;
    a.runStudent();
    b.runStudent();
}
