#include <16F690.h>
#include <stdlib.h>
//#device ADC=12

#FUSES WDT                      //Watch Dog Timer

#use delay(crystal=12MHz)
#use FIXED_IO( A_outputs=PIN_A1,PIN_A0 )
#use FIXED_IO( C_outputs=PIN_C5,PIN_C2,PIN_C1,PIN_C0 )
#define Out2   PIN_A0
#define Out3   PIN_A1
#define Contact   input_state(PIN_A2)
#define In4   PIN_B4
#define Out4   PIN_C0
#define Out5   PIN_C1
#define Out6   PIN_C2
#define In6   PIN_C3
#define In5   PIN_C4
#define Out1   PIN_C5
#define In3   input_state(PIN_C6)
#define Start   input_state(PIN_C7)


//port1
//#define RS485_USE_EXT_IN
//T #define RS485_RX_PIN PIN_B5
//#define RS485_TX_PIN PIN_B7
//#define RS485_ENABLE_PIN None
//#define RS485_RX_ENABLE PIN_B6
//#define RS485_RX_BUFFER_SIZE 0
#define RS485_ID 10
   #include "rs485.c"//NOTE: only one RS485 port is supported by the driver


