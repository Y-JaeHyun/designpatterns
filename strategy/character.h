#ifndef __CHARACTER_H__
#define __CHARACTER_H__

#define NAME_LEN 512

typedef struct Charater {
	char name[NAME_LEN];
	void (*attackBehavior)();
	void (*run)();
	void (*sleep)();
} CHARACTER;

void setAttackBehavior(CHARACTER* character, void (*attackBehavior)());
void setCharacter(CHARACTER* character, char *name);

#endif
