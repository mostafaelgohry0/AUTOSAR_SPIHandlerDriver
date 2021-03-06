/*
 *     Module : Macros
 *
 *     File Name  :   Common_Macros.h
 *
 *     Description : user  defined  Macros
 *
 *     Author: Mostafa Elgohary
 *
 *     Created on: Aug 7, 2020
 */


#ifndef COMMON_MACROS_H_
#define COMMON_MACROS_H_


// set pin in certain port   like SET_BIT(PORTA,PA1)
#define  SET_BIT(PORTX,PIN)       PORTX |=(1<<PIN)

// clear pin in certain port   like CLEAR_BIT(PORTA,PA1)
#define  CLEAR_BIT(PORTX,PIN)     PORTX &=~(1<<PIN)

// toggle  pin in certain port   like TOGGLE_BIT(PORTA,PA1)
#define  TOGGLE_BIT(PORTX,PIN)    PORTX ^=(1<<PIN)

// set port with certain value   like SET_PORT_VAL(PORTA,0xff)
#define SET_PORT_VAL(PORTX,VALUE)   PORTX = VALUE

// return value on pin and assign it to  a variable     like   x = GET_BIT(PINA,PA1)
#define GET_BIT(PINX,PIN)   (PINX&(1<<PIN)) >> PIN

#define SET_BIT_DIRECTION(DIR,DDRX,PIN)\
if(DIR == 'OUT'){\
SET_BIT(DDRX,PIN);\
}\
else if(DIR == 'IN'){\
CLEAR_BIT(DDRX,PIN);\
}


#endif /* COMMON_MACROS_H_ */
