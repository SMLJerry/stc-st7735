#include "RGBConvert.h"

unsigned short RGB888ToRGB565(unsigned int n888Color)
{
	unsigned char cRed   = (n888Color & RGB888_RED)   >> 19;
	unsigned char cGreen = (n888Color & RGB888_GREEN) >> 10;
	unsigned char cBlue  = (n888Color & RGB888_BLUE)  >> 3;
	return (short)(cBlue << 11) + (cGreen << 5) + (cRed << 0);
}
 
unsigned int RGB565ToRGB888(unsigned short n565Color)
{
	unsigned char cRed   = (n565Color & RGB565_RED)    >> 8;
	unsigned char cGreen = (n565Color & RGB565_GREEN)  >> 3;
	unsigned char cBlue  = (n565Color & RGB565_BLUE)   << 3;
 
	return (int)(cBlue << 16) + (cGreen << 8) + (cRed << 0);
}

unsigned int RGBToRGB888(unsigned int r, unsigned int g, unsigned int b) {
	return ((0xFF << 24)|(b << 16)|(g << 8)|r);
}

unsigned short RGBToRGB565(unsigned int r, unsigned int g, unsigned int b) {
	return RGB888ToRGB565(RGBToRGB888(r, g, b));
}