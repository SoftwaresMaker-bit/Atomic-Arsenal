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
	void Attack(int);
	void Hurted(int); // parameter sended by enemy
	int Get_HP();
	void Set_DP(int);
	int Get_DP();
};
#endif
