
#include"Circuit.h"

Circuit::Circuit(){
	num=0;
}

void Circuit::setSwitch(Button *button){
	button->setComponent(allComponent,num);
}

void Circuit::append(Component *component){
	allComponent[num]=component;
	num++;
}
