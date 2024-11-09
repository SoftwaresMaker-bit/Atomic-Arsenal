Enemy.h

class Enemy {

private: 
	-char name;
	- int hp; // Health points, enemies life 
	- int dp; // damage points, enemies damage to the player 
	- char chemistry;
	- int damage; // damage receive from the player, used in function Hurted
	- char player;
	- char damage_chemistry; 

public: 

	+Enemy(name);
	+ void Hurted(damage);
	+ void Attack(DP,player);
	+ int Dmultiplier(damage,damage_chemistry)






}
