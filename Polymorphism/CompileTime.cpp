#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

double add(double a, double b)
{
    return a + b;
}

int main()
{
    int x = 5, y = 10;
    cout << "The sum of " << x << " and " << y << " is " << add(x, y) << endl;

    double m = 2.5, n = 3.5;
    cout << "The sum of " << m << " and " << n << " is " << add(m, n) << endl;
    return 0;
}
