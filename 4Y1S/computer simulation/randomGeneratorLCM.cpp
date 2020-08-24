//Generating random numbers using LCG
// Generate a sequence of given (n) random numbers and save the generated data into a text file with space delimited values. Use Linear Congruential Method (LCM) to generate the random numbers. Seed (x0), constant multiplier (a), increment (c), and modulus (m) will be given using standard keyboard.
// • Input: From console
// • Output: File

#include <fstream>
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
   fstream file;
   file.open ("output.txt", ios::out | ios::in );

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
    i = 0;
    r[0] = (float)x[0] / m;
    
    if (a == 1)
    {
        cout << "\n  Additive LCG :";
        do
        {

            x[i + 1] = (x[i] + c) % m;
            r[i + 1] = (float)x[i + 1] / m;
            i++;
        } while (i <= n);
    }
    else if (c == 0)
    {
        cout << "\nMultiplicative LCG:";
        do
        {

            x[i + 1] = (a * x[i]) % m;
            r[i + 1] = (float)x[i + 1] / m;
            i++;
        } while (i <= n);
    }
    else
    {
        cout << "\n Mixed LCG:"<<endl;
        do
        {

            x[i + 1] = (a * x[i] + c) % m;
            r[i + 1] = (float)x[i + 1] / m;
            i++;
        } while (i <= n);
    }
    cout<< "i = "<<i<<endl;
    cout << "Thus the obtained random numbers are:";
    for (j = 1; j < i; j++)
    {
        // Writing on file
        file << endl;
        file << r[j] <<endl;
      
    }
    file.close();
    return 0;
}
/* Input

Enter the number of random numbers to generate:3
Enter the value of seed X0:27

Enter the value of a:17

Enter the value of c:43

Enter the value of m:100

Output: 

0.02

0.77

0.52

*/

// #include <iostream>
// #include <fstream>

// using namespace std;

// int main(){

//   char text[200];

//   fstream file;
//   file.open ("example.txt", ios::out | ios::in );

//   cout << "Write text to be written on file." << endl;
//   cin.getline(text, sizeof(text));

//   // Writing on file
//   file << text << endl;

//   // Reding from file
//   file >> text;
//   cout << text << endl;

//   //closing the file
//   file.close();
//   return 0;
// }