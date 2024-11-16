Weapon.cpp

#include <iostream>
#include "Weapon.h"

Weapon::Weapon(char _name,int _DP, char _chemistry){
	
	name = _name;
	dp = _dp;
	chemistry = _chemistry;
}

int Weapon::get_name(){
	return name;
}

int Weapon::get_dp(){
	return dp;
}


char Weapon::get_chemistry(){

	return chemistry;
}
