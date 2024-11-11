Enemy.h

class Enemy {

private: 
	char name;
	int hp; // Health points, enemies life 
	char chemistry;
	int damage_received; // damage receive from the player, used in function Hurted
	char damage_received_chemistry; 

public: 
	Enemy(name);
	void Hurted(damage);
	int Dmultiplier(damage_received,damage_received_chemistry)






}
