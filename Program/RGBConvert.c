#include "RGBConvert.h"

unsigned int RGB888ToRGB565(unsigned char red, unsigned char green, unsigned char blue)
{
	unsigned int B = (red >> 3) & 0x001F;
	unsigned int G = ((green >> 2) << 5) & 0x07E0;
	unsigned int R = ((blue >> 3) << 11) & 0xF800;
	return (unsigned int) (R | G | B);
}