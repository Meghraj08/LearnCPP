#include<iostream>
#include<fstream>
using namespace std;

/***

fstream -> reader/writer
ifstream -> reader
ofstream -> writer

***/


main(){
    char filedata;
    ofstream obj("sumit.txt");
    obj<<"Hello World\n";
    obj.close();

    ifstream obj2("filehandling.cpp");
    while(obj2){
        obj2.get(filedata);
        cout<<filedata;
    }
    obj2.close();
}
