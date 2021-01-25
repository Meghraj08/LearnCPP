#include<iostream>
#include<string>
using namespace std;


/**
                Person
                  |
               Cricketer
                 /    \
            Batsman   Bowler
                 \    /
                Allrounder
**/



/**

Method Overriding   ->  Needs Inheritance

Method overloading


**/

class person
{
    /// Data hiding
private:
    string name;    /// properties
/// Data abstraction
public:
    void setName()    /// methods
    {
        cout<<"Enter name"<<endl;
        cin>>this->name;
    }
//    void setName(string name)
//    {
//        cout<<"Hello"<<endl;
//    }
//    void setName(string name,int a)
//    {
//        cout<<"Hello"<<endl;
//    }
    string getName()
    {
        return this->name;
    }
    string toString(){
        string temp = "Name :" + this->name + " ";
        return temp;
    }
};
class cricketer:public person   /// Inheritance
{
private:
    string teamName;
public:
    void setTeamName()
    {
        cout<<"Enter Team Name"<<endl;
        cin>>this->teamName;
    }
    string getTeamName()
    {
        return this->teamName;
    }
    string toString(){
        string temp = person::toString() + "TeamName :" + this->teamName + " ";
        return temp;
    }
};
class batsman:public cricketer
{
private:
    int runs;
public:
    void setRuns()
    {
        cout<<"Enter Runs"<<endl;
        cin>>this->runs;
    }
    int getRuns()
    {
        return this->runs;
    }
    string toString(){
        string temp = cricketer::toString() + "Runs :" + to_string(this->runs) + " ";
        return temp;
    }
};

class bowler:public cricketer
{
private:
    int wickets;
public:
    void setWickets()
    {
        cout<<"Enter Wickets"<<endl;
        cin>>this->wickets;
    }
    int getWickets()
    {
        return this->wickets;
    }
        string toString(){
        string temp = cricketer::toString() + "Wickets :" + to_string(this->wickets) + " ";
        return temp;
    }
};

class allRounder:public batsman,public bowler{
public:
string toString(){

return batsman::toString() + " Wickets :" + to_string(this->getWickets());  /// to_string -> convert int into string
}
};

int main()
{
allRounder a;
a.batsman::setName();
a.batsman::setTeamName();
a.setRuns();
a.setWickets();
///cout<<a.batsman::getName()<<" "<<a.batsman::getTeamName()<<" "<<a.getRuns()<<" "<<a.getWickets();
cout<<a.toString();
}
