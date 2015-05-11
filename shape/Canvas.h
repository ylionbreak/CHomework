#ifndef _CANVAS_H__
#define _CANVAS_H__

#include "Shape.h"

class Canvas{
	public:
		int time;
		
		Shape *shapearray[5];
		
		Canvas();
		void append(Shape *shape);
		
		void draw();

};



#endif

