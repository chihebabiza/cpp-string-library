
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
