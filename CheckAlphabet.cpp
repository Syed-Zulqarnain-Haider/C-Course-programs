#include <iostream>
#include <conio.h>
using namespace std;

main()
{

    int repeat = 0; //---the value will be used in loop 
    while (repeat != 0.1)
    {
        char c;
        //---i will take input in c from user to check whether the value is character or not-----//
        cout << "To check whether the value is Alphabet or not : ";
        cin >> c;

        //---it will check whether the value belongs to values from a to z and A to Z  ---//
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
            cout << c << "  <---- is an Alphabet.";
        }
        else
        {
            cout << c << "  <---- is not an Alphabet.";
        }

        getch();       //-----wait for any input
        system("cls"); //----clear the screen

    } //---end of forever loop
}//---end of main