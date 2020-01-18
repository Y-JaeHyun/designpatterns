#include <stdio.h>
#include <string.h>
#include "archer.h"



int main () {
	ARCHER archer = {0, };
	newArcher(&archer, "아쳐");

	/*
	 * TODO : 실제 상속이 아니기 때문에CHARACTER 안에 함수를 실행하기 위해서는  두단계를 거쳐야한다.
	 * archer에 다시 같은 함수포인터를 넣기엔 별로 이쁜 구조는 아닌것 같다.
	 * 더 좋은 방식이 있을지는 고민해봐야됨.
	*/
	archer.character.run();
	archer.character.sleep();
	archer.character.attackBehavior();

}
