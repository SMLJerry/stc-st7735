#include "stc12c5a.h"

#include <absacc.h>
#include <intrins.h>
#include <string.h>

#include "lcdDriver.h"
#include "RGBConvert.h"
#include "gui.h"
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
	//LCD_ShowPicture(0,0,100,100);
		//display_ASCII8x16(35, 80, "v1.0");
		drawButton(20, 20, 70, 40, WHITE, 2, RGBToRGB565(255, 176, 0), "Hello!", RED);
		drawButton(10, 100, 70, 40, WHITE, 1, PURPLE, "button2", YELLOW);
		
		 LCD_ShowUTF_8String(40, 30, 0, BLACK, WHITE) ;
	while(1) {
		//LCD_DrawRectangle(50, 50, 100, 75,BLACK);
		
		//display_ASCII8x16(51, 54,"button");
    }
}
