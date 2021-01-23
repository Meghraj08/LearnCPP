#include<iostream>
#include<string>
using namespace std;
class student
{
private:
    int rollNo,standard;
    string name;
    int maths=0,english=0,science=0,hindi=0,economics=0,total=0;
    float average=0;
    void setRollNo(int rollNo)
    {
        this->rollNo = rollNo;
    }
    void setStandard(int standard)
    {
        this->standard = standard;
    }
    void setName(string name)
    {
        this->name = name;
    }
    void setMaths(int maths)
    {
        if(maths>0 && maths<100)
        {
            this->maths = maths;
        }
    }
    void setEnglish(int english)
    {
        if(english>0 && english<100)
        {
            this->english = english;
        }
    }
    void setScience(int science)
    {
        if(science>0 && science<100)
        {
            this->science = science;
        }
    }
    void setHindi(int hindi)
    {
        if(hindi>0 && hindi<100)
        {
            this->hindi = hindi;
        }
    }
    void setEconomics(int economics)
    {
        if(economics>0 && economics<100)
        {
            this->economics = economics;
        }
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
    int getStandard()
    {
        return this->standard;
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
    int getHindi()
    {
        return this->hindi;
    }
    int getEconomics()
    {
        return this->economics;
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
        int rollNo,maths,english,science,hindi,economics,total;
        float average;
        cout<<" Enter Your Name :- "<<endl;
        getline(cin,name);
        setName(name);
        cout<<" Enter Your Roll No :- "<<endl;
        cin>>rollNo;
        setRollNo(rollNo);
        cout<<" Enter Your Standard :- "<<endl;
        cin>>standard;
        setStandard(standard);
        cout<<" Enter Your Maths Marks :- "<<endl;
        cin>>maths;
        setMaths(maths);
        cout<<" Enter Your English Marks :- "<<endl;
        cin>>english;
        setEnglish(english);
        cout<<" Enter Your Science Marks :- "<<endl;
        cin>>science;
        setScience(science);
        cout<<" Enter Your Hindi Marks :- "<<endl;
        cin>>hindi;
        setHindi(hindi);
        cout<<" Enter Your Economics Marks :- "<<endl;
        cin>>economics;
        setEconomics(economics);
        setTotal();
        setAverage();
    }
    void displayStudent()
    {
        cout<<" *********************** "<<endl;
        cout<<" Name :- "<<getName()<<endl;
        cout<<" Roll No :- "<<getRollNo()<<endl;
        cout<<" Standard :- "<<getStandard()<<endl;
        cout<<" *********************** "<<endl;
        cout<<" Maths Marks :- "<<getMaths()<<endl;
        cout<<" English Marks :- "<<getEnglish()<<endl;
        cout<<" Science Marks :- "<<getScience()<<endl;
        cout<<" Hindi Marks :- "<<getHindi()<<endl;
        cout<<" Economics Marks :- "<<getEconomics()<<endl;
        cout<<" *********************** "<<endl;
        cout<<" Total :- "<<getTotal()<<endl;
        cout<<" Average :- "<<getAverage()<<endl;
        cout<<" *********************** "<<endl;
    }
public:
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
