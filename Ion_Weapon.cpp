#include "Ion_Weapon.h"
#include <string>


Ion_Weapon::Ion_Weapon(string _name,double _DP, string _chemistry ,int _charge):Weapon(_name,_DP,_chemistry){
	name = _name;
	dp = _DP;
	chemistry = "ION";
	charge = _charge;
}

int Ion_Weapon::get_charge(){
	return charge;
}

void Ion_Weapon::set_charge(int _charge){
	charge = _charge;
}

string Ion_Weapon::get_info(){
	string Data = name + " has " + std::to_string(dp) + " damage points ,has " + chemistry + " chemistry " + " and has charge of " + std::to_string(charge);
	return Data;
}