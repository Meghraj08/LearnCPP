#include<iostream>
#include<fstream>
using namespace std;
main()
{
    char filedata;
    ofstream obj("demo1.txt");
    obj<<" Hello World \n";
    obj.close();

    ifstream obj1("Array.cpp");
    while(obj1)
    {
        obj1.get(filedata);
        cout<<filedata;
    }
    obj1.close();
}
