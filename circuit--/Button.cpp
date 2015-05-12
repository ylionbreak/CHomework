#include"Button.h"

		void Button::on(){
			int i;
			for(i=0;i<num;i++)
				allComponent[i]->on();	
		}
		
		void Button::off(){
			int i;
			for(i=0;i<num;i++)
				allComponent[i]->off();
		}
		
		void Button::setComponent(Component *_allComponent[5],int _num){
			int i;
			for(i=0;i<5;i++){
				allComponent[i]=_allComponent[i];
			}
		
			num=_num;
		}


