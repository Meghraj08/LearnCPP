#include<iostream>
#include<fstream>
using namespace std;
class Student
{
public:
    int id;
    string name;
    Student() {}
    Student(int id, string name)
    {
        this->id = id;
        this->name = name;
    }
    void display()
    {
        cout<<" Id :- "<<id<<endl;
        cout<<" Name :- "<<name<<endl;
    }
};

main()
{
    Student s(1,"Meghraj"),s1(2,"Mahida"),a,b;
    ofstream obj("student.txt");
    obj.write((char*)&s,sizeof(s));
    obj.write((char*)&s1,sizeof(s1));
    obj.close();
    ifstream obj1("student.txt");
    obj1.read((char*)&a,sizeof(a));
    a.display();
    obj1.read((char*)&b,sizeof(b));
    b.display();
    obj1.close();
}
