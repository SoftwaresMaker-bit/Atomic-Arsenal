

#include <iostream>
#include "Weapon.h"
#include <string>

Weapon::Weapon(string _name,double _dp, string _chemistry){
	
	name = _name;
	dp = _dp;
	chemistry = _chemistry;
}

string Weapon::get_name(){
	return name;
}

double Weapon::get_dp(){
	return dp;
}


string Weapon::get_chemistry(){

	return chemistry;
}

void Weapon::set_info(string _name,double _dp, string _chemistry){
	name = _name;
	dp = _dp;
	chemistry = _chemistry;
}

string Weapon::get_info(){
	string Data = name + " has " + std::to_string(dp) + " damage points and has " + chemistry + " chemistry ";
	return Data;
}



