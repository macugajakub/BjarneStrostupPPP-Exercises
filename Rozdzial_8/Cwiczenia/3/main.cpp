#include <iostream>

using namespace std;

namespace X
{
    int var;
    void print() { cout<<var<<endl; }
}

namespace Y
{
    int var;
    void print() { cout<<var<<endl; }
}

namespace Z
{
    int var;
    void print() { cout<<var<<endl; }
}

int main()
{
    X::var = 7;
    X::print(); // Wydrukuj var z przestrzeni X
    using namespace Y;
    var = 9;
    print(); // Wydrukuj var z przestrzeni Y
    {
        using Z::var;
        using Z::print;
        var = 11;
        print(); // Wydrukuj var z przestrzeni Z
    }
    print(); // Wydrukuj var z przestrzeni Y
    X::print(); // Wydrukuj var z przestrzeni X
    return 0;

}
