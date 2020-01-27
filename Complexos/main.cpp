#include <iostream>
#include "complex.h"

using namespace std;

int main()
{
    Complex x, y(5), z;

    z = x + y;
    z.show();

    z = x - y;
    z.show();

    z = x * y;
    z.show();

    z = x / y;
    z.show();
    return 0;
}
