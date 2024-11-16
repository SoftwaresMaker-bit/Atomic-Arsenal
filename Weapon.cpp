Weapon.cpp

#include <iostream>
#include "Weapon.h"

Weapon::Weapon(char _name,int _DP, char _chemistry){
	
	name = _name;
	dp = _dp;
	chemistry = _chemistry;
}

int Weapon::Get_name(){
	return name;
}

int Weapon::Get_dp(){
	return dp;
}


char Weapon::Get_chemistry(){

	return chemistry;
}
