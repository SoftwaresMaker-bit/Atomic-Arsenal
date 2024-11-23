

#include <iostream>
#include "GameMaster.h"

GameMaster::GameMaster( int _level){
	level = _level;
}


void GameMaster::set_player(string _name,int _hp){
	player.set_info(_name,_hp);
}

void GameMaster::set_enemy(string _name,float _hp,double _dp,string _chemistry){
	enemy.set_info(_name,_hp,_dp,_chemistry);
}

void GameMaster::set_ion_enemy(string _name,float _hp,double _dp,string _chemistry,int charge){
	ion_enemy.set_info(_name,_hp,_dp,_chemistry);
	ion_enemy.set_charge(charge);
}



string GameMaster::Attack_P2E(int weapon, int type, int level){
	string name;
	double damage;
	string chemistry;
	int charge = 0;

	// Set the player damage based on the user input

	if(type == 0)//normal weapons
	{	
		name = player.get_weapon(weapon).get_name();
		damage = player.get_weapon(weapon).get_dp();
		chemistry = player.get_weapon(weapon).get_chemistry();
	}

	else if(type == 1)// ion_weapons
	{ 
		name = player.get_ion_weapon(weapon).get_name();
		damage = player.get_ion_weapon(weapon).get_dp();
		chemistry = player.get_ion_weapon(weapon).get_chemistry();
		charge = player.get_ion_weapon(weapon).get_charge();

	}

	// send damage
	string data;

	if (level == 1){
	enemy.hurted(damage,chemistry,0);
	data = "You used " + name + " " + enemy.get_name() + "has " + std::to_string(enemy.get_hp()) + " left";
	}
	else{
		ion_enemy.hurted(damage,chemistry,charge);
		data = "You used " + name + ". " + ion_enemy.get_name() + "has " + std::to_string(ion_enemy.get_hp()) + " hp left";
	}	
	return data;
};


string GameMaster::Attack_E2P(int level){
	int damage;
	string data;

	if (level == 1){
		damage = enemy.get_dp();
		player.hurted(damage);
		data = "You have being attack by " + enemy.get_name() + ". You have " + std::to_string(player.get_hp()) + " HP remaining";

	}
	else{
		damage = ion_enemy.get_dp();
		player.hurted(damage);
		data = "You have being attack by " + ion_enemy.get_name() + ". You have " + std::to_string(player.get_hp()) + " HP remaining";
	}

	


	return data;
}




int GameMaster::get_level(){
	return level;
}

Player& GameMaster::get_player(){
	return player;
}

Enemy& GameMaster::get_enemy(){
	return enemy;
}

Ion_Enemy& GameMaster::get_ion_enemy(){
	return ion_enemy;
}







