#ifndef DATABASE_H
#define DATABASE_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Database
{
public:
	Database();
	static string nameDatabase;
	static bool defenceShield;
	static int defenceShieldAmount;
	static bool defenceHelm;
	static int defenceHelmAmount;
	static bool defenceBody;
	static int defenceBodyAmount;
	static bool defenceLegs;
	static int defenceLegsAmount;
	static bool defenceHands;
	static int defenceHandsAmount;

	static bool damageWeapon;
	static int damageWeaponAmount;

	static vector<int> equipment;




	// Monster m.m
	static vector<string> monsterList;
	static vector<int> monsterLevel;
	static vector<int> monsterXp;
	static vector<int> monsterHp;

};
#endif
