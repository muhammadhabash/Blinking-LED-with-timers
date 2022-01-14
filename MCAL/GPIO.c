#include "GPIO.h"

errorCodes_t gpioErrors;

uint8_t GPIO_set(uint8_t port, uint8_t bit)
{
	uint8_t* reg;
	if (port >= A && port <= D)
	{
		reg = (uint8_t*)(GPIO_DATA_R - (port - A));
		if ( bit >= 0 && bit <= 7 )
		{
			GPIO_SET(reg,bit);
		}
		else 
		{
			return WRONG_PIN;
		}
	}
	else
	{
		return WRONG_PORT;
	}
}

uint8_t GPIO_toggle (uint8_t port, uint8_t bit)
{
	uint8_t* reg;
	if (port >= A && port <= D)
	{
		reg = (uint8_t*)(GPIO_DATA_R - (port - A));
		if ( bit >= 0 && bit <= 7 )
		{
			GPIO_TOGGLE(reg,bit);
		}
		else
		{
			return WRONG_PIN;
		}
	}
	else 
	{
		return WRONG_PORT;
	}
}

uint8_t GPIO_dir(uint8_t port, uint8_t bit, uint8_t mode)
{
	uint8_t* reg;
	if (port >= A && port <= D)
	{
		reg = (uint8_t*)(GPIO_DIR_R - (port -A));
		if ( bit >= 0 && bit <= 7 )
		{
			if (OUTPUT == mode)
			{
				GPIO_SET(reg,bit);	
			}
			else if (INPUT == mode)
			{
				GPIO_CLEAR(reg,bit);
			}
			else
			{
				return WRONG_MODE;
			}
		}
		else
		{
			return WRONG_PIN;
		}
	}
	else 
	{
		return WRONG_PORT;
	}
	
}

uint8_t GPIO_clear(uint8_t port, uint8_t bit)
{
	uint8_t* reg;
	if (port >= A && port <= D)
	{
		reg = (uint8_t*)(GPIO_DATA_R - (port - A));
		if ( bit >= 0 && bit <= 7 )
		{
			GPIO_CLEAR(reg, bit);
		}
		else 
		{
			return WRONG_PIN;
		}
	}
	else 
	{
		return WRONG_PORT;
	}
}

uint8_t GPIO_read(uint8_t port, uint8_t bit)
{
	uint8_t* reg;
	if (port >= A && port <= D)
	{
		reg = (uint8_t*)(GPIO_BITS_R - (port - A));
		if (GPIO_IS_SET(reg,bit))
		{
			return 1;
		}
		else 
		{
			return WRONG_PIN;
		}
	}
	else
	{
		return WRONG_PORT;
	}
	return 0;
}