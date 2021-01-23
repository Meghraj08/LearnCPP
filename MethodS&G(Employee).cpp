#include<iostream>
#include<string>
using namespace std;
class employee
{
public:
    string name;
    int age,id;
    float grossSalary,netSalary,bonus;
    void setName(string name)
    {
        this->name = name;
    }
    void setAge(int age)
    {
        this->age = age;
    }
    void setId(int id)
    {
        this->id = id;
    }
    void setGrossSalary(float grossSalary)
    {
        this->grossSalary = grossSalary;
    }
    void setBonus(float  bonus)
    {
        this->bonus = bonus;
    }
    void setNetSalary()
    {
        this->netSalary = this->grossSalary + this->bonus;
    }
    string getName()
    {
        return this->name;
    }
    int getAge()
    {
        return this->age;
    }
    int getId()
    {
        return this->id;
    }
    float getGrossSalary()
    {
        return this->grossSalary;
    }
    float getBonus()
    {
        return this->bonus;
    }
    float getNetSalary()
    {
        return this->netSalary;
    }
    void setEmployee()
    {
        string name;
        int age,id;
        float grossSalary,netSalary,bonus;
        cout<<" Enter Your Name :- "<<endl;
        getline(cin,name);
        setName(name);
        cout<<" Enter Your Age :- "<<endl;
        cin>>age;
        setAge(age);
        cout<<" Enter Your Id :- "<<endl;
        cin>>id;
        setId(id);
        cout<<" Enter Your Gross Salary :- "<<endl;
        cin>>grossSalary;
        setGrossSalary(grossSalary);
        cout<<" Enter Your Bonus :- "<<endl;
        cin>>bonus;
        setBonus(bonus);
        setNetSalary();
    }
    void displayEmployee()
    {
        cout<<" *********************** "<<endl;
        cout<<" Name :- "<<getName()<<endl;
        cout<<" Age :- "<<getAge()<<endl;
        cout<<" Id :- "<<getId()<<endl;
        cout<<" Net Salary :- "<<getNetSalary()<<endl;
        cout<<" *********************** "<<endl;
    }
    void runEmployee()
    {
        setEmployee();
        displayEmployee();
    }
};

int main()
{
    employee s;
    s.runEmployee();
}
