#include "character.h"
#include <stdio.h>
#include <string.h>

void run() {
	printf("헥헥헥~~\n");
}

void sleep() {
	printf("쿨~~\n");
}

void setAttackBehavior(CHARACTER* character, void (*attackBehavior)()) {
	character->attackBehavior = attackBehavior;
}

void setCharacter(CHARACTER* character, char *name) {
	character->run=&run;
	character->sleep=&sleep;
	snprintf(character->name, NAME_LEN, "%s", name);
}

