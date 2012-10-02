#ifndef ITEM_H
#define ITEM_H

#include <string>
#include <vector>
#include <iostream>
#include "database.h"
#include <ctime>
#include <cstdlib>
using namespace std;


class Item
{
private:


	Database data;
	void AddItem(string itemName, int itemType, int itemBuy = 0, int itemSell = 0, bool itemScript = false);
	static vector<string> ItemList; // LIST OF NAMES
	static vector<int> ItemValue; // LIST OF SELL VALUE
	static vector<int> ItemBuyvalue; // LIST OF BUY VALUE(0 = YOU CAN'T BUY)
	static vector<int> ItemType;  // LIST OF ITEM TYPE
	static vector<bool> ItemScript; // TRUE=ITEM SCRIPTED - FALSE=NON SCRIPTED

	// ITEM HANDLES - true = succes / false = dead / not enough 

	bool removeHP(int amount);
	bool addHP(int amount);
	bool removeMana(int amount);
	bool addMana(int amount);
	bool addXP(int amount);
	void addDamgeBonus(int amount, int type); // TYPE 1 - Weapon - TYPE 2 - MISC
	void addDefenceBonus(int amount, int type); // TYPE 1 - Shield - TYPE 2 - Helm - TYPE 3 - Body - TYPE 4 - Legs - TYPE 5 - Hands
	
	// ITEM SCRIPTS

	void ItemID_01(); void ItemID_11();
	void ItemID_02(); void ItemID_12();
	void ItemID_03(); void ItemID_13();
	void ItemID_04(); void ItemID_14();
	void ItemID_05(); void ItemID_15();
	void ItemID_06(); void ItemID_16();
	void ItemID_07(); void ItemID_17();
	void ItemID_08(); void ItemID_18();
	void ItemID_09(); void ItemID_19();
	void ItemID_10(); void ItemID_20();

public:
	Item(bool Starter);
	Item();
	void EquipItem(int itemID);
	void UseItem(int itemID);
	string getItemName(int itemID);
	void handleAttributes();
};


#endif