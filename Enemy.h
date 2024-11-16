Enemy.h

#ifndef ENEMY_H
#define ENEMY_H
#include <iostream>
#include <string>
	
using namespace std;
class Enemy {

protected: 
	char name;
	int hp; // Health points, enemies life 
	int dp; // Damage points send to the player class throught the attack function
	char chemistry;
public: 
	Enemy(char _name,int _hp,int _dp,string _chemistry);
	void hurted(int, char); // this parameters are sended by the player
	void attack(int);
	int get_HP();
	int get_DP();
	string get_name();

}; 
#endif
