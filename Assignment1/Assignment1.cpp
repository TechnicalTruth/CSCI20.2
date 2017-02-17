//Creator: Juan Lemus
//Date Created: 2/16/17
//Lab description: Calculate a person’s weekly wages based on hourly salary and hours.

#include <iostream>
#include <string>

using std :: cin;
using std :: cout;
using std :: endl;
using std :: string;


//struct created to hold worker information
struct checkstub {
    
    string name;
    double hours;
    double rate;
    double grssWage;
    double netPay;
};

int main(){
    
    checkstub workerOne; //Random worker defined
    
    
        //all input is asked for by the program
    cout << "Please enter your name: ";
    getline(cin, workerOne.name);
    cout << "Please enter your weekly hours: ";
    cin >> workerOne.hours;
    cout << "Please enter your hourly salary: ";
    cin >> workerOne.rate;
    cout << endl;
    
        //Equations using input to find worker's Gross and Net Pay
    workerOne.grssWage = (workerOne.hours * workerOne.rate);
    workerOne.netPay = workerOne.grssWage - (130 + (workerOne.grssWage * 0.17));

    //Worker information displayed after all input and calculations are finished
    cout << "Name: " << workerOne.name << endl;
    cout << "Hours: " << workerOne.hours << endl;
    cout << "Rate: " << workerOne.rate << "/hr" << endl;
    cout << "Gross Pay: " << workerOne.grssWage << endl;
    cout << "Net Pay: " << workerOne.netPay << endl;
    
    return 0;
}