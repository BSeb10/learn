#include "mbed.h"

int main()
{
	DigitalOut led1(PA_0);
	DigitalOut led2(PA_1);
	DigitalOut led3(PA_4);
	DigitalOut led4(PB_0);
	DigitalOut led5(PC_1);
	DigitalOut led6(PC_0);

	while(true)
	{		
		led1 = 1;
		wait_ms(500);
		led3 = 1;
		wait_ms(500);
		led5 = 1;
		wait_ms(500);
		led2 = 1;
		wait_ms(500);
		led4 = 1;
		wait_ms(500);
		led6 = 1;
		wait_ms(500);
		led1 = 0;
		wait_ms(500);
		led2 = 0;
		wait_ms(500);
		led3 = 0;
		wait_ms(500);
		led4 = 0;
		wait_ms(500);
		led5 = 0;
		wait_ms(500);
		led6 = 0;
		wait_ms(500);	
	}
}
