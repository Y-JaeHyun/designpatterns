#ifndef __ARCHER_H__
#define __ARCHER_H__

#include "character.h"

//TODO :  추후 Arhcer 관련 기능 추가
typedef struct Archer {
	CHARACTER character;
}ARCHER;

void newArcher(ARCHER *archer, char *name);

#endif
