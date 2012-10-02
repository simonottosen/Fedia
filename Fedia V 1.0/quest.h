#include <iostream>
#include <string>
#include <vector>

#include "database.h"
using namespace std;

class Quest
{
private:
	static vector<int> quest_done;
	void quest_WelcomeGame();
	void quest_EnterForestPart1();
	void quest_EnterForestPart2();
	void clearScreen();
public:
	Quest();
	void QuestHandler(int quest_Id);
	bool isQuestDone(int quest_Id);
};