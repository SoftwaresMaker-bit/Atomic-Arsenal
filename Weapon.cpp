Weapon.cpp

#include <iostream>
#include "Weapon.h"

Weapon::Weapon(char _name){

	name = _name;
}

int Weapon::Get_damage(){

	return damage;
}

char Weapon::Get_chemistry(){

	return chemistry;
}