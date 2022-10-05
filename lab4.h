#ifndef LAB4H_
#define LAB4H_

#include <stdint.h>

struct ControlSignals {
  uint64_t Reg2Loc;
  uint64_t Branch;
  uint64_t MemRead;
  uint64_t MemtoReg;
  uint64_t ALUOp;
  uint64_t MemWrite;
  uint64_t ALUSrc;
  uint64_t RegWrite;
};

extern void setControl(uint64_t instBits, ControlSignals& outputSignals);
extern uint64_t getExtendedBits(uint64_t instBits);

#endif
