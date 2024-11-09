Enemy.cpp

#include <iostream>
#include "Enemy.h"

Enemy::Enemy(char _name){
	//Constructor function for creating an enemy and assign it a name.
	name = _name;
}

void Enemy::Hurted(int damage){
	//function for receiving damage and update the health points
	hp = hp-damage;

}

void Enemy:: Attack(int DP,char player){
	//function for sending damage points to the object player 

}



int Enemy::Dmultiplier(int damage,char damage_chemistry){
	/* function for checking the chemistry of the damage receive and apply any multiplier
	to it if needed. This function should be called in the function Hurted(damage).*/

	return damage;
}