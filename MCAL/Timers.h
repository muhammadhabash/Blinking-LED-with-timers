#ifndef TIMERS_H_
#define TIMERS_H_

#include "../BIT_manipulation.h"
#include "../ATMEGA32.h"



#define PERIODIC_TIME_MS (0.001)                                             //For TIMER0
#define 8_BITS           (255)
/****************************************************************************/
/*                                                                          */
/*                         Global Interrupt Bit                             */
/*                                                                          */
/****************************************************************************/

#define I     (7)

/****************************************************************************/
/*                                                                          */
/*                        TIMER0 Control Register Bits                      */
/*                                                                          */
/****************************************************************************/

#define CS00  (0)
#define CS01  (1)
#define CS02  (2)
#define WGM01 (3)
#define COM00 (4)
#define COM01 (5)
#define WGM00 (6)
#define FOC0  (7)

/****************************************************************************/
/*                                                                          */
/*                        TIMER2 Control Register Bits                      */
/*                                                                          */
/****************************************************************************/

#define CS20  (0)
#define CS21  (1)
#define CS22  (2)
#define WGM21 (3)
#define COM20 (4)
#define COM21 (5)
#define WGM20 (6)
#define FOC2  (7)
 
/****************************************************************************/
/*                                                                          */
/*                   Timers Interrupt Flag Register Bits                    */
/*                                                                          */
/****************************************************************************/

#define TOV0  (0)
#define OCF0  (1)
#define TOV1  (2)
#define OCF1B (3)
#define OCF1A (4)
#define ICF1  (5)
#define TOV2  (6)
#define OCF2  (7)

/****************************************************************************/
/*                                                                          */
/*                   Timers Interrupt Masking Register Bits                 */
/*                                                                          */
/****************************************************************************/

#define TOIE0  (0)
#define OCIE0  (1)
#define TOIE1  (2)
#define OCIE1B (3)
#define OCIE1A (4)
#define TICIE1 (5)
#define TOIE2  (6)
#define OCIE2  (7)

/****************************************************************************/
/*                                                                          */
/*                            Functions Prototypes                          */
/*                                                                          */
/****************************************************************************/

void OVI0_init     (void);                                                   //This function enables the overflow interrupt flag for timer 0
void OCI0_init     (void);                                                   //This function enables the output compare match interrupt flag for timer 0
void OVI2_init     (void);                                                   //This function enables the overflow interrupt flag for timer 2
void OCI2_init     (void);                                                   //This function enables the output compare match interrupt flag for timer 2
void TIMER0_start  (uint16_t u16_prescale);                                  //This function ignites timer 0 with a given prescaler
void TIMER0_stop   (void);                                                   //This function halts timer 0
void TIMER2_start  (uint16_t u16_prescale);                                  //This function ignites timer 1 with a given prescaler
void TIMER2_stop   (void);                                                   //This function halts timer 2
void TIMER0_msdelay(uint16_t u16_mseconds);                                  //This function is used to provide hardware delay in micro seconds


#endif
