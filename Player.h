
#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
#include "Weapon.cpp"
using namespace std;

	
class Player{

private:
	string name;
	int hp;
	int dp;
	
	Weapon weapon_1;
	Weapon weapon_2;
	

public:
	Player(string _name,int _hp,int _dp);
	Player();

	void set_info(string _name,int _hp,int _dp);
	void attack(int);
	void hurted(int); // parameter sended by enemy
	
	int get_hp();
	void set_dp(int);
	int get_dp();

	
};
#endif
