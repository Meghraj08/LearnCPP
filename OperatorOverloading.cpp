#include<iostream>
using namespace std;

class Point{
public:
    int x,y;

    Point(){
        x = 0;
        y = 0;
    }

    Point(int x,int y){
        this->x = x;
        this->y = y;
    }

    Point operator+(Point p){
        Point o;
        o.x = this->x + p.x;
        o.y = this->y + p.y;
        return o;
    }

    void display(){
        cout<<"x "<<x<<endl;
        cout<<"y "<<y<<endl;
    }

};



main(){
    Point p(1,2),p1(2,4),p3;
    p3 = p + p1;
    p3.display();
}
