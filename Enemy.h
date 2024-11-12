Enemy.h

class Enemy {

protected: 
	char name;
	int hp; // Health points, enemies life 
	int dp; // Damage points send to the player class throught the attack function
	char chemistry;
public: 
	Enemy(char,int,int,char);
	void Hurted(damage_received, damage_received_chemistry); // this parameters are sended by the player
	void Attack(DP);
	void Set_HP(_HP);
	int Get_HP();
	void Set_DP(_DP);
	int Get_DP();

}
