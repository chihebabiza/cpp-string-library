# String Library in C++

## Overview
This C++ library provides a collection of functions for handling string operations, built using object-oriented programming (OOP) principles. It simplifies various string manipulations such as formatting, searching, modifying, and analyzing text.

## Features
- String concatenation and splitting
- Case conversion (uppercase/lowercase)
- Substring searching and extraction
- Trimming whitespace
- Reversing strings
- Replacing characters or substrings
- Checking for palindromes
- Counting words and characters
- Converting numbers to strings and vice versa ...etc

## Installation
To use this library in your C++ project:

1. Clone the repository or download the source files.
2. Include the necessary header file in your C++ program.
3. Compile and link the library with your project.

```cpp
#include "String.h"
```

## Usage
Here is an example of how to use the library:

```cpp

#include <iostream>
#include "String.h"

using namespace std;

int main()

{
    ClsString String1;

    ClsString String2("Chiheb");

    String1.Value = "Ali Ahmed";

    cout << "String1 = " << String1.Value << endl;
    cout << "String2 = " << String2.Value << endl;

    cout << "Number of words: " << String1.CountWords() << endl;

    cout << "Number of words: " << String1.CountWords("Fadi ahmed rateb omer") << endl;

    cout << "Number of words: " << ClsString::CountWords("chiheb mohammed abiza") << endl;

    //----------------
    ClsString String3("hi how are you?");

    cout << "String 3 = " << String3.Value << endl;

    cout << "String Length = " << String3.Length() << endl;

    String3.UpperFirstLetterOfEachWord();
    cout << String3.Value << endl;

    //----------------

    String3.LowerFirstLetterOfEachWord();
    cout << String3.Value << endl;

    //----------------

    String3.UpperAllString();
    cout << String3.Value << endl;

    //----------------

    String3.LowerAllString();
    cout << String3.Value << endl;

    //----------------

    cout << "After inverting a : "
         << ClsString::InvertLetterCase('a') << endl;

    //----------------

    String3.Value = "AbCdEfg";

    String3.InvertAllLettersCase();
    cout << String3.Value << endl;

    String3.InvertAllLettersCase();
    cout << String3.Value << endl;

    //----------------

    cout << "Capital Letters count : "
         << ClsString::CountLetters("Chiheb abiza", ClsString::CapitalLetters)
         << endl
         << endl;

    //----------------

    String3.Value = "Welcome to Algeria";
    cout << String3.Value << endl;

    cout << "Capital Letters count :" << String3.CountCapitalLetters() << endl;

    //----------------

    cout << "Small Letters count :" << String3.CountSmallLetters() << endl;

    //----------------

    cout << "vowels count :" << String3.CountVowels() << endl;

    //----------------

    cout << "letter E count :" << String3.CountSpecificLetter('E', false) << endl;

    //----------------

    cout << "is letter u vowel? " << ClsString::IsVowel('a')
         << endl;

    //----------------

    cout << "Words Count" << String3.CountWords()
         << endl;

    //----------------

    vector<string> vString;

    vString = String3.Split(" ");

    cout << "\nTokens = " << vString.size() << endl;

    for (string &s : vString)
    {
        cout << s << endl;
    }

    //----------------

    // Tirms
    String3.Value = "    Chiheb abiza     ";
    cout << "\nString     = " << String3.Value;

    String3.Value = "    Chiheb abiza     ";
    String3.TrimLeft();
    cout << "\n\nTrim Left  = " << String3.Value;

    //----------------

    String3.Value = "    Chiheb abiza     ";
    String3.TrimRight();
    cout << "\nTrim Right = " << String3.Value;

    //----------------

    String3.Value = "    Chiheb abiza     ";
    String3.Trim();
    cout << "\nTrim       = " << String3.Value;

    //----------------

    // Joins
    vector<string> vString1 = {"Mohammed", "Faid", "Ali", "Maher"};

    cout << "\n\nJoin String From Vector: \n";
    cout << ClsString::JoinString(vString1, " ");

    string arrString[] = {"Mohammed", "Faid", "Ali", "Maher"};

    cout << "\n\nJoin String From array: \n";
    cout << ClsString::JoinString(arrString, 4, " ");

    //----------------

    String3.Value = "Chiheb setif abiza";
    cout << "\n\nString     = " << String3.Value;

    String3.ReverseWordsInString();
    cout << "\nReverse Words : " << String3.Value
         << endl;

    //---------------

    String3.Value = "Chiheb algeria abiza";
    cout << "\nReplace : " << String3.ReplaceWord("Mohammed", "Sari")
         << endl;

    //---------------

    String3.Value = "This is: a sample text, with punctuations.";
    cout << "\n\nString     = " << String3.Value;

    String3.RemovePunctuations();
    cout << "\nRemove Punctuations : " << String3.Value
         << endl;

    //---------------
    system("pause>0");
    return 0;
};

```

## Requirements
- A C++ compiler (GCC, Clang, MSVC, etc.)

## Contributing
Feel free to contribute by submitting pull requests, reporting issues, or suggesting new features.

## License
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Author
Developed by Chiheb Abiza

## Contact
For any inquiries, feel free to reach out:
- Email: chihababiza9@gmail.com
- GitHub: [ChihebAbiza](https://github.com/ChihebAbiza)
- LinkedIn: [@ChihebAbiza](https://www.linkedin.com/in/chihebabiza/)

## Open Source
This project is open source and welcomes contributions from the community!

