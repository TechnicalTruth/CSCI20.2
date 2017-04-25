//Name: Juan Lemus 
//Date: 4/25/17
//Lab Description: 

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <string>

using std :: cin;
using std :: cout;
using std :: string;
using std :: endl;

int emailNum();

int main(){
    string firstName;
    string lastName;
    
    cout << "Please eneter your first name: ";
    cin >> firstName;
    cout << endl;
    
    while(firstName.size() > 10){
        
        cout << "The name you entered is over the maximum character limit (10), please try again: ";
        cin >> firstName;
        
    }
    cout << "Thank you, now enter your last name: ";
    cin >> lastName;
    cout << endl;
    
    while (lastName.size() > 20){
        
        cout << "Your last name exceeds our character limit (20), please try again: ";
        cin >> lastName;
        cout << endl;
    }
    
    if( firstName == lastName){
        
        cout << "WARNING: Your first and last name appear to be the same!" << endl;
        
    }
    
    
    cout << "Your possible usernames could be: " << endl;
    cout << firstName << lastName.at(0) << emailNum() << endl;
    cout << firstName.at(0) << lastName << emailNum() << endl;
    cout << "or" << endl;
    cout << firstName << lastName << emailNum() << endl;
}

int emailNum(){
    int mdNum;
    
    srand(time(0));
    
    mdNum = (rand() % 99) + 1;
    
    return mdNum;
}