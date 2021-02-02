#include<iostream>
#include<fstream>
using namespace std;
main()
{
    char filedata;
    ofstream obj("demo.txt");
    obj<<" Myself Meghraj \n";
    obj.close();
}
