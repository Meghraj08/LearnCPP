#include<iostream>
using namespace std;

/*******

Inheritance -> legacy

Polymorphism:

    One thing is doing different task
Method Overriding :-
    Parent::display()
    Child::display()

    Method Overloading :-
    Calc :-
    add(int,int)
    add(double,double)
    add(long,long)

Access Specification
    Read Write

Parent:
private bank account
protected pin
public
void display(){

}

Child : pin

Encapsulation:
private variable access outside of the class
getter -> Read
setter -> Write
*******/

/***
class Parent{
    public:
        void display(){ cout<<"I am Parent"<<endl;}

};

class Child:public Parent{
    public:
        void display(){ cout<<"I am Child"<<endl;}

};
***/
/***
class Calc{
public:
    int add(int a,int b){
        return a+b;
    }
    double add(double a,double b){
        return a+b;
    }
    long add(long a,long b){
        return a+b;
    }
};
***/

class Bank
{
private:
    string accountno;
protected:
    int pin;
public:
    Bank(string ac)
    {
        accountno = ac;
    }
    string getAccountId()
    {
        return accountno;
    }
};

class Customer:public Bank
{
public:
    Customer(string ac):Bank(ac)
    {
        pin = 7125;
    }
    void setPin(int p)
    {
        pin = p;
    }
    int getPin()
    {
        return pin;
    }
    void display()
    {
        cout<<"Id "<<getAccountId()<<endl;
        cout<<"Pin "<<pin<<endl;
    }
};

main()
{
    /**
        Child d;
        d.display();
    **/
    /***
        Calc c;

        cout<<c.add(10,20)<<endl;
        cout<<c.add(10.200,20.33)<<endl;
        cout<<c.add(1000L,20L)<<endl;
    ***/

    Customer c("123456");
    c.display();
    c.setPin(1111);
    c.display();
}
