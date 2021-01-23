#include<iostream>
using namespace std;
class student
{
private:
    int rollNo=0;
    void setRollNo(int rollNo)
    {
        this->rollNo = rollNo;
    }
    int getRollNo()
    {
        return this->rollNo;
    }
public:
    void runStudent()
    {
        setRollNo(8);
        cout<<getRollNo();
    }
};

int main()
{
    student s;
    s.runStudent();
}
