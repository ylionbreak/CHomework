#include <iostream>

#include "Canvas.h"
#include "Shape.h"

using namespace std;


Canvas::Canvas(){
	time=0;
}

void Canvas::append(Shape *shape){
	shapearray[time] = shape;  
	time++;
}

void Canvas::draw(){
	for(int i=0;i<time;i++){
		cout<<shapearray[i]->name<<endl;
	}
}
	
		

