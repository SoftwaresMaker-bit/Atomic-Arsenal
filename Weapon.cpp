Weapon.cpp

#include <iostream>
#include "Weapon.h"

Weapon::Weapon(char _name,int _DP, char _chemistry){
	
	name = _name;
	DP = _DP;
	chemistry = _chemistry;
}

int Weapon::Get_name(){
	return name;
}

int Weapon::Get_DP(){
	return DP;
}


char Weapon::Get_chemistry(){

	return chemistry;
}
