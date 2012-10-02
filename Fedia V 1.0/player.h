#include <iostream>
#include <string>
#include <vector>

using namespace std;

class c_Player
{
private:

	
	vector<int> itemAmount;
	static string cPlayerName;
public:
	static vector<string> itemName;
	static int level;
	static int hp;
	static int xp;
	void f_addItem(int itemId);
	string r_getItemPlayer(int itemId, int itemType);
	string r_getItem(int itemId);
	string r_getPlayerName();
	int r_getPlayerHp();
	int r_getPlayerLevel();
	c_Player(string playerName);
	c_Player();
	bool r_removePlayerHp(int amount);
	void f_setPlayerXP(int amount);
	void f_setPlayerLevel();
	void f_playerInfo();
};
