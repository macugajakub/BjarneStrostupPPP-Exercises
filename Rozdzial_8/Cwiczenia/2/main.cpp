#include <iostream>
#include "swap.h"

using namespace std;

int main()
{
    //Przypadek z wywolaniem swap_v()
    {
        int x = 7;
        int y = 9;
        cout<<"x="<<x<<", y="<<y<<endl;
        swap_v(x,y);// Znak ? zast¹p literami v, r lub cr
        cout<<"x="<<x<<", y="<<y<<endl;
        swap_v(7,9);
        const int cx = 7;
        const int cy = 9;
        cout<<"cx="<<cx<<", cy="<<cy<<endl;
        swap_v(cx,cy);
        cout<<"cx="<<cx<<", cy="<<cy<<endl;
        swap_v(7.7,9.9);
        double dx = 7.7;
        double dy = 9.9;
        cout<<"dx="<<dx<<", y="<<dy<<endl;
        swap_v(dx,dy);
        cout<<"dx="<<dx<<", y="<<dy<<endl;
        swap_v(dx,dy);
        cout<<"dx="<<dx<<", y="<<dy<<endl;
    }
    cout<<endl;
    //Przypadek z wywolaniem swap_r()
    {
        int x = 7;
        int y = 9;
        cout<<"x="<<x<<", y="<<y<<endl;
        swap_r(x,y);// Znak ? zast¹p literami v, r lub cr
        cout<<"x="<<x<<", y="<<y<<endl;
        //swap_r(7,9);
        const int cx = 7;
        const int cy = 9;
        cout<<"cx="<<cx<<", cy="<<cy<<endl;
        //swap_r(cx,cy);  //cx, cy sa typu stalego, kompilator blokuje zmiane wartosci
        cout<<"cx="<<cx<<", cy="<<cy<<endl;
        //swap_r(7.7,9.9);
        double dx = 7.7;
        double dy = 9.9;
        cout<<"dx="<<dx<<", y="<<dy<<endl;
        //swap_r(dx,dy);
        cout<<"dx="<<dx<<", y="<<dy<<endl;
        //swap_r(dx,dy);
        cout<<"dx="<<dx<<", y="<<dy<<endl;
    }
     cout<<endl;
    //Przypadek z wywolaniem swap_cr()
    {
        int x = 7;
        int y = 9;
        cout<<"x="<<x<<", y="<<y<<endl;
        swap_cr(x,y);// Znak ? zast¹p literami v, r lub cr
        cout<<"x="<<x<<", y="<<y<<endl;
        //swap_cr(7,9);
        const int cx = 7;
        const int cy = 9;
        cout<<"cx="<<cx<<", cy="<<cy<<endl;
        //swap_cr(cx,cy);  //cx, cy sa typu stalego, kompilator blokuje zmiane wartosci
        cout<<"cx="<<cx<<", cy="<<cy<<endl;
        //swap_cr(7.7,9.9);
        double dx = 7.7;
        double dy = 9.9;
        cout<<"dx="<<dx<<", y="<<dy<<endl;
        //swap_cr(dx,dy);
        cout<<"dx="<<dx<<", y="<<dy<<endl;
        //swap_cr(dx,dy);
        cout<<"dx="<<dx<<", y="<<dy<<endl;
    }

    return 0;
}
