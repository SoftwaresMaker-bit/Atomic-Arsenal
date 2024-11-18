

#include <iostream>
#include "Weapon.h"
#include <string>

Weapon::Weapon(string _name,int _dp, string _chemistry){
	
	name = _name;
	dp = _dp;
	chemistry = _chemistry;
}

string Weapon::get_name(){
	return name;
}

int Weapon::get_dp(){
	return dp;
}


string Weapon::get_chemistry(){

	return chemistry;
}

void Weapon::set_info(string _name,int _dp, string _chemistry){
	name = _name;
	dp = _dp;
	chemistry = _chemistry;
}