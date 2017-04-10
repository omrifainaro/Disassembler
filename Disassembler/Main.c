#include <stdio.h>
#include "Instruction.h"

void pause();

int main() {
	INSTRUCTION* inst;
	inst = opcodeToInstruction(0x9452A5A0);
	printInstruction(inst);
	pause();
	return 0;
}

void pause() {
	printf("press any key to continue...");
	getchar();
}