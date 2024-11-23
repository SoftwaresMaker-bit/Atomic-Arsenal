
#ifndef GAMEMASTER_H
#define GAMEMASTER_H
	
#include <iostream>
#include <string>
#include "Player.cpp"
#include "Enemy.cpp"
#include "Ion_Enemy.cpp"
using namespace std;

class GameMaster{
private:
	Player player;
	Enemy enemy;
	Ion_Enemy ion_enemy;
	int level;
	

public:
	GameMaster(int level );
	void set_player(string _name,int _hp);
	void set_enemy(string _name,int _hp,int _dp,string _chemistry);
	void set_ion_enemy(string _name,int _hp,int _dp,string _chemistry,int charge);
	
	
	int get_level();
	Player& get_player();
	Enemy& get_enemy();
	Ion_Enemy& get_ion_enemy();

	//Battle methods
	string Attack_P2E(int weapon ,int type, int level); // second parameter is for the type of weapon 0 for normal weapon, 1 for Ion weapons.
	string Attack_E2P(int level);


}; 
#endif
