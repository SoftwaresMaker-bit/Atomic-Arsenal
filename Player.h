Player.h

class Player{

private:
	char name;
	int hp;
	int dp;
	

public:
	Player(char,int,int);
	void Attack(DP);
	void hurted(damage); // parameter sended by enemy
	int Get_HP();
	void Set_DP(_DP);
	int Get_DP();
}
