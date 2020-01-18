#include "archer.h"
#include "attackBehavior.h"

void newArcher(ARCHER *archer, char *name) {
	setCharacter(&archer->character, name);
	setAttackBehavior(&archer->character, &arrowAttack);
}
