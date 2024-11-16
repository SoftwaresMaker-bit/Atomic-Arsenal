Weapon.h
#ifndef WEAPON_H
#define WEAPON_H
#include <iostream>
#include <string>
using namespace std;


class Weapon {


public:
	char name;
	int dp;
	char chemistry;

public:
	Weapon(string _name,int _dp,string _chemistry);
	string get_name();
	int get_dp();
	string get_chemistry();




};
#endif
