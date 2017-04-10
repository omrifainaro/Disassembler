#include "Instruction.h"
//http://www.mrc.uidaho.edu/mrc/people/jff/digital/MIPSir.html all instructions

INSTRUCTION* newInstruction(unsigned char op, unsigned char operand1, unsigned char operand2, unsigned char operand3) {
	INSTRUCTION* temp; 
	temp = (INSTRUCTION*)malloc(sizeof(INSTRUCTION));
	temp->op = op;
	temp->o1 = operand1;
	temp->o2 = operand2;
	temp->o3 = operand3;
	return temp;
}

void printInstruction(INSTRUCTION* inst) {
	printf("%x: %x,%x,%x\n", inst->op, inst->o1, inst->o2, inst->o3);
}

INSTRUCTION* opcodeToInstruction(unsigned int opcode) {
	unsigned char op = opcode >> 24;
	unsigned char operand1 = (opcode >> 16) & (0xff);
	unsigned char operand2 = (opcode >> 8) & (0xff);
	unsigned char operand3 = opcode & (0xff);
	INSTRUCTION* inst = newInstruction(op, operand1, operand2, operand3);
	return inst;
}