/*
 * utilities.h
 *
 * Created: 4/6/2023 7:30:38 AM
 *  Author: mohab
 */ 


#ifndef UTILITIES_H_
#define UTILITIES_H_


#define Set_Bit(REG,n) REG |= (1<<n)
#define Clear_Bit(REG,n) REG &= ~(1<<n)
#define Toggle_Bit(REG,n) REG ^= (1<<n)
#define Find_Bit(REG,n) ((REG&(1<<n))>>n)

#endif /* UTILITIES_H_ */