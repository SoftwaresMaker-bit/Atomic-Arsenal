Player.h

class Player{

private:
	char name;
	int hp;
	int dp;
	

public:
	Player(char,int,int);
	void Attack(int);
	void hurted(int); // parameter sended by enemy
	int Get_HP();
	void Set_DP(int);
	int Get_DP();
}
