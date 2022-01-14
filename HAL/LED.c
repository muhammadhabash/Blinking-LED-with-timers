#include "LED.h"

void LED_en(uint8_t port, uint8_t bit)
{
	GPIO_dir(port,bit,OUTPUT);
}

void LED_on(uint8_t port, uint8_t bit)
{
	GPIO_set(port,bit);
}

void LED_off(uint8_t port, uint8_t bit)
{
	GPIO_clear(port,bit);
}

void LED_toggle (uint8_t port, uint8_t bit)
{
	GPIO_toggle(port,bit);
}