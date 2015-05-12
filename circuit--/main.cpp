#include<iostream>

#include"Circuit.h"
#include"Lamp.h"
#include"Fan.h"
#include"Button.h"

using namespace std;

int main(){
	
	Circuit circuit;
	Lamp lamp;
	Fan fan;
	Button button;
	
	
	circuit.append(&lamp);
	circuit.append(&fan);
	circuit.setSwitch(&button);
	
	
	button.on();
	button.off();
	
	
	return 0;
}


