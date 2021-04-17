#include "RGBConvert.h"
#include "stc12c5a.h"

sbit cs = P3^5;	// 模拟SPI的CS口
sbit rs = P2^3;	// 模拟SPI的RS口, 部分屏幕可能为A0(AO)
sbit sda = P2^2;	// 模拟SPI的SDA口
sbit scl = P2^1;	// 模拟SPI的SCL口, 部分屏幕可能为SCK
sbit reset = P3^4;   // RESET口, 可简写为RST
sbit bl = P1^5;	// 屏幕的背光口, BL或者LED-
// 可直接接3V常亮, 也可以控制

//#define USE_LANDSCAPE 
//测试程序横竖屏切换，横屏请开启此宏，竖屏请屏蔽

// 常用颜色的定义

#define RED 0xf800
#define GREEN 0x07e0
#define BLUE 0x001f
#define WHITE 0xffff
#define BLACK 0x0000
#define YELLOW 0xFFE0
#define GRAY0 0xEF7D   
#define GRAY1 0x8410              
#define GRAY2 0x4208   
#define PURPLE 0xb299
#define SKYBLUE 0x8f7d