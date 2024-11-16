GameMaster.h

class GameMaster{
private:
	Player player
	Enemy enemy
	int turn; // Variable for the turn of either the player or the enemy. 0 =player, 1 =enemy

public:
	GameMaster(int turn);
	void Start_Battle();
	void Manage_turns(int);
	void End_Battle();
}
