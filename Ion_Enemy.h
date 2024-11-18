#ifndef ION_ENEMY_H
#define ION_ENEMY_H

#include "Enemy.h"
#include <string>
using namespace std;


class Ion_Enemy:public Enemy {
private:
	int charge;

public:
	Ion_Enemy(string _name,int _hp,int _dp,string _chemistry,int _charge);
	int get_charge();
	void set_charge(int _charge);
	int hurted(int _damage, string _chemistry, int _charge);


};
#endif