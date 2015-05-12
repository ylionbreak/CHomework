#ifndef __CIRCUIT_H__
#define __CIRCUIT_H__

#include "Button.h"
#include "Component.h"

class Circuit{
	
	public:
		Circuit();
		void setSwitch(Button *button);
		void append(Component *compoent);
		Component *allComponent[5];
		int num;

};

#endif
