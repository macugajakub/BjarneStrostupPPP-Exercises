#include "swap.h"


void swap_v(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}

void swap_r(int& x, int& y)
{
    int temp = x;
    x = y;
    y = temp;
}

void swap_cr(const int& x,const int& y)
{
    int temp = x;
    //x = y; //nie zadziala; parametry sa zablokowane slowem const, nie mozna ich modyfikowac
    //y = temp;
}
