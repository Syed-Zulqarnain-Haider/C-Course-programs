#include <iostream>
using namespace std;
main()
{ /*

1.To calculate the price of the fertilizer per pound 
2.To calculate the price of fertiling the area per square foot

we will take input
1.the size of the fertilizer bag in pound
2.he price of the bag
3.the area in square feet that can be covered by the bag
*/

    int size, price, area_covered;
    int total_cost, tcost_square;

    cout << "Enter the weight of the Fertilizer bag in POUND (lb) : ";
    cin >> size;

    cout << "Enter the Price of the bag";
    cin >>price;

    cout << "Enter the Area covered by the Fertilizer bag";
    cin >> area_covered;

    total_cost = price /size;
    cout << "The total price of the fertilizer per pound is " << tcost_pound<<endl;
    tcost_square = price/area;
    cout << "The total price of fertilizing area per square foot is " << tcost_square<<endl;
}