Player.h

class Player{

private:
	char name;
	int HP;
	int DP;
	

public:
	Player(char,int,int);
	void Attack(DP);
	void hurted(damage); // parameter sended by enemy
	int Get_HP();
	void Set_DP(_DP);
	int Get_DP();
}
