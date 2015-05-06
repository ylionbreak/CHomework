
#include"circle.h"

Circle::Circle(Point& _point,int _R){
    x = _point.getX();
    y = _point.getY();
    R = _R;
    point = _point;
}
void Circle:: move(int _x,int _y){
    x=_x;
    y=_y;
}
int Circle:: getX(){
    return x;
}
int Circle:: getY(){
    return y;
}
Point Circle:: getCenter(){
   return  point;
}
