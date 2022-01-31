#include <iostream>
using namespace std;
main()
{

    int mega=0, bit=0 ;
    cout << "Enter the Megabytes you want to convert into bits :";
    cin >> mega;
    bit = mega * 1024 * 1024 * 8;
    cout << bit<<endl;
}
