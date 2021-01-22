#include<iostream>
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


class person
{
    /// Data hiding
private:
    string name;
/// Data abstraction
public:
    void setName()
    {
        cout<<"Enter name"<<endl;
        cin>>this->name;
    }
    string getName()
    {
        return this->name;
    }
};
class cricketer:public person
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
};

class allRounder:public batsman,public bowler{


};

int main()
{
allRounder a;
a.batsman::setName();
a.bowler::setTeamName();
a.setRuns();
a.setWickets();
cout<<a.batsman::getName()<<" "<<a.bowler::getTeamName()<<" "<<a.getRuns()<<" "<<a.getWickets();
}
