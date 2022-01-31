#include <iostream>
using namespace std;
main()
{
    //---We need to find the final velocity take time,inital velocity and  acceleration as input
    //---Formula-----
    //-- acceleration = final velocity - initial velocity / time
    //-- final=acceleration+initial*time
    float acceleration, initial_velocity, final_velocity, time;
    cout << "Enter the acceleration of the body: ";
    cin >> acceleration;
    cout << "Enter the initial velocity of the car: ";
    cin >> initial_velocity;
    cout << "Enter the time taken by the car: ";
    cin >> time;
    final_velocity = (acceleration * time) + initial_velocity;
    cout << "The final velocity of the body id: " << final_velocity;
}
