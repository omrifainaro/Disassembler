#ifndef INSTRUCTION_H
#define INSTRUCTION_H
#include <stdlib.h>

typedef enum{
	ADD = 0x20,
	ADDU = 0x21,
	ADDI = 0x8,
	ADDIU = 0x9,
	AND = 0x24,
	ANDI = 0xc,
	DIV = 0x1a,
	DIVU = 0x1b,
	MULT = 0x18,
	MULTU = 0x19,
	NOR = 0x27,
	OR = 0x25,
	ORI = 0xd,
	SLL = 0x0,
	SLLV = 0x4,
	SRA = 0x3,
	SRAV = 0x7,
	SRL = 0x2,
	SRLV = 0x6,
	SUB = 0x22,
	SUBU = 0x23,
	XOR = 0x26,
	XORI = 0xe,
	LHI = 0x19,
	LLO = 0x18,
	SLT = 0x2a,
	SLTU = 0x29,
	SLTI = 0xa,
	SLTIU = 0x9,
	BEQ = 0x4,
	BGTZ = 0x7,
	BLEZ = 0x6,
	BNE = 0x5,
	J = 0x2,
	JAL = 0x3,
	JALR = 0x9,
	JR = 0x8,
	LB = 0x20,
	LBU = 0x24,
	LH = 0x21,
	LHU = 0x25,
	LW = 0x23,
	SB = 0x28,
	SH = 0x29,
	SW = 0x2b,
	MFHI = 0x10,
	MFLO = 0x12,
	MTHI = 0x11,
	MTLO = 0x13,
	TRAP = 0x1a
} operator;

typedef struct {
	operator op;
	unsigned char o1;
	unsigned char o2;
	unsigned char o3;
} INSTRUCTION;

INSTRUCTION* newInstruction(unsigned char op, unsigned char operand1, unsigned char operand2, unsigned char operand3);
void printInstruction(INSTRUCTION* inst);
INSTRUCTION* opcodeToInstruction(unsigned int opcode);
#endif