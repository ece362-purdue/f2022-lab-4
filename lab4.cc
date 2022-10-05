#include "lab4.h"
#include <stdint.h>
#include <stdio.h>

// Assume that the least significant 11 bits of instBits
// contain the instruction bits [31-21].
// Set the output signals as follows:
//  outputSignals.Reg2Loc = 1;
void setControl(uint64_t instBits, ControlSignals& outputSignals) {}

// Assume that the lower 32-bits of instBits contain the instruction.
// Return the appropraite sign extended version of the embedded
// immediate, based on the instruction type.
uint64_t getExtendedBits(uint64_t instBits) {
  uint64_t returnVal = 0;

  return returnVal;
}
