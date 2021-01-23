#include<iostream>
using namespace std;
int main()
{
    int n,i;
    char yes;
    do
    {
        cout<<" Enter Number :- "<<endl;
        cin>>n;
        for(i=1; i<=10; i++)
        {
            cout<<n<<" * "<<i<<" = "<<n*i<<endl;
        }
        cout<<endl<<" Press Y To Continue :- "<<endl;
        fflush(stdin);
        cin>>yes;
    }
    while(yes=='Y' || yes=='y');
}
