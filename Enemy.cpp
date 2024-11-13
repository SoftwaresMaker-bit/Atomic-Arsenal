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

void Enemy::Hurted(int damage, char dp_chem){
	//function for receiving damage and update the health points
	hp = hp-damage;

}

void Enemy:: Attack(int DP){
	//function for sending damage points to the object player 

}

int Enemy::Get_HP(){
	return hp;
		}

int Enemy::Get_DP(){
	return dp;
}
