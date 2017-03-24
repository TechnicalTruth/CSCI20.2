#include <iostream>
#include <string>


using std :: cin;
using std :: cout;
using std :: endl;
using std :: string;


int main(){
    
    const double dumbPlan = 0.0;
    const double smartPlan = 5.0;
    double tabPlan = 10.0;
    double stdCharge;
    double unlDataPlan;
    double payPerG;
    double userCost;
    string userIn;
    string userPlan;
    
    cout << "Please choose what device you would like: " << endl;
    cout << "Standard Phone - (Std)" << endl;
    cout << "Smarphone - (Adv)" << endl;
    cout << "Tablet - (Tab)" << endl;
    cin >> userPlan;
    
    if(userPlan == "Std"){
        userCost = dumbPlan;
        
    }
    else if(userPlan == "Adv"){
        userCost = smartPlan;
    }  
    else if(userPlan == "Tab"){
        userCost = tabPlan;
    }
    
    cout << "Please choose between our available plans as follows: " << endl;
    cout << "Unlimited data - (UD)" << endl;
    cout << "Pay Per Data Charge - (PPD)" << endl;
    cin >> userIn;
    
    if(userIn == "UD"){
        userCost = userCost + unlDataPlan;
    }
    
    else if(userIn == "PPD"){
        userCost = userCost + payPerG;
    }
    
    
    cout << "You're total will be: $" << userCost << endl;
    cout << "Tank you come again!" << endl;
    
    return 0;
}