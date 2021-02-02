#include<iostream>
#include<fstream>
using namespace std;
main()
{
    char filedata;
    ifstream obj2("Array.cpp");
    while(obj2)
    {
        obj2.get(filedata);
        cout<<filedata;
    }
    obj2.close();
}
