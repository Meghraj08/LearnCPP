#include<iostream>
#include<string>
using namespace std;
class student
{
public:
    int rollNo;
    string name;
    int maths=0,english=0,science=0,total=0;
    float average=0;
    void setRollNo(int rollNo)
    {
        this->rollNo = rollNo;
    }
    void setName(string name)
    {
        this->name = name;
    }
    void setMaths(int maths)
    {
        this->maths = maths;
    }
    void setEnglish(int english)
    {
        this->english = english;
    }
    void setScience(int science)
    {
        this->science = science;
    }
    void setTotal()
    {
        this->total = this->maths + this->english + this->science;
    }
    void setAverage()
    {
        setTotal();
        this->average = this->total/3.0;
    }
    int getRollNo()
    {
        return this->rollNo;
    }
    string getName()
    {
        return this->name;
    }
    int getMaths()
    {
        return this->maths;
    }
    int getEnglish()
    {
        return this->english;
    }
    int getScience()
    {
        return this->science;
    }
    int getTotal()
    {
        setTotal();
        return this->total;
    }
    float getAverage()
    {
        setAverage();
        return this->average;
    }
    void setStudent()
    {
        string name;
        int rollNo,maths,english,science,total;
        float average;
        cout<<" Enter Your Name :- "<<endl;
        getline(cin,name);
        setName(name);
        cout<<" Enter Your Roll No :- "<<endl;
        cin>>rollNo;
        setRollNo(rollNo);
        cout<<" Enter Your Maths Marks :- "<<endl;
        cin>>maths;
        setMaths(maths);
        cout<<" Enter Your English Marks :- "<<endl;
        cin>>english;
        setEnglish(english);
        cout<<" Enter Your Science Marks :- "<<endl;
        cin>>science;
        setScience(science);
        setTotal();
        setAverage();
    }
    void displayStudent()
    {
        cout<<" ********************* "<<endl;
        cout<<" Name :- "<<getName()<<endl;
        cout<<" Roll No :- "<<getRollNo()<<endl;
        cout<<" ********************* "<<endl;
        cout<<" Maths Marks :- "<<getMaths()<<endl;
        cout<<" English Marks :- "<<getEnglish()<<endl;
        cout<<" Science Marks :- "<<getScience()<<endl;
        cout<<" ********************* "<<endl;
        cout<<" Total :- "<<getTotal()<<endl;
        cout<<" Average :- "<<getAverage()<<endl;
        cout<<" ********************* "<<endl;
    }
    void runStudent()
    {
        setStudent();
        displayStudent();
    }
};

int main()
{
    student s;
    s.runStudent();
}
