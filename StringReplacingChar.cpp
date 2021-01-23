#include<iostream>
using namespace std;
int main()
{
    string name;
    char f,r;
    cout<<" Enter Your Name :- "<<endl;
    getline(cin,name);
    cout<<" What Do You Want To Find :- "<<endl;
    cin>>f;
    cout<<" Replacing Character With :- "<<endl;
    cin>>r;
    for(int i=0; i<name.length(); i++)
    {
        if(name[i]==f)
        {
            name[i]=r;
        }
    }
    cout<<" Your Updated Name Is :- "<<name<<endl;
    return 0;
}
