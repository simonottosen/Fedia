#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <string>
#include "database.h"
#include "item.h"
using namespace std;
class NPC
{
private:
	Database data;
	//Item item;
	vector<int> regXP;
	int combatLevel;
	bool combatState;
	int combatHp;
	int combatXp;
	string combatId;
	vector<int> mobXp;
	vector<string> mobList;
	vector<int> mobHp;
	void f_getRandomMob();
	vector<int> mobLevel;
	int getWeaponItemBonus();
	int getArmorItemBonus();
	void getMobLevel();
	void clear();
public:
	void addMob(string name, int level, int hp, int xp, int uq = 0);
	void f_fight();

};



