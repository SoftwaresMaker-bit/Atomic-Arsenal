Enemy.cpp

#include <iostream>
#include "Enemy.h"

Enemy::Enemy(char _name,int _hp,int _dp,char _chemistry){
	//Constructor function for creating an enemy and assign its atributes.
	name = _name;
	hp = _hp;
	dp = _dp;
	chemistry = _chemistry;
}

void Enemy::hurted(int damage, char dp_chem){
	//function for receiving damage and update the health points
	hp = hp-damage;

}

void Enemy::attack(int DP){
	//function for sending damage points to the object player 

}

int Enemy::get_hp(){
	return hp;
		}

int Enemy::get_dp(){
	return dp;
}

string Enemy::get_name(){
	return name
}



