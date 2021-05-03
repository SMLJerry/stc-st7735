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

char i,j;		

sbit led1=P4^0;
int ison = 0;
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
		delay_ms(700);
	//void drawProgressBar(unsigned int x, unsigned int y, unsigned int width, unsigned int height, unsigned int bgColor,
	//unsigned int borderWidth, unsigned int borderColor, unsigned int value, unsigned int fgColor);
	drawProgressBar(34, 10, 100, 20, WHITE, 1, YELLOW, 0, RGB888ToRGB565(56, 255, 0), 1);
	delay_ms(3000);
	LCD_ShowString(0, 32, 16, "Model: STC12LE5A60S2", 1, BLACK, WHITE);
	drawProgressBar(34, 10, 100, 20, WHITE, 1, YELLOW, 5, RGB888ToRGB565(56, 255, 0), 1);
	LCD_ShowString(10, 50, 16, "Width: 168px", 1, BLACK, WHITE);
	LCD_ShowString(10, 70, 16, "Height: 120px", 1, BLACK, WHITE);
	delay_ms(3400);
	drawProgressBar(34, 10, 100, 20, WHITE, 1, YELLOW, 100, RGB888ToRGB565(56, 255, 0), 1);
	LCD_ShowString(10, 90, 16, "Loaded!", 1, RED, WHITE);
	delay_ms(7000);
	displaySingleColour(WHITE);	
	LCD_ShowPicture(34, 10, 100, 100);
	//delay_ms(7000);
	for (i = 0; i < 255; i ++) {
		LCD_Fill(0, 0, 20, 20, RGB888ToRGB565(i,0,0));
		LCD_Fill(0, 20, 20, 40, RGB888ToRGB565(0,i,0));
		LCD_Fill(0, 40, 20, 60, RGB888ToRGB565(0,0,i));
	}
	while(1) {
		
    }
}
