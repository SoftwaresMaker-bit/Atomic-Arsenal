

#include <iostream>
#include "Player.h"

Player::Player(string _name, int _hp){
	name = _name;
	hp = _hp;
	

	
}

Player::Player(){
	
}



// Metodos de inventario de armas

void Player::add_weapon(const Weapon& weapon) {
    weapons.push_back(weapon);
}

// Devuelve referencia a un arma (modificable)
Weapon& Player::get_weapon(size_t index) {
    return weapons.at(index); // Usa at() para evitar accesos fuera de rango
}


// Devuelve el número de armas
size_t Player::get_weapon_count() const {
    return weapons.size();

}


//Metodos de Ion_weapon 

void Player::add_ion_weapon(const Ion_Weapon& ion_weapon) {
    ion_weapons.push_back(ion_weapon);
}

// Devuelve referencia a un arma (modificable)
Ion_Weapon& Player::get_ion_weapon(size_t index) {
    return ion_weapons.at(index); // Usa at() para evitar accesos fuera de rango

}



void Player::hurted(int damage){
	hp = hp - damage;
}

int Player::get_hp(){
	return hp;
}

string Player::get_name(){
	return name;
}


void Player::set_info(string _name,int _hp){
	name = _name;
	hp = _hp;
	
}

















