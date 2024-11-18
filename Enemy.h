
#ifndef ENEMY_H
#define ENEMY_H
#include <iostream>
#include <string>
	
using namespace std;
class Enemy {

protected: 
	string name;
	float hp; // Health points, enemies life 
	int dp; // Damage points send to the player class throught the attack function
	string chemistry;
public: 
	Enemy(string _name,float _hp,int _dp,string _chemistry);
	Enemy();
	void set_info(string _name,float _hp,int _dp,string _chemistry);
	void hurted(int, string,int); // this parameters are sended by the player
	void attack(int);
	int get_hp();
	int get_dp();
	string get_chemistry();
	string get_name();

}; 
#endif
