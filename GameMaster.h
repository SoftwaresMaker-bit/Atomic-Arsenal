
#ifndef GAMEMASTER_H
#define GAMEMASTER_H
	
#include <iostream>
#include <string>
#include "Player.cpp"
#include "Enemy.cpp"
using namespace std;

class GameMaster{
private:
	Player player;
	Enemy enemy;
	int turn; // Variable for the turn of either the player or the enemy. 0 =player, 1 =enemy

public:
	GameMaster(int turn);
	void set_player(string _name,int _hp,int _dp);
	void set_enemy(string _name,int _hp,int _dp,string _chemistry);
	void Start_Battle();
	void Manage_turns(int turn);
	void End_Battle();
	Player& get_player();
	Enemy& get_enemy();

}; 
#endif
