#include <iostream>
using namespace std;
main()
{

    //---calculate the percentge of 5 subjects and total marks are 500
    int subject1, subject2, subject3, subject4, subject5;
    float percentage;
    cout <<"Enter the Subjects numbers."<<endl;
    cout << "Enter the marks of 1st subject: ";
    cin >> subject1;
    cout << " Enter the marks of 2nd subject: ";
    cin >> subject2;
    cout << " Enter the marks of 3rd subject: ";
    cin >> subject3;
    cout << " Enter the marks of 4th subject: ";
    cin >> subject4;
    cout << "Enter the marks of 5th subject: ";
    cin >> subject5;
    //--calculating percentage.
    percentage = ((subject1 + subject2 + subject3 + subject4 + subject5) / 500.0) * 100;
    //-- the total numbers are 500.0 float so answer will be save in percentage float
    cout << "The total percentage of the Subjects is: " << percentage;
}