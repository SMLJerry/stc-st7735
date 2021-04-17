#include "stc12c5a.h"

#include <absacc.h>
#include <intrins.h>
#include <string.h>

#include "lcdDriver.h"
#include "RGBConvert.h"

#define MCU_STC12
char t[];
void int0();
void i1();

char i=0;		

typedef unsigned char uchar;
typedef unsigned int uint;
	
	void main() {
	#ifdef MCU_STC12
	P3M1 &= ~(1<<2),
	P3M0 |=  (1<<2);        //P3.2 set as push-pull output mode
	#endif
	LCD_Init();
	bl=~bl; 
		displaySingleColour(WHITE);
//	LCD_DrawLine(1, 1, 100, 100, PURPLE);
//	LCD_DrawLine(1, 100, 100, 1, BLACK);
		/*
	for (i=0;i<=10;i++) {
		LCD_Fill(14,30,14+i,40,BLACK);
		LCD_Fill(35,80,35+8,80+16,WHITE);
//		t=itoa(i);
		display_ASCII8x16(35,80,itoa(i));
	}*/
	LCD_ShowPicture(0,0,100,100);
	while(1) {
    }
}
