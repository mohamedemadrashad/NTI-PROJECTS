#include "std_types.h"
#include"bit.h"
#include"DIO_interface.h"
#include"DIO_priv.h"
#include "SSD.h"
#include<util/delay.h>

int main()
{


	DIO_voidSetPortDirection(DIO_PORTA,DIO_PortOutput);
	DIO_voidSetPortDirection(DIO_PORTB,DIO_PortOutput);
	DIO_voidSetPinDirection(DIO_PORTD,DIO_Pin0,DIO_PinOutput);
	DIO_voidSetPinDirection(DIO_PORTD,DIO_Pin1,DIO_PinOutput);
	DIO_voidSetPinDirection(DIO_PORTD,DIO_Pin2,DIO_PinOutput);



	u8 i=0,j=0,k=0,l=0,n=0,m=0,v;
	u8 SSD1_u8[10]={0b00111111,0b0000110,0b01011011,0b01001111,0b01100110,0b01101101,0b01111101,0b00000111,0b01111111,0b01101111};
	u8 SSD2_u8[10]={0b00111111,0b0000110,0b01011011,0b01001111,0b01100110,0b01101101,0b01111101,0b00000111,0b01111111,0b01101111};


	while(1)
	{

		for(i=0;i<6;i++)//for green lamb 60sec
		{
			PORTA=SSD1_u8[5-i];



			for(j=0;j<10;j++)
			{
				DIO_voidSetPinValue(DIO_PORTD,DIO_Pin2,DIO_PinHigh);
				PORTB=SSD2_u8[9-j];
				_delay_ms(100);
			}

		}
		DIO_voidSetPinValue(DIO_PORTD,DIO_Pin2,DIO_PinLow);
		_delay_ms(100);
		for(k=0;k<6;k++) //for red lamb 60sec
		{

			PORTA=SSD1_u8[5-k];



			for(l=0;l<10;l++)
			{
				DIO_voidSetPinValue(DIO_PORTD,DIO_Pin0,DIO_PinHigh);
				PORTB=SSD2_u8[9-l];
				_delay_ms(100);
			}

		}
		DIO_voidSetPinValue(DIO_PORTD,DIO_Pin0,DIO_PinLow);
		_delay_ms(100);
		for(n=0;n<2;n++) //for yellow lamb 15sec
		{

			PORTA=SSD1_u8[1-n];
			if(n==1)
			{

				for(v=0;v<10;v++)
				{
					DIO_voidSetPinValue(DIO_PORTD,DIO_Pin1,DIO_PinHigh);
					PORTB=SSD2_u8[9-v];
					_delay_ms(100);




				}
				break;
			}

			for(m=0;m<6;m++)
			{

				DIO_voidSetPinValue(DIO_PORTD,DIO_Pin1,DIO_PinHigh);
				PORTB=SSD2_u8[5-m];
				_delay_ms(100);

			}
			if(n==1)
			{

				for(v=0;v<10;v++)
				{
					DIO_voidSetPinValue(DIO_PORTD,DIO_Pin1,DIO_PinHigh);
					PORTB=SSD2_u8[9-v];
					_delay_ms(100);

					break;


				}
			}

		}
		DIO_voidSetPinValue(DIO_PORTD,DIO_Pin1,DIO_PinLow);
		_delay_ms(100);

	}

}

