// Name: Juan Lemus
// Lab: Mad Libs
// Date: 2/7/17

#include <iostream>
#include <string>

using std :: cin;
using std :: cout;
using std :: endl;
using std :: string;

int main(){
    
    char letter = 'a';
    float evnNumber = 0.0;
    int numHours = 0;
    string location = "";
    string noun = "";
    
    cout << "Please enter a letter: ";
    cin >> letter;
    cout << "Please enter an even number: ";
    cin >> evnNumber;
    cout << "Please enter a high nuber: ";
    cin >> numHours;
    cout << "Please enter a location: ";
    cin >> location;
    
    cout << "Juan wants to get an '" << letter << "' in his programming and algorithms class.";
    cout << " His professor was flaberghasted at the idea and said it couldn't be done but, ";
    cout << "in the spirit of commradery, his professor is willing to automatically give him an automatic '" << letter;
    cout << "' if he can guess how many pairs of gold medals the U.S. will earn at the next " << noun << " games in " << location << endl;
    
    /*Juan wants to get an ___ in his programming and algorithms class. In the spirit of comradery, his professor is willing 
    to automatically give him an automatic '___' if he can guess how many pairs of gold medals the U.S. will earn at the next 
    ______ games in _____*/
}