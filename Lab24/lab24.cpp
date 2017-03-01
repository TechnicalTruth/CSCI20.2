//Name: Juan Lemus
/* Lab Description: Lab 24 focuses on the use of return to have values returned 
by functions, and how to use information in between functions. */
//2/28/17

#include <iostream>

using std :: cin;
using std :: cout;
using std :: endl;

void swapFunc(int& upLim, int& lowLim);
int rndmNum(int upLim, int lowLim);
double lbsToKilos(double usWeight);
double kilosToLbs(double euWeight);

int main(){
        
    int lowLim = 0;
    int upLim = 0;
    int usrRndNum = 0;   //Variables past this point are to hold function values
    double usWeight = 0.0;
    double euWeight = 0.0;
    
    
    cout << "Please enter a lower limit: ";                 
    cin >> lowLim;
    cout << "Please enter an upper limit: ";
    cin >> upLim;
    
    
    
    usrRndNum = rndmNum(upLim, lowLim);                //Random number generator
    euWeight = lbsToKilos(usrRndNum);      //Takes in random number as arguement
    usWeight = kilosToLbs(euWeight);//Takes returned value from previous function
    
                                                     //All information is output
    cout << "_________________________________" << endl;
    cout << "You entered a lower Limit of: " << lowLim << endl;
    cout << "You entered an upper limit of: " << upLim << endl;
    cout << "Your random number is: " << usrRndNum << endl;
    cout << "Your weight in Kilos is: " << euWeight << endl;
    cout << "Your weight in Pounds is: " << usWeight << endl;
    cout << "_________________________________" << endl; 
    
    
    
    return 0;
    
    
}
                                                   //functions are being defined
void swapFunc(int& upLim, int& lowLim){

    int tempVarA = 0;   //Local varibles only used to hold data in this function
    int tempVarB = 0;
    
    tempVarA = upLim;     //Facilitating value swap by using temporary variables
    tempVarB = lowLim;
    
    upLim = tempVarB;          //Assinging new values to original user variables
    lowLim = tempVarA;
    

    return;
    
}

int rndmNum (int upLim, int lowLim){      
    
    int usrRndNum = 0;           //Local variable only used in rndNum() function
    
    srand(time(0));
    
    swapFunc(upLim, lowLim);    //Swapping user Values inside rndmNum() fucntion
    
    usrRndNum = ((rand() % (lowLim - upLim)) + upLim);   
                                         //creates rndm number in between limits
    
    return usrRndNum;
}
double lbsToKilos(double usWeight){
    
    double euWeight = 0.0;   //Local variable only used in lbsToKilos() function
    
    euWeight = usWeight * 0.45359237;       //Pounds to Kilos formula
    
    return euWeight;
}
double kilosToLbs(double euWeight){
    
    double usWeight = 0.0;   //Local variable only used in kilosToLbs() function
    
    usWeight = euWeight / 0.45359237;                  //Kilos to pounds formula
    
    return usWeight;                      //Returns value of 'usWeight' variable
}