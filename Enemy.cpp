
#include <string>
#include <iostream>
#include "Enemy.h"

Enemy::Enemy(string _name,float _hp,double _dp,string _chemistry){
	//Constructor function for creating an enemy and assign its atributes.
	name = _name;
	hp = _hp;
	dp = _dp;
	chemistry = _chemistry;
}

Enemy::Enemy(){

}

void Enemy::hurted(double damage, string dp_chem,int charge = 0){
	//function for receiving damage and update the health points
	if(chemistry == "DIP"){
		if(dp_chem == "ION"){
			hp = hp - (damage*2);
		}

		else if(dp_chem == "DIP"){
			hp = hp - damage;
		}

		else if(dp_chem == "DI"){
			hp = hp-(damage*1.25);
		}
		
	}

	if(chemistry == "DI"){
		if(dp_chem == "ION"){
			hp = hp - (damage*2);
		}

		else if(dp_chem == "DIP"){
			hp = hp- (damage*0.5);
		}

		else if(dp_chem == "DI"){
			hp = hp-damage;
		}
		
	}
}


int Enemy::get_hp(){
	return hp;
		}
string Enemy::get_chemistry(){
	return chemistry;
}

double Enemy::get_dp(){
	return dp;
}

string Enemy::get_name(){
	return name;
}

void Enemy::set_info(string _name,float _hp,double _dp,string _chemistry){
	name = _name;
	hp = _hp;
	dp = _dp;
	chemistry = _chemistry;
}



string Enemy::get_info(){
	string data = name + " has " + std::to_string(hp) + " health points, does " + std::to_string(dp) + " damage points and has " + chemistry + " chemistry";
	return data;
}








