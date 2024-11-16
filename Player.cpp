Player.cpp

#include <iostream>
#include "Player.h"

Player::Player(char _name, int _hp, int _dp){
	name = _name;
	hp = _hp;
	dp = _dp;
}

void Player::attack(int dp){

}

void Player::hurted(int damage){
	hp = hp - damage;
}

int Player::get_HP(){
	return hp;
}

void Player::set_DP(int _dp){
	dp = _dp;
}

int Player::get_DP(){
	return dp;
}
