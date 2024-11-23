
#ifndef ENEMY_H
#define ENEMY_H
#include <iostream>
#include <string>
	
using namespace std;
class Enemy {

protected: 
	string name;
	float hp; // Health points, enemies life 
	double dp; // Damage points send to the player class throught the attack function
	string chemistry;
public: 
	Enemy(string _name,float _hp,double _dp,string _chemistry);
	Enemy();
	void set_info(string _name,float _hp,double _dp,string _chemistry);
	void hurted(double, string,int); // this parameters are sended by the player
	int get_hp();
	double get_dp();
	string get_chemistry();
	string get_name();
	string get_info();

}; 
#endif
