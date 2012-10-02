#include "database.h"

string Database::nameDatabase;

// DEFENCE
bool Database::defenceShield;
int Database::defenceShieldAmount;
bool Database::defenceHelm;
int Database::defenceHelmAmount;
bool Database::defenceBody;
int Database::defenceBodyAmount;
bool Database::defenceLegs;
int Database::defenceLegsAmount;
bool Database::defenceHands;
int Database::defenceHandsAmount;
bool Database::damageWeapon;
int Database::damageWeaponAmount;

vector<int> Database::equipment;


// MONSTER

vector<string> Database::monsterList;
vector<int> Database::monsterHp;
vector<int> Database::monsterLevel;
vector<int> Database::monsterXp;

Database::Database()
{

}
