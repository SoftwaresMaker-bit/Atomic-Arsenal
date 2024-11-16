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
	Weapon(char,int,char);
	char Get_name();
	int Get_DP();
	char Get_chemistry();




};
#endif
