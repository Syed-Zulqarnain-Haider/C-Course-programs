/*
Problem 1:
Let's say we have a computer with limited memory (three cells, MA1, MA2 and MA3). Write an
algorithm that calculates the value of the following expression after taking input from the user
and show the output on the console:

    (a * (b + c)) + (c * (a + c))

*/

#include <iostream>
using namespace std;
main()
{
    int a, b, c;
    cout << "enter the value of b ";
    cin >> b;
    cout << "enter the value of c ";
    cin >> c;
    /*---first i will calculate the value of a * (b + c) so first i will add b + c
     and store in variable of b because it will not use again now the sum of b+c is in var b  ----*/
    b = b + c;
    cout << "enter the vaalue of a ";
    cin >> a;
    /*--here i am multipyung the values stored in variable of b --
    -a * (b + c)----
    now the answer is stored in variable of b ---*/
    b = b * a;
    //---now i will solve the other part of the expression  (c * (a + c) first i will add a + c and store in variable of a
    a = a + c;
    //----now i will multiply the answer of the addition to var c and store in c
    c = a * c;
    /* -----  now i will add answers of both the expressions 
    (a * (b + c)) + (c * (a + c)) -----*/
    b = b + c;
    cout << "the output of the given expression is " << b << endl;
}