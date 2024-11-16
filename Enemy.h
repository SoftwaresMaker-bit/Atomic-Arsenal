Enemy.h

class Enemy {

protected: 
	char name;
	int hp; // Health points, enemies life 
	int dp; // Damage points send to the player class throught the attack function
	char chemistry;
public: 
	Enemy(char _name,int _hp,int _dp,char _chemistry);
	void Hurted(int, char); // this parameters are sended by the player
	void Attack(int);
	int Get_HP();
	int Get_DP();

}
