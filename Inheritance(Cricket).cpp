#include<iostream>
#include<string>
using namespace std;
class person
{
private:
    string name;
public:
    void setName()
    {
        cout<<" Enter Name :- "<<endl;
        cin>>this->name;
    }
    string getName()
    {
        return this->name;
    }
    string toString()
    {
        string temp = " Name :- " + this->name + " ";
        return temp;
    }
};

class cricketer:public person
{
private:
    string teamName;
public:
    void setTeamName()
    {
        cout<<" Enter Team Name :- "<<endl;
        cin>>this->teamName;
    }
    string getTeamName()
    {
        return this->teamName;
    }
    string toString()
    {
        string temp = person::toString() + " Team Name :- " + this->teamName + " ";
    }
};

class batsman:public cricketer
{
private:
    int runs;
public:
    void setRuns()
    {
        cout<<" Enter Runs :- "<<endl;
        cin>>this->runs;
    }
    int getRuns()
    {
        return this->runs;
    }
    string toString()
    {
        string temp = cricketer::toString() + " Runs :- " + to_string(this->runs) + " ";
    }
};

class bowler:public cricketer
{
private:
    int wickets;
public:
    void setWickets()
    {
        cout<<" Enter Wickets :- "<<endl;
        cin>>this->wickets;
    }
    int getWickets()
    {
        return this->wickets;
    }
    string toString()
    {
        string temp = cricketer::toString() + " Wickets :- " + to_string(this->wickets) + " ";
    }
};

class allRounder:public batsman,public bowler
{
    public:
    string toString()
    {
        return batsman::toString() + " Wickets :- " + to_string(this->getWickets());
    }
};

int main()
{
    allRounder a;
    a.batsman::setName();
    a.batsman::setTeamName();
    a.setRuns();
    a.setWickets();
    cout<<a.toString();
}
