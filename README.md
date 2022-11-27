# cctype

The C++ <cctype> header file is used to declare a set of functions to classify (and transform) individual characters. It is used in this project to detect uppercase or lowercase letters.

## Installation

Insert the following snippet to the top of your code.

```cpp
#incude <cctype> 
```

## Usage

```cpp
#include <iostream> // iostream is used here for input/output
#incude <cctype> // cctype is used here to convert to lowercase/uppercase

using namespace std; // to remove the need to use std:: in front of cin and cout

int main() // main function
{
    char letter; // define char letter
    cout << "What is the letter? "; // print to the console: "What is the letter?"
    cin >> letter; // ask for input from the user

    char lowerLetter; // creates char "lowerLetter"
    lowerLetter = tolower(letter); // converts char "letter" to lowercase and assigns it to "lowerLetter"

    if (lowerLetter == letter) { // if the lowercase version of "letter" is equal to the original "letter"
        cout << endl << "The letter " << letter << " is a lowercase letter."; // print to the console
    } // end if statement
    else { // if "lowerLetter" is not the same as the original "letter"
        cout << endl << "The letter " << letter << " is an uppdercase letter."; // print to the console
    } // end else statement
} // end main function

```
