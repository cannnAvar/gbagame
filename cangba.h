/*
 * by cannnAvar
 * game boy advance engine
*/


#ifndef CANGBA_H
#define CANGBA_H

//---DEGİŞKEN TÜRLERİ

typedef unsigned char uchar; //u8
typedef unsigned short ushort; //u16
typedef unsigned int uint; //u32

typedef ushort RENK;

#define INLINE static inline

//---HAFIZA BÖLÜMLERİ

#define IORAM 0x04000000 // 16 bit Input Output hafızası
#define VRAM 0x06000000 // 32 bit Video grafik hafızası

// bilmedigim bir pointer dursun burada
#define REG_DISPCNT *((volatile uint*)(IORAM+0x0000)) 


// bilmedigim daha fazla degişken sanırım video ile alakalı
// --- REG_DISPCNT defines ---
#define DCNT_MODE0     0x0000
#define DCNT_MODE1      0x0001
#define DCNT_MODE2      0x0002
#define DCNT_MODE3      0x0003
#define DCNT_MODE4      0x0004
#define DCNT_MODE5      0x0005
// layers
#define DCNT_BG0        0x0100
#define DCNT_BG1        0x0200
#define DCNT_BG2        0x0400
#define DCNT_BG3        0x0800
#define DCNT_OBJ        0x1000


// ekran boyutu
#define EKRAN_EN 240
#define EKRAN_BOY 160

#define vidMem ((ushort*)VRAM) // video hafızası pointeri ¯\_(ツ)_/¯

// yoruldum amk  ctrl c ctrl v  
INLINE void m3_plot(int x, int y, RENK clr)
{   vidMem[y*EKRAN_BOY+x]= clr;    }

#define CLR_BLACK   0x0000
#define CLR_RED     0x001F
#define CLR_LIME    0x03E0
#define CLR_YELLOW  0x03FF
#define CLR_BLUE    0x7C00
#define CLR_MAG     0x7C1F
#define CLR_CYAN    0x7FE0
#define CLR_WHITE   0x7FFF

// RENKler ve evet rgb degil yerli ve milli KYM
INLINE RENK KYM15(uint kırmızı, uint yeşil, uint mavi)
{   return kırmızı | (yeşil<<5) | (mavi<<10);   }
#endif
