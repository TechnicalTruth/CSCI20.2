//Name: Juan Lemus
//Lab Description:
//Date: 3/28/17

#include <iostream>
#include <cmath>
#include <string>

using std :: cin;
using std :: cout;
using std :: endl;
using std :: string;

int main(){
    const double userExemption = 3900.00;
    double totalExemtion;
    string userOne;
    char maritalStatus;
    double grssWage;
    double agiWage;
    double totalAgiWage;
    double taxWitheld;
    
    
    cout << "Please enter your name: ";
    getline(cin, userOne);
    
    cout << "Please enter your marital status (S / M): ";
    cin >> maritalStatus;
    
    cout << "Please enter your gross wages: ";
    cin >> grssWage;
    
    cout << "Please enter any tax witheld: ";
    cin >> taxWitheld;
    
    switch(maritalStatus){
        case 'M':
        case 'm':
        
        totalExemtion = userExemption * 2.0;
        
        break;
        case 'S':
        case 's':
        totalExemtion = userExemption;
        
        break;
    }
    agiWage = (grssWage - totalExemtion);
    
    if(( maritalStatus == 's' ) || (maritalStatus == 'S' )){
        if(( agiWage >= 0.0 ) && ( agiWage <= 8925.0 )){
            
            totalAgiWage = agiWage - (agiWage * 0.10);
        }
       
        else if( agiWage >= 8926.0 && agiWage <= 36250.0){
           
            totalAgiWage = agiWage - (((agiWage - 8925.0) * 0.15) + 892.50);
        }
       
        else if( agiWage >= 36251.0 && agiWage <= 87850.0){
            
            totalAgiWage = agiWage - (((agiWage - 36250.0) * 0.25) + 4991.25);
            
        }
        else if( agiWage >= 87851.0){
            totalAgiWage = agiWage - (((agiWage - 87850.0) * 0.28) + 17891.25);
        }
        else {
            cout << "You my friend are beyond BROKE..." << endl;
            
        }
    }
    else{
        if(( maritalStatus == 'm') || ( maritalStatus == 'M')){
            if((agiWage >= 0.0) && (agiWage <= 17850.0)){
                
                totalAgiWage = agiWage - (agiWage * 0.10);
                
            }
            else if(( agiWage >= 17851.0 ) && ( agiWage <= 72500.0 )){
                
                totalAgiWage = agiWage - (((agiWage - 17850.0) * 0.15) + 1785.0);
                
            }
            else if( agiWage >= 72501.0 ){
                
                totalAgiWage = agiWage - (((agiWage - 72500.0) * 0.28) + 9982.50);
                
            }
        }
        else {
            cout << "There was an error with the Gross Income you entered." << endl;
        }
    }
    if(totalAgiWage < 0){
        

    cout << "Name: " << userOne << endl;
    cout << "Total Tax Owed: " << totalAgiWage * -1 << endl;
    cout << userOne << "is entitled to a REFUND of $" << totalAgiWage * -1 << endl;
    }
    else {
    cout << "Name: " << userOne << endl;
    cout << "Total Gross Adjusted Income: " << totalAgiWage << endl;
    cout << "Total Tax Owed: $0" << endl;
    cout << userOne << "is entitled to a REFUND of $" << totalAgiWage << endl;
  
    }
   /* cout << "Name: " << userOne << endl;
    cout << "Total Gross Adjusted Income: " << totalAgiWage << endl;
    cout << "Total Tax Owed: " <<FILLERVARIABLE****** << endl;
    cout << userOne << "is entitled to a REFUND of $" << totalAgiWage << endl;
    */
    return 0;
}