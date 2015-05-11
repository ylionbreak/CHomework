#ifndef _RECT_H__
#define _RECT_H__

#include "Shape.h"
#include <iostream>

class Rect :public Shape{
	public:
		int x,y,width,length;
		Rect(int x,int y,int width,int length);
};

#endif 
