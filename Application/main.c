#include "../HAL/LED.h"
#include "../MCAL/Timers.h"

int main(void)
{
	LED_en(B,4);
    while (1) 
    {
		LED_on(B,4);
		TIMER0_msdelay(300);
		LED_off(B,4);
		TIMER0_msdelay(500);
    }
}

