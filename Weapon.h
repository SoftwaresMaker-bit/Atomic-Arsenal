Weapon.h
#ifndef WEAPON_H
#define WEAPON_H
using namespace std;
class Weapon {


public:
	char name;
	int dp;
	char chemistry;

public:
	Weapon(char _name,int _dp,char _chemistry);
	char get_name();
	int get_dp();
	char get_chemistry();




};
#endif
