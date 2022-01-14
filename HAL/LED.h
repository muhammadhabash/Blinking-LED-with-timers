#ifndef LED_H_
#define LED_H_

/*********************************************/
/*                                           */
/*           Files Inclusions                */
/*                                           */
/*********************************************/

#include "GPIO.h"

/*********************************************/
/*                                           */
/*           Prototypes                      */
/*                                           */
/*********************************************/

void LED_en(uint8_t port, uint8_t bit);       //This function enables the given pin in the given port and sets it as output
void LED_on(uint8_t port, uint8_t bit);       //This function sets the given pin in the given port to a logical HIGH
void LED_off(uint8_t port, uint8_t bit);      //This function sets the given pin in the given port to a logical HIGH
void LED_toggle (uint8_t port, uint8_t bit);  //This function toggles the the value of the given in the given port using bitwise XOR


#endif