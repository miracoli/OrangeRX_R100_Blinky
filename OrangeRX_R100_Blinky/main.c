//----------------------------------------------------------------------------
// C main line
//----------------------------------------------------------------------------

#include <m8c.h>        // part specific constants and macros
#include "PSoCAPI.h"    // PSoC API definitions for all User Modules
#include "delay.h"

void main(void) {
  while(1) {
    PRT3DR ^= 0x01; // toggle LED
    Delay10msTimes(100); // wait a second
  }
}
