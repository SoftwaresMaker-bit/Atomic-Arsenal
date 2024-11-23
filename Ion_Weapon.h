
#ifndef ION_WEAPON_H
#define ION_WEAPON_H

#include "Weapon.h"
#include <string>
using namespace std;

class Ion_Weapon:public Weapon{
private:
	int charge;

public:
	Ion_Weapon(string _name,double _DP, string _chemistry,int _charge);
	int get_charge();
	void set_charge(int _charge);
	string get_info();
};
#endif