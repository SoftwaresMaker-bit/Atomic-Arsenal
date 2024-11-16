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
	char Get_name();
	int Get_dp();
	char Get_chemistry();




};
#endif
