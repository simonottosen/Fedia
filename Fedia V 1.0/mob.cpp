#include "mob.h"
void randoms()
{
    cout << "Status: Færdig! - Klar til kamp!\n";
}
void NPC::f_fight()
{

    cout << "Vent: finder monstre\n";


}

void NPC::getMobLevel()
{

}
void NPC::clear()
{

}
void NPC::f_getRandomMob()
{

}
int NPC::getArmorItemBonus()
{
    return 1;
}
int NPC::getWeaponItemBonus()
{
    return 1;
}
void NPC::addMob(string name, int level, int hp, int xp, int uq)
{
    data.monsterHp.push_back(hp);
    data.monsterLevel.push_back(level);
    data.monsterList.push_back(name);
    data.monsterXp.push_back(xp);
}
