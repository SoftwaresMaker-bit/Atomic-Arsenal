

#include <iostream>
#include "GameMaster.h"

GameMaster::GameMaster(int _turn){
	turn = _turn;
}


void GameMaster::set_player(string _name,int _hp,int _dp){
	player.set_info(_name,_hp,_dp);
}

void GameMaster::set_enemy(string _name,int _hp,int _dp,string _chemistry){
	enemy.set_info(_name,_hp,_dp,_chemistry);
}


void GameMaster::Start_Battle(){

	turn = 0;


}

void GameMaster::Manage_turns(int turn){
	if (turn == 0){
		turn = 1;
	}
	else{
		turn = 0;
	}

}



void GameMaster::End_Battle(){


}



Player& GameMaster::get_player(){
	return player;
}

Enemy& GameMaster::get_enemy(){
	return enemy;
}









