//name: Juan Lemus
//Lab Description: Coinstar emulator majiggy
//Date: 2/4/17

#include <iostream>

using std :: cout;
using std :: cin;
using std :: endl;

int main(){
    
    int numQuart = 0;
    int numDimes = 0;
    int numNickl = 0;
    int numPenn = 0;
    int numCent= 0;
    
    double cashBack = 0.0;
    double totalCash = 0.0;
    
    cout << "Please deposit money now." << endl;
    cin >> numCent;
    
    cout << "Total money deposited: ";
    cout << numCent << " cents" << endl;
    
    
    numQuart = numCent / 25;
    numDimes = (numCent % (numQuart * 25)) / 10;
    numNickl = (numCent % ((numQuart * 25) + (numDimes * 10)) )/ 5;
    numPenn = (numCent % ((numQuart * 25) + (numDimes * 10) + (numNickl * 5))) / 1;
    totalCash = numCent;
    totalCash /= 100.0;
    cashBack = numCent - (numCent * 0.109);
    cashBack /= 100.0;
    
    cout << "Number of quarters: " << numQuart << endl;
    cout << "Number of dimes: " << numDimes << endl;
    cout << "Number of nickels: " << numNickl << endl;
    cout << "Number of pennies: " << numPenn << endl;
    cout << "Your total is $" << totalCash << endl;
    cout << "Now there will be a 10.9% fee applied." << endl;
    cout << "Your cash voucher will have a value of: $" << cashBack << endl;
    
    return 0;
    
}