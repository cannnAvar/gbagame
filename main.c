/*
 * by cannnAvar
 * game's main file
*/
#include "cangba.h" // yerli ve milli game boy advance kütüphanesi

int main()
{
    REG_DISPCNT= DCNT_MODE3 | DCNT_BG2;

    m3_plot(150, 80, KYM15(31/*sj*/, 0, 0));

    while (1); // game loop
    return 0;
}
