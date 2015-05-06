
#include"point.h"

circle::Circle(Point& _point,int _R){
    x = _point.getX();
    y = _point.getY();
    R = _R;
    point = _point;
}
circle::void move(int _x,int _y){
    x=_x;
    y=_y;
}
circle::int getX(){
    return x;
}
circle::int getY(){
    return y;
}
circle::Point getCenter(){
   return  point;
}
