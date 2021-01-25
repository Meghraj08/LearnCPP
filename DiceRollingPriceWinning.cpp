#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    srand((unsigned)time(0));
    cout<<" Your dice has been rolled! You got :- "<<endl;
    int result = 1+(rand()%6);
    cout<<" Result "<<result<<endl;
    switch(result)
    {
    case 1:
        cout<<" Your price is our original T-shirt! "<<endl;
        break;
    case 2:
        cout<<" Your price is our original Cap! "<<endl;
        break;
    case 3:
        cout<<" Your price is our original Necklace! "<<endl;
        break;
    case 4:
        cout<<" Your price is our original Keychain! "<<endl;
        break;
    case 5:
        cout<<" Your price is our original Cup Set! "<<endl;
        break;
    case 6:
        cout<<" Your price is our original Shoes! "<<endl;
        break;
    default:
        cout<<" Error "<<endl;
        break;
    }
}
