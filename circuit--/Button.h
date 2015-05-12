#ifndef __BUTTON_H__
#define __BUTTON_H__

#include "Component.h"

class Button {
	
	public:
		void on();
		void off();
		void setComponent(Component* _allComponent[5],int _num);
		Component* allComponent[5];
		int num;
		
		
};
#endif
