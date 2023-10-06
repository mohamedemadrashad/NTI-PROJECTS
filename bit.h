#include <stdio.h>
#ifndef bit
#define bit

 #define SET_BIT(REG,BIT_N)     (REG|=(1<<BIT_N))
 #define CLEAR_BIT(REG,BIT_N)   (REG&=(~(1<<BIT_N)))
 #define TOGGLE_BIT(REG,BIT_N)  (REG^=(1<<BIT_N))
 #define GET_BIT(REG,BIT_N)    ((REG>>BIT_N)&1)
#endif
