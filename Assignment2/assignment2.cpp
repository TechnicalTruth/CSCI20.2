// Name: Juan Lemus
// Lab Description: Program that converts dollars to dollars, euros, Yuan, and Bitcoins
//program uses a class to store and to convert all values in order to maintain readaility
//Date? No thank you

#include <iostream>

using std :: cin;
using std :: cout;
using std :: endl;
using std :: string;

/*Currency conversion class; This could be used by anyone who is wanting to make
monetary gain in different countries */

class MONAY {                                        
    public:
                                                           //default constructor
        MONAY(){
            
            double intVal = 0;
        }
                                                              //set functions
        
        void setDollToDollars(double intVal){
            dollVal = intVal;
        }
        void setDollToEuros(double intVal){
            dollVal = intVal;
        }
        void setDollToYuan(double intVal){
            dollVal = intVal;
        }
        void setDollToBits(double intVal){
            dollVal = intVal;
        }
        void setBitsToDollars(double intVal){
            dollVal = intVal;
        }
        void setEurosToYuan(double intVal){
            dollVal = intVal;
        }
                                                                 //get functions
        double getDollEq(){
            return dollVal;
        }
        double getEuEq(){
            return dollVal * 0.93;
        }
        double getYuEq(){
            return dollVal * 6.90;;
        }
        double getBitEq(){
            return dollVal * 0.00098;
        }
        double getUsBitVal(){
            return dollVal / 0.00098;
        }
        double getEurosToYuan(){
            return dollVal * 7.45;
        }
        void print (){               //Print function responsible for all output
            
     cout << "You have a value of: " << endl;       
     cout << "Dollar Value: $" << getDollEq() << endl;
     cout <<  "Euros Value: $"  <<getYuEq() << endl;
     cout << "Bitcoin Value: $" <<getBitEq() << endl;
     cout << "Euro Value: $" << getEuEq() << endl;
     cout << "Dollar Value: $" << getUsBitVal() << endl;
     cout << "Yuan Value: $" << getEurosToYuan() << endl;
            
        }
    private:
        double dollVal;
        
        
};
int main(){
    
       double intVal;
        
       MONAY rndmUser;                                         //Creating Object
       
       rndmUser.setDollToDollars(1.0);
       rndmUser.setDollToYuan(1.0);
       rndmUser.setDollToBits(1.0);
       rndmUser.setDollToEuros(1.0);
       rndmUser.setDollToBits(10000000);
       rndmUser.setBitsToDollars(1);
       rndmUser.setEurosToYuan(6748.72);
       
       rndmUser.print();                         //Print function called by user
       
       return 0;
}

/* Class MONAY {
    public:
        default constructor
        dollar to dollar function
        dollar to euro function
        dollar to yuan function
        dollar to bitcoin function
        
        private:
            initial value variable;
            dollar value variable;
            euro value variable;
            yuan value variable;
            bitcoin value variable;
};

Main function{
    
    "Welcome to the 'Lazy Man Value Converter', where we convert your dollars to"
    "Dollars, Euros, Yuan, or even Bitcoin!"
________________________________________________________________________________

    "Please enter the amount you would like to convert: "
    
    Input: intitial Value
    
    Class does its job
    
    print Dollar, Yuan, Euro, and Bitcoin value equivalents                     ***if else statment to only convert to a certain currency?***

    return 0;
}
*/