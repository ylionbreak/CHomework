#include<iostream>
#include "circle.h"
#include "point.h"

using namespace std;







int main(){

    Point center(10,20);
    Circle circle(center,5);
    circle.move(30,20);
    cout<<circle.getCenter().getX()<<endl;


}
