
#include <string>
#include <iostream>
#include "Enemy.h"

Enemy::Enemy(string _name,float _hp,int _dp,string _chemistry){
	//Constructor function for creating an enemy and assign its atributes.
	name = _name;
	hp = _hp;
	dp = _dp;
	chemistry = _chemistry;
}

Enemy::Enemy(){

}

void Enemy::hurted(int damage, string dp_chem,int charge = 0){
	//function for receiving damage and update the health points
	if(chemistry == "DIP"){
		if(dp_chem == "ION"){
			hp = hp - (damage*1.5);
		}

		else if(dp_chem == "DIP"){
			hp = hp- damage;
		}

		else if(dp_chem == "DI"){
			hp = hp-(damage*0.5);
		}
		
	}

	if(chemistry == "DI"){
		if(dp_chem == "ION"){
			hp = hp - (damage*1.75);
		}

		else if(dp_chem == "DIP"){
			hp = hp- (damage*1.5);
		}

		else if(dp_chem == "DI"){
			hp = hp-damage;
		}
		
	}
}

void Enemy::attack(int DP){
	//function for sending damage points to the object player 

}

int Enemy::get_hp(){
	return hp;
		}
string Enemy::get_chemistry(){
	return chemistry;
}

int Enemy::get_dp(){
	return dp;
}

string Enemy::get_name(){
	return name;
}

void Enemy::set_info(string _name,float _hp,int _dp,string _chemistry){
	name = _name;
	hp = _hp;
	dp = _dp;
	chemistry = _chemistry;
}


