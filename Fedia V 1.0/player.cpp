#include "player.h"
int c_Player::level = 1;
int c_Player::hp = 50;
int c_Player::xp = 0;
int commonHp = 50;
string c_Player::cPlayerName;
vector<string> c_Player::itemName;
c_Player::c_Player(string playerName)
{
	
	cPlayerName = playerName;
	itemName.push_back("Broken Sword");
	itemName.push_back("Broken Armor");
	itemName.push_back("Sword");
	itemName.push_back("Armor");
}
c_Player::c_Player()
{
}
string c_Player::r_getPlayerName()
{
	return cPlayerName;
}
void c_Player::f_addItem(int itemId)
{
	++itemAmount[itemId];
}
string c_Player::r_getItemPlayer(int itemId, int itemType)
{
	if (itemType == 1) // Sword
	{
		if (level <= 5)
		{
			string str_Return = itemName[0];
			return str_Return;
		}
		else
		{
			string str_Return = itemName[2];
			return str_Return;
		}
	}
	if (itemType == 2) // Armor
	{
		if (level <= 5)
		{
			string str_Return = itemName[1];
			return str_Return;
		}
		else
		{
			string str_Return = itemName[3];
			return str_Return;
		}
	}
	else 
	{
		return "Invalid";
	}
}
void c_Player::f_setPlayerXP(int amount)
{
	xp = xp + amount;
}
void c_Player::f_setPlayerLevel()
{
	level = level + 1;
}
bool c_Player::r_removePlayerHp(int amount)
{
	
	hp = hp - amount;
	if(hp <= 0)
	{
		hp = 25 + 25 * level;
		return 0;
	}
	else 
	{
		return 1;
	}

}
void c_Player::f_playerInfo()
{
	cout << cPlayerName << " - LVL: " << level << " - HP: " << hp << " - XP: " << xp << endl;

}