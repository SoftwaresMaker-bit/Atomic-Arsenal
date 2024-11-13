Player.cpp

#include <iostream>
#include "Player.h"

Player::Player(char _name, int _hp, int _dp){
	name = _name;
	hp = _hp;
	dp = _dp;
}

void Player:: Attack(int dp){

}

void Player:: hurted(int damage){
	hp = hp - damage;
}

int Player::Get_HP(){
	return hp;
}

void Player::Set_DP(int _dp){
	dp = _dp;
}

int Player::Get_DP(){
	return dp;
}
