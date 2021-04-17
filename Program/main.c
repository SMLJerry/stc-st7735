#include "stc12c5a.h"

#include <absacc.h>
#include <intrins.h>
#include <string.h>

#include "lcdDriver.h"

#define MCU_STC12

typedef unsigned char uchar;
typedef unsigned int uint;
	
void main() {
	#ifdef MCU_STC12
	P3M1 &= ~(1<<2),
	P3M0 |=  (1<<2);        //P3.2 set as push-pull output mode
	#endif
	LCD_Init();
	bl=1;
	while(1) {
		displaySingleColour(RED);//红色
		delay_ms(500);
		displaySingleColour(GREEN);//绿色        
		delay_ms(500);
		displaySingleColour(BLUE);//蓝色
		delay_ms(500);        
		displaySingleColour(WHITE);//白色
		delay_ms(500);        
    }
}
