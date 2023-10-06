#ifndef DIO_INTERFACE_H
#define DIO_INTERFACE_H

#define DIO_PinOutput   1
#define DIO_PinInput    2

#define DIO_PinHigh     1
#define DIO_PinLow      0

#define DIO_PortOutput  1
#define DIO_PortInput   0

#define DIO_PortHigh    1
#define DIO_PortLow     0




#define DIO_Pin0        0
#define DIO_Pin1        1
#define DIO_Pin2        2
#define DIO_Pin3        3
#define DIO_Pin4        4
#define DIO_Pin5        5
#define DIO_Pin6        6
#define DIO_Pin7        7




#define DIO_PORTA     1
#define DIO_PORTB     2
#define DIO_PORTC     3
#define DIO_PORTD     4





void DIO_voidSetPinDirection(u8 Copy_u8PortName , u8 Copy_u8PinNum, u8 Copy_u8PinDirection);

void DIO_voidSetPinValue(u8 Copy_u8PortName , u8 Copy_u8PinNum, u8 Copy_u8PinValue);

u8 DIO_u8GetPinValue(u8 Copy_u8PortName , u8 Copy_u8PinNum);

void DIO_voidSetPortDirection(u8 Copy_u8PortName , u8 Copy_u8PortDirection);

void DIO_voidSetPortvalue(u8 Copy_u8PortName , u8 Copy_u8PortValue);














#endif
