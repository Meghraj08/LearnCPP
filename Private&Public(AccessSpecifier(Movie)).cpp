#include<iostream>
using namespace std;
class movie
{
private:
    string name,director,actors;
    int ratings=0;
    void setName(string name)
    {
        this->name = name;
    }
    void setDirector(string director)
    {
        this->director = director;
    }
    void setActors(string actors)
    {
        this->actors = actors;
    }
    void setRatings(int ratings)
    {
        if(ratings>0 && ratings<11)
        {
            this->ratings = ratings;
        }
    }
    string getName()
    {
        return this->name;
    }
    string getDirector()
    {
        return this->director;
    }
    string getActors()
    {
        return this->actors;
    }
    int getRatings()
    {
        return this->ratings;
    }
    void setMovie()
    {
        string name,director,actors;
        int ratings=0;
        cout<<" Enter Movie Name :- "<<endl;
        getline(cin,name);
        setName(name);
        cout<<" Enter Director Name :- "<<endl;
        getline(cin,director);
        setDirector(director);
        cout<<" Enter Actor's Name :- "<<endl;
        getline(cin,actors);
        setActors(actors);
        cout<<" Enter Rating's :- "<<endl;
        cin>>ratings;
        setRatings(ratings);
    }
    void displayMovie()
    {
        cout<<" ****************************** "<<endl;
        cout<<" Name :- "<<getName()<<endl;
        cout<<" Director :- "<<getDirector()<<endl;
        cout<<" Actor :- "<<getActors()<<endl;
        cout<<" Rating :- "<<getRatings()<<endl;
        cout<<" ****************************** "<<endl;
    }
public:
    void runMovie()
    {
        setMovie();
        displayMovie();
    }
};

int main()
{
    movie s;
    s.runMovie();
}
