#include "Ion_Enemy.h"
#include <string>

Ion_Enemy::Ion_Enemy(string _name,float _hp,double _dp,string _chemistry,int _charge):Enemy(_name,_hp,_dp,_chemistry){
	charge = _charge;
	name = _name;
	hp = _hp;
	dp = _dp;
	chemistry = _chemistry;
}

Ion_Enemy::Ion_Enemy():Enemy(){
	
}

void Ion_Enemy::set_charge(int _charge){
	charge= _charge;
}

int Ion_Enemy::get_charge(){
	return charge;
}

int Ion_Enemy::hurted(double damage,string D_chemistry,int D_charge ){
	if (D_chemistry == "ION"){
		
		if (D_charge == charge){
			return hp; // No damage Done, equal charges
		}

		else{
			hp = hp-damage*3; // Ion weapon detected with opposite charge, triple damage
		}
	}

	else if(D_chemistry == "DIP"){
		hp = hp - (damage*1.5);
	}

	else if(D_chemistry == "DI"){
		hp = hp- (damage*1.75);
	}

	return hp;

} 
