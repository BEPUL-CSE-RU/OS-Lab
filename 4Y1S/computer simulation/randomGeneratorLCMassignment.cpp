#include <fstream>
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
    char filename[] = "randomGeneratorLCMoutput.txt";
    fstream file;
    file.open(filename, ios::out | ios::in | ios::app);

    int x[10], n, a, c, m, i, j;
    float r[10];
    cout << "Enter the number of random numbers to generate:";
    cin >> n;
    cout << "Enter the value of seed X0:";
    cin >> x[0];
    cout << "\nEnter the value of a:";
    cin >> a;
    cout << "\nEnter the value of c:";
    cin >> c;
    cout << "\nEnter the value of m:";
    cin >> m;

    r[0] = (float)x[0] / m;

    if (a == 1)
    {
        file << "Additive LCG :";
        for (i = 0; i <= n; i++)
        {
            x[i + 1] = (x[i] + c) % m;
            r[i + 1] = (float)x[i + 1] / m;
        }
    }
    else if (c == 0)
    {
        file << "Multiplicative LCG:";

        for (i = 0; i <= n; i++)
        {
            x[i + 1] = (a * x[i]) % m;
            r[i + 1] = (float)x[i + 1] / m;
        }
    }
    else
    {
        file << "Mixed LCG:";
        for (i = 0; i <= n; i++)
        {
            x[i + 1] = (a * x[i] + c) % m;
            r[i + 1] = (float)x[i + 1] / m;
        }
    }
    cout << "i = " << i << endl;
    file << "\nThus the obtained random numbers are:" << endl;
    for (j = 1; j < i; j++)
    {
        // Writing on file

        file << endl
             << r[j] << endl;
    }
    file.close();
    return 0;
}