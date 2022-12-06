//
#include <iostream>
#include <math.h>
using namespace std;

double sinx(double x)
{
    double sum = 0, term = x;
    int i = 1;
    while (fabs(term) > 1e-9)
    {
        sum += term;
        i += 2;
        term *= -1 * x * x / (i * (i - 1));
    }
    return sum;
}

int main(int argc, char const* argv[])
{
    double x = 3.14159;
    cout << sinx(x) << endl;
    return 0;
}