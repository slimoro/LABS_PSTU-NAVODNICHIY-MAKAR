#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const double PI = 3.14159265358979;
    double a = PI / 5, b = PI;
    int k = 10;
    double h = (b - a) / k;
    double eps = 0.0001;

    for (int i = 0; i <= k; i++)
    {
        double x = a + i * h;

        double y = PI * PI / 8 - PI / 4 * fabs(x);

        int n = 40;
        double sn = 0;
        for (int j = 1; j <= n; j++)
        {
            double t = 2 * j - 1;
            sn += cos(t * x) / (t * t);
        }

        double se = 0, term;
        int m = 0;
        do
        {
            m++;
            double t = 2 * m - 1;
            term = cos(t * x) / (t * t);
            se += term;
        } while (fabs(term) >= eps);

        cout << x << "  " << sn << "  " << se << "  " << m << "  " << y << endl;
    }
    return 0;
}