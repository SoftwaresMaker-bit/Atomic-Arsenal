GameMaster.h

class GameMaster{
private:
	char player;
	char enemy;
	int turn; // Variable for the turn of either the player or the enemy. 0 =player, 1 =enemy

public:
	GameMaster(char,char,int);
	void Start_Battle();
	void Manage_turns(turn);
	void End_Battle();
}
