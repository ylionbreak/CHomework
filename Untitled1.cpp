#include<iostream>

using namespace std;

class Point{
    public:
        int x,y;
        Point(){
        }
        Point(int _x,int _y){
            x=_x;
            y=_y;
        }
        int getX(){
            return x;
        }
        int getY(){
            return y;
        }

};

class Circle{
    public:
        int x;
        int y;
        int R;
        Point point;
        Circle(Point& _point,int _R){
            x = _point.getX();
            y = _point.getY();
            R = _R;
            point = _point;
        }
        void move(int _x,int _y){
            x=_x;
            y=_y;
        }
        int getX(){
            return x;
        }
        int getY(){
            return y;
        }
        Point getCenter(){
           return  point;
        }
};



int main(){

    Point center(10,20);
    Circle circle(center,5);
    circle.move(30,20);
    cout<<circle.getCenter().getX()<<endl;


}
