#ifndef CIRCLE_H
#define CIRCLE_H

#include "point.h"

class Circle{
    public:
        int x;
        int y;
        int R;
        Point point;
        Circle(Point& _point,int _R);
        void move(int _x,int _y);
        int getX();
        int getY();
        Point getCenter();
};
#endif
