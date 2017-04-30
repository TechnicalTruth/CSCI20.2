//Name: Juan Lemus
/*Lab Description: This lab focuses on the proper use of older C Strings and understanding
how it relates to c++ string and array structrues.
*/
#include <iostream>
#include <cstring>


using std :: cin;
using std :: cout;
using std :: endl;
//using std :: ;
int emailNum();


int main(){
//Char strings created
    char firstName[10];
    char lastName[20];
    
    cout << "Please enter your first name: ";
    cin >> firstName;

//Ensures first name is not over 10 characters long
    while(strlen(firstName)  > 10){
        cout << "The name you entered is over the maximum character limit (10), please try again: ";
        cin >> firstName;
    }
    
    cout << "Thank you, now enter your last name: ";
    cin >> lastName;
    cout << endl;
    
//Ensures last name is not over 20 characters long
    while(strlen(lastName) > 20){
        cout << "The name you entered is over the maximum character limit (20), please try again: ";
        cin >> lastName;
        cout << endl;
    }
    
/*Compares first and last names to see if they match;
  if they do match, a warning will apear */
    if(strcmp(firstName, lastName) == 0){
            cout << "Warning: Your first name and last name are the same!" << endl;
    }

//Will provide possible combinations with information provided
    cout << "Your possible usernames are: " << endl;
    cout << firstName[0] << lastName << emailNum() << endl;
    cout << firstName << lastName[0] << emailNum() << endl;
    cout << "or" << endl;
    cout << strcat(firstName, lastName) << emailNum() << endl;
    
    return 0;
}

//Function definition
int emailNum(){
    
    int mdNum;
    
    srand(time(0));
    
    mdNum = (rand() % 99) + 1;
    
    return mdNum;
}