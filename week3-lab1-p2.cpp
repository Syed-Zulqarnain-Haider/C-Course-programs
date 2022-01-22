/*
Problem 2:

        Write the algorithm that takes the area of a rectangular fence in square feet from the user and
        the width of the fence in feet and then outputs its length on the screen.
        Formula to calculate the Area is

        Area (feet2) = Length (feet) * Width (feet)
    
    Note: Reserve 3 variables MA1, MA2, MA3
*/

#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    system("cls"); //---used to clear the screen

    //---header---//
    cout << "*******************************************\n";
    cout << "****** Calculate the length of fence ******\n";
    cout << "*******************************************\n\n";

    //initializing the variables with zero value
    float width = 0, length = 0, area = 0;
    
    //get the area from the user and store in variable (area)
    cout << "Enter the Area of the fence in (sq.ft): ";
        cin >> area;
    
    //get the Width from the user and store in variable (width)
    cout << "Enter the Width of the fence in (ft): ";
        cin >> width;
    
    //calculate the length of the rectangle and store in variable (length)
    cout << "The total length of the rectangle is \n";
        length = area / width;
    
    //----print the value of length on screen
    cout << " " << length << " sq.ft\n";
    cout << "-------------------";
 
    getch();       //---used to hold the screen
    system("cls"); //---used to clear the screen
}