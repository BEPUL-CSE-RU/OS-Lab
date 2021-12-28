//Suppose you are given a line of text as a plaintext, find out the corresponding Caesar Cipher (i.e. character three to the right modulo 26). Then perform the reverse operation to get original plaintext.
// Your First C++ Program

// A C++ program to illustrate Caesar Cipher Technique
#include <iostream>
using namespace std;
 
// This function receives text and shift and
// returns the encrypted text
string encrypt(string text, int s)
{
    string result = "";
 
    // traverse text
    for (int i=0;i<text.length();i++)
    {
        // apply transformation to each character
        // Encrypt Uppercase letters
        if (isupper(text[i]))
            result += char(int(text[i]+s-65)%26 +65);
 
    // Encrypt Lowercase letters
    else
        result += char(int(text[i]+s-97)%26 +97);
    }
 
    // Return the resulting string
    return result;
}
 
// Driver program to test the above function
int main()
{
    string text="ATTACKATONCE";
    cout<<"Enter Original text = ";
    cin>>text;
    int s = 3;
    cout << "Text : " << text;
    cout << "\nShift: " << s;
    cout << "\nCipher: " << encrypt(text, s);
    return 0;
}