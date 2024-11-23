
#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
#include <vector>
#include "Weapon.cpp"
#include "Ion_Weapon.cpp"
using namespace std;

	
class Player{

private:
	string name;
	int hp;
	
	std::vector<Weapon> weapons; // vector para las armas del jugador
	std::vector <Ion_Weapon> ion_weapons; // Crea una instancia de Ion_Weapon

public:
	Player(string _name,int _hp);
	Player();

	void set_info(string _name,int _hp);
	void hurted(int); // parameter sended by enemy
	
	int get_hp();
	string get_name();

	//Ion_Weapon functions
	void add_ion_weapon(const Ion_Weapon& weapon);
	Ion_Weapon& get_ion_weapon(size_t index);

	//Metodos para armas

	void add_weapon(const Weapon& weapon); // Agrega un arma al jugador.
    Weapon& get_weapon(size_t index); // Devuelve referencia a un arma.
    size_t get_weapon_count() const; // Devuelve la cantidad de armas del jugador.
	

	
};
#endif
