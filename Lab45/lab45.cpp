//Name: Juan Lemus 
//Date: 4/25/17
/*Lab Description: This lab focuses on the proper and effective use of modern strings
while providing an emphasis on hte improtance of string and character tools that can be useful
in providing variation to a program output
*/
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <string>

using std :: cin;
using std :: cout;
using std :: string;
using std :: endl;

//This funciton is used to provide a random number as a username suffix
int emailNum();

int main(){
    
    string firstName;
    string lastName;
    
//Requests first name
    cout << "Please eneter your first name: ";
    cin >> firstName;
    cout << endl;
    
//Continues to request first name until it meets criteria
    while(firstName.size() > 10){
        
        cout << "The name you entered is over the maximum character limit (10), please try again: ";
        cin >> firstName;
        
    }
    
//Requests last name
    cout << "Thank you, now enter your last name: ";
    cin >> lastName;
    cout << endl;
    
//Requests last name until criteria is met
    while (lastName.size() > 20){
        
        cout << "Your last name exceeds our character limit (20), please try again: ";
        cin >> lastName;
        cout << endl;
    }

//Checks to see if first and last name match  
    if( firstName == lastName){
        
        cout << "WARNING: Your first and last name appear to be the same!" << endl;
        
    }
    

//Provides possible usernames
    cout << "Your possible usernames could be: " << endl;
    cout << firstName << lastName.at(0) << emailNum() << endl;
    cout << firstName.at(0) << lastName << emailNum() << endl;
    cout << "or" << endl;
    cout << firstName << lastName << emailNum() << endl;
}

//Function definition
int emailNum(){
    
    int mdNum;
    
    srand(time(0));
    
    mdNum = (rand() % 99) + 1;
    
    return mdNum;
}