

#include <iostream>
#include "Player.h"

Player::Player(string _name, int _hp, int _dp){
	name = _name;
	hp = _hp;
	dp = _dp;

	weapon_1.set_info("Water_Sword", 30,"DIP")
	weapon_2.set_info("Oil_Gun", 20,"DI")
}

Player::Player(){
	
}

void Player::attack(int dp){

}

void Player::hurted(int damage){
	hp = hp - damage;
}

int Player::get_hp(){
	return hp;
}

void Player::set_dp(int _weapon){
	if(_weapon == 1){
		dp = weapon_1.get_dp();
	}
	else if(_weapon == 2){
		dp = weapon_2.get_dp();
	}
	
}

int Player::get_dp(){
	return dp;
}

void Player::set_info(string _name,int _hp,int _dp){
	name = _name;
	hp = _hp;
	dp = _dp;
}