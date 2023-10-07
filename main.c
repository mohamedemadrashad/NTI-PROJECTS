#include"std_types.h"
#include"bit.h"
#include"DIO_interface.h"
#include<util/delay.h>



void main( void )
{
	u8 i,j,k;
	DIO_voidSetPortDirection(DIO_PORTA,DIO_PortOutput); //make the port output
	while(1)
	{
		for(i=0;i<4;i++)
		{



			/********************reverse*******************/

			DIO_voidSetPinValue(DIO_PORTA,DIO_Pin7,DIO_PinHigh);
			_delay_ms(200);                                            //8th led
			DIO_voidSetPinValue(DIO_PORTA,DIO_Pin7,DIO_PinLow);
			_delay_ms(200);



			DIO_voidSetPinValue(DIO_PORTA,DIO_Pin6,DIO_PinHigh);
			_delay_ms(200);                                            //7th led
			DIO_voidSetPinValue(DIO_PORTA,DIO_Pin6,DIO_PinLow);
			_delay_ms(200);



			DIO_voidSetPinValue(DIO_PORTA,DIO_Pin5,DIO_PinHigh);
			_delay_ms(200);                                            //6th led
			DIO_voidSetPinValue(DIO_PORTA,DIO_Pin5,DIO_PinLow);
			_delay_ms(200);




			DIO_voidSetPinValue(DIO_PORTA,DIO_Pin4,DIO_PinHigh);
			_delay_ms(200);                                            //5th led
			DIO_voidSetPinValue(DIO_PORTA,DIO_Pin4,DIO_PinLow);
			_delay_ms(200);




			DIO_voidSetPinValue(DIO_PORTA,DIO_Pin3,DIO_PinHigh);
			_delay_ms(200);                                            //4th led
			DIO_voidSetPinValue(DIO_PORTA,DIO_Pin3,DIO_PinLow);
			_delay_ms(200);



			DIO_voidSetPinValue(DIO_PORTA,DIO_Pin2,DIO_PinHigh);
			_delay_ms(200);                                            //3rd led
			DIO_voidSetPinValue(DIO_PORTA,DIO_Pin2,DIO_PinLow);
			_delay_ms(200);



			DIO_voidSetPinValue(DIO_PORTA,DIO_Pin1,DIO_PinHigh);
			_delay_ms(200);                                            //2nd led
			DIO_voidSetPinValue(DIO_PORTA,DIO_Pin1,DIO_PinLow);
			_delay_ms(200);


			DIO_voidSetPinValue(DIO_PORTA,DIO_Pin0,DIO_PinHigh);
			_delay_ms(200);                                            //1st led
			DIO_voidSetPinValue(DIO_PORTA,DIO_Pin0,DIO_PinLow);
			_delay_ms(200);




			/******************************************************/

			DIO_voidSetPinValue(DIO_PORTA,DIO_Pin1,DIO_PinHigh);
			_delay_ms(200);                                            //2nd led
			DIO_voidSetPinValue(DIO_PORTA,DIO_Pin1,DIO_PinLow);
			_delay_ms(200);


			DIO_voidSetPinValue(DIO_PORTA,DIO_Pin2,DIO_PinHigh);
			_delay_ms(200);                                            //3rd led
			DIO_voidSetPinValue(DIO_PORTA,DIO_Pin2,DIO_PinLow);
			_delay_ms(200);


			DIO_voidSetPinValue(DIO_PORTA,DIO_Pin3,DIO_PinHigh);
			_delay_ms(200);                                            //4th led
			DIO_voidSetPinValue(DIO_PORTA,DIO_Pin3,DIO_PinLow);
			_delay_ms(200);



			DIO_voidSetPinValue(DIO_PORTA,DIO_Pin4,DIO_PinHigh);
			_delay_ms(200);                                            //5th led
			DIO_voidSetPinValue(DIO_PORTA,DIO_Pin4,DIO_PinLow);
			_delay_ms(200);


			DIO_voidSetPinValue(DIO_PORTA,DIO_Pin5,DIO_PinHigh);
			_delay_ms(200);                                            //6th led
			DIO_voidSetPinValue(DIO_PORTA,DIO_Pin5,DIO_PinLow);
			_delay_ms(200);


			DIO_voidSetPinValue(DIO_PORTA,DIO_Pin6,DIO_PinHigh);
			_delay_ms(200);                                            //7th led
			DIO_voidSetPinValue(DIO_PORTA,DIO_Pin6,DIO_PinLow);
			_delay_ms(200);


			if(i==3)
			{
				DIO_voidSetPinValue(DIO_PORTA,DIO_Pin7,DIO_PinHigh);
				_delay_ms(200);                                            //1st led
				DIO_voidSetPinValue(DIO_PORTA,DIO_Pin7,DIO_PinLow);
				_delay_ms(200);
			}

		}

		for(j=0;j<4;j++)
		{
			DIO_voidSetPinValue(DIO_PORTA,DIO_Pin3,DIO_PinHigh);//4th led on
			DIO_voidSetPinValue(DIO_PORTA,DIO_Pin4,DIO_PinHigh);//5th led on
			_delay_ms(200);

			DIO_voidSetPinValue(DIO_PORTA,DIO_Pin2,DIO_PinHigh);//3rd led on
			DIO_voidSetPinValue(DIO_PORTA,DIO_Pin5,DIO_PinHigh);//6th led on
			_delay_ms(200);

			DIO_voidSetPinValue(DIO_PORTA,DIO_Pin1,DIO_PinHigh);//2nd led on
			DIO_voidSetPinValue(DIO_PORTA,DIO_Pin6,DIO_PinHigh);//7th led on
			_delay_ms(200);

			DIO_voidSetPinValue(DIO_PORTA,DIO_Pin0,DIO_PinHigh);//1st led on
			DIO_voidSetPinValue(DIO_PORTA,DIO_Pin7,DIO_PinHigh);//8th led on
			_delay_ms(200);


			DIO_voidSetPinValue(DIO_PORTA,DIO_Pin0,DIO_PinLow);//1st led off
			DIO_voidSetPinValue(DIO_PORTA,DIO_Pin7,DIO_PinLow);//8th led off
			_delay_ms(200);

			DIO_voidSetPinValue(DIO_PORTA,DIO_Pin1,DIO_PinLow);//2nd led off
			DIO_voidSetPinValue(DIO_PORTA,DIO_Pin6,DIO_PinLow);//7th led off
			_delay_ms(200);

			DIO_voidSetPinValue(DIO_PORTA,DIO_Pin2,DIO_PinLow);//3rd led off
			DIO_voidSetPinValue(DIO_PORTA,DIO_Pin5,DIO_PinLow);//6th led off
			_delay_ms(200);

			DIO_voidSetPinValue(DIO_PORTA,DIO_Pin3,DIO_PinLow);//4th led off
			DIO_voidSetPinValue(DIO_PORTA,DIO_Pin4,DIO_PinLow);//5th led off
			_delay_ms(200);
		}

		for(k=0;k<8;k++)
		{
			DIO_voidSetPortvalue(DIO_PORTA,DIO_PortHigh);//all led on
			_delay_ms(500);
			DIO_voidSetPortvalue(DIO_PORTA,DIO_PortLow);//all led off
			_delay_ms(500);
		}
	}
}


