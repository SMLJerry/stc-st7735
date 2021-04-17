// RGBConvert.h
// 将RGB888转换为RGB565

// 定义RGB888和RGB565的常亮

// RGB888: 0x00(R)(G)(B)

#define RGB888_RED      0x00ff0000 
#define RGB888_GREEN    0x0000ff00
#define RGB888_BLUE     0x000000ff
 
#define RGB565_RED      0xf800
#define RGB565_GREEN    0x07e0
#define RGB565_BLUE     0x001f

unsigned short RGB888ToRGB565(unsigned int n888Color);
unsigned int RGB565ToRGB888(unsigned short n565Color);
unsigned int RGBToRGB888(unsigned int r, unsigned int g, unsigned int b);
unsigned short RGBToRGB565(unsigned int r, unsigned int g, unsigned int b);