/*
2. Napisz funkcjê o nazwie print() drukuj¹c¹ zawartoœæ wektora liczb typu int w strumieniu
cout. Niech przyjmuje dwa argumenty — ³añcuch s³u¿¹cy jako etykieta wyjœcia i wektor.

*/

#include <iostream>
#include <ostream>
#include <vector>

using namespace std;

void print(ostream& str, vector<int> vec)
{
    for (auto x:vec)
    {
        str<<x<<" ";
    }
}


int main()
{
    vector<int> x = {1,2,3,4,5,6};
    print(cout,x);
    return 0;
}
