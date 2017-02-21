//Name: Juan Lemus
/*Lab Description: Calling upon funcitons in order to avoid re-writting the same 
funciton multiple times. I chose to use a struct in order to assign data to a particular
user */
//Date: 2/21/16

#include <iostream>
#include <cmath>

using std :: cout;
using std :: cin;
using std :: endl;

  struct Windchill{
        
      double windVelocity;
      double tempF;
      double oldStyleWindChill;
      double nwStyleWindChill;
      double difference;
      
    };
    
int main(){
    
    Windchill userWindchill;    //crating object from struct
    
    cout << "Enter the current wind velocity: ";
    cin >> userWindchill.windVelocity;
    cout << endl;
    cout << "Enter the current temperature in Fahrenheit: ";
    cin >> userWindchill.tempF;
    cout << endl;
    
    //both old and new functions are solved and subtracted from each other to obtain
    //Old & New windchill and difference
    
    userWindchill.oldStyleWindChill = 0.081 * (3.71 * pow(userWindchill.windVelocity, 0.5) + 5.81 - 0.25 * userWindchill.windVelocity) * (userWindchill.tempF - 91.4) + 91.4;
    userWindchill.nwStyleWindChill = 35.74 + (0.6215 * userWindchill.tempF) - (35.75 * pow(userWindchill.windVelocity, 0.16)) + (0.4275 * userWindchill.tempF * pow(userWindchill.windVelocity, 0.16));
    
    userWindchill.difference = userWindchill.oldStyleWindChill - userWindchill.nwStyleWindChill;
    
    //All outputs required by lab21
    
    cout << "Wind speed: " << userWindchill.windVelocity << endl;
    cout << "Old Formula: " << userWindchill.oldStyleWindChill << endl;
    cout << "New Formula: " << userWindchill.nwStyleWindChill << endl;
    cout << "Difference from old formula to new formula: ";
    cout << userWindchill.difference << endl;
    
    return 0;
    
}