#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    char letter;
    cout << "What is the letter? ";
    cin >> letter;

    char lowerLetter = tolower(letter);

    if (lowerLetter == letter) {
        cout << endl << "The letter " << letter << " is a lowercase letter.";
    }
    else {
        cout << endl << "The letter " << letter << " is an uppdercase letter.";
    }
}
