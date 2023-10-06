#include "std_types.h"
#include "bit.h"

#include "DIO_interface.h"
#include "DIO_config.h"
#include "DIO_priv.h"



void DIO_voidSetPinDirection(u8 Copy_u8PortName , u8 Copy_u8PinNum, u8 Copy_u8PinDirection)
{
	if(Copy_u8PinDirection==DIO_PinOutput)
	{
		switch (Copy_u8PortName)
		{
		case DIO_PORTA: SET_BIT(DDRA,Copy_u8PinNum); break;
		case DIO_PORTB: SET_BIT(DDRB,Copy_u8PinNum); break;
		case DIO_PORTC: SET_BIT(DDRC,Copy_u8PinNum); break;
		case DIO_PORTD: SET_BIT(DDRD,Copy_u8PinNum); break;
		}
	}

	else if(Copy_u8PinDirection==DIO_PinInput)
	{
		switch (Copy_u8PortName)
		{
		case DIO_PORTA: CLEAR_BIT(DDRA,Copy_u8PinNum); break;
		case DIO_PORTB: CLEAR_BIT(DDRB,Copy_u8PinNum); break;
		case DIO_PORTC: CLEAR_BIT(DDRC,Copy_u8PinNum); break;
		case DIO_PORTD: CLEAR_BIT(DDRD,Copy_u8PinNum); break;
		}
	}

	else
	{
		/*empty*/
	}

}

void DIO_voidSetPinValue(u8 Copy_u8PortName , u8 Copy_u8PinNum, u8 Copy_u8PinValue)
{

	if(Copy_u8PinValue==DIO_PinHigh)
	{
		switch (Copy_u8PortName)
		{
		case DIO_PORTA: SET_BIT(PORTA,Copy_u8PinNum); break;
		case DIO_PORTB: SET_BIT(PORTB,Copy_u8PinNum); break;
		case DIO_PORTC: SET_BIT(PORTC,Copy_u8PinNum); break;
		case DIO_PORTD: SET_BIT(PORTD,Copy_u8PinNum); break;
		}
	}

	else if(Copy_u8PinValue==DIO_PinLow)
	{
		switch (Copy_u8PortName)
		{
		case DIO_PORTA: CLEAR_BIT(PORTA,Copy_u8PinNum); break;
		case DIO_PORTB: CLEAR_BIT(PORTB,Copy_u8PinNum); break;
		case DIO_PORTC: CLEAR_BIT(PORTC,Copy_u8PinNum); break;
		case DIO_PORTD: CLEAR_BIT(PORTD,Copy_u8PinNum); break;
		}
	}
	else
	{
		/*empty*/
	}
}

u8 DIO_u8GetPinValue(u8 Copy_u8PortName , u8 Copy_u8PinNum)
{
	u8 Local_u8PinValue;
	switch (Copy_u8PortName)
	{
	case DIO_PORTA: Local_u8PinValue=GET_BIT(PORTA,Copy_u8PinNum); break;
	case DIO_PORTB: Local_u8PinValue=GET_BIT(PORTB,Copy_u8PinNum); break;
	case DIO_PORTC: Local_u8PinValue=GET_BIT(PORTC,Copy_u8PinNum); break;
	case DIO_PORTD: Local_u8PinValue=GET_BIT(PORTD,Copy_u8PinNum); break;
	}
	return Local_u8PinValue;


}

void DIO_voidSetPortDirection(u8 Copy_u8PortName , u8 Copy_u8PortDirection)
{
	if(Copy_u8PortDirection==DIO_PortOutput)
	{
		switch (Copy_u8PortName)
		{
		case DIO_PORTA: DDRA=0xFF; break;
		case DIO_PORTB: DDRB=0xFF; break;
		case DIO_PORTC: DDRC=0xFF; break;
		case DIO_PORTD: DDRD=0xFF; break;
		}
	}

	else if(Copy_u8PortDirection==DIO_PortInput)
	{
		switch (Copy_u8PortName)
		{
		case DIO_PORTA: DDRA=0x00; break;
		case DIO_PORTB: DDRB=0x00; break;
		case DIO_PORTC: DDRC=0x00; break;
		case DIO_PORTD: DDRD=0x00; break;
		}
	}

	else
	{
		/*empty*/
	}
}

void DIO_voidSetPortvalue(u8 Copy_u8PortName , u8 Copy_u8PortValue)
{

	if(Copy_u8PortValue==DIO_PortHigh)
	{
		switch (Copy_u8PortName)
		{
		case DIO_PORTA: PORTA=0xFF; break;
		case DIO_PORTB: PORTB=0xFF; break;
		case DIO_PORTC: PORTC=0xFF; break;
		case DIO_PORTD: PORTD=0xFF; break;
		}
	}

	else if(Copy_u8PortValue==DIO_PortLow)
	{
		switch (Copy_u8PortName)
		{
		case DIO_PORTA: PORTA=0x00; break;
		case DIO_PORTB: PORTB=0x00; break;
		case DIO_PORTC: PORTC=0x00; break;
		case DIO_PORTD: PORTD=0x00; break;
		}
	}

	else
	{
		/*empty*/
	}
}


