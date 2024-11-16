Player.h
#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
using namespace std;

	
class Player{

private:
	char name;
	int hp;
	int dp;
	

public:
	Player(char _name,int _hp,int _dp);
	void attack(int);
	void hurted(int); // parameter sended by enemy
	int get_HP();
	void set_DP(int);
	int get_DP();
};
#endif
