#include <iostream>
#include "player.h"
#include "mob.h"
#include "quest.h"
#include "database.h"
#include "item.h"
using namespace std;
//Item item(true);
void showStats();
void test();
NPC mob;
template <typename Type>
Type test1(Type a, Type b)
{
    return a + b;
}
int main()
{
    int i = 1;
    system("Title Fedia - Version 0.1");
    Database data;
//	Item test;

//	Quest quest;
//	quest.QuestHandler(1);
    cout << "Velkommen til Fedia" << endl;
    cout << "Indtast navn: ";
    getline(cin, data.nameDatabase);
    c_Player User(data.nameDatabase);
    NPC mob;

    do
    {
        cout << "1: Kamp\n2: Se udstyr\n3: Afslut\n";
        int valg;
        cout << "Valgmulighed: ";
        cin >> valg;
        switch (valg)
        {
        case 1:
            mob.f_fight();
            break;
        case 2:
            User.f_playerInfo();
            showStats();
            break;
        case 3:
            return 1;
            break;
        case 4:
//		item.EquipItem(7);
        default:
            break;
        }
    }
    while (i = 2);
    return 0;
}
void test()
{



}
void showStats()
{
    /*
    	Database data;
    	if (data.equipment[0] == 0)
    	{
    		cout << "Vaaben: NaN\n";
    	}
    	else
    	{
    		cout << "Vaaben: " << item.getItemName(data.equipment[0]) << endl;
    	}
    	if (data.equipment[1] == 0)
    	{
    		cout << "Skjold: NaN\n";
    	}
    	else
    	{
    		cout << "Skjold: " << item.getItemName(data.equipment[1]) << endl;
    	}
    	if (data.equipment[2] == 0)
    	{
    		cout << "Hjaelm: NaN\n";
    	}
    	else
    	{
    		cout << "Hjaelm: " << item.getItemName(data.equipment[2]) << endl;
    	}
    	if (data.equipment[3] == 0)
    	{
    		cout << "Chest: NaN\n";
    	}
    	else
    	{
    		cout << "Chest: " << item.getItemName(data.equipment[3]) << endl;
    	}
    	if (data.equipment[4] == 0)
    	{
    		cout << "Bukser: NaN\n";
    	}
    	else
    	{
    		cout << "Bukser: " << item.getItemName(data.equipment[4]) << endl;
    	}
    	if (data.equipment[5] == 0)
    	{
    		cout << "Handsker: NaN\n";
    	}
    	else
    	{
    		cout << "Handsker: " << item.getItemName(data.equipment[5]) << endl;
    	}
    */
}
