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



// #include <fstream>
// #include <iostream>
// using namespace std;

// int main(void)
// {

//      char filename[ ] = "Informacije.txt";
//      fstream appendFileToWorkWith;

//      appendFileToWorkWith.open(filename, std::fstream::in | std::fstream::out | std::fstream::app);


//       // If file does not exist, Create new file
//       if (!appendFileToWorkWith ) 
//       {
//         cout << "Cannot open file, file does not exist. Creating new file..";

//         appendFileToWorkWith.open(filename,  fstream::in | fstream::out | fstream::trunc);
//         appendFileToWorkWith <<"\n";
//         appendFileToWorkWith.close();

//        } 
//       else   
//       {    // use existing file
//          cout<<"success "<<filename <<" found. \n";
//          cout<<"\nAppending writing and working with existing file"<<"\n---\n";

//          appendFileToWorkWith << "Appending writing and working with existing file"<<"\n---\n";
//          appendFileToWorkWith.close();
//          cout<<"\n";

//     }




//    return 0;
// }