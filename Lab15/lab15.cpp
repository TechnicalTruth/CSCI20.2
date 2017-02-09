// Name: Juan Lemus
// Lab: Mad Libs; using user input to create an electronic version of a madlib
// Date: 2/7/17

#include <iostream>
#include <string>                   //including this library is necessary in order to use strings

using std :: cin;
using std :: cout;
using std :: endl;
using std :: string;                //this is also requried considering 'using namespace std;' is not being used

int main(){
    
    char letter = 'a';
    float numMedals = 0.0;
    string songName = "";
    string location = "";
    string noun = "";               //variables created
    
    cout << "Please enter a letter: ";
    cin >> letter;
    cout << "Please enter a song name: ";
    cin >> songName;
    cout << "Please enter a high nuber: ";
    cin >> numMedals;
    cout << "Please enter a noun: ";
    cin >> noun;
    cout << "Please enter a location: ";
    cin >> location;                            //variables set to user's input
    
    cout << "Juan wants to get an '" << letter << "' in his programming and algorithms class.";
    cout << " His professor was flaberghasted at the idea and said it couldn't be done but, ";
    cout << "in the spirit of Tom Brady's 5th ring, his professor is willing to automatically give him his desired grade" << letter;
    cout << "' if he can sing '" << songName << "' verbatum and if he can guess if the U.S. will earn more or less than " << numMedals << " medals at the next " << noun << " games in ";
    cout << location << "." << endl;
                                                //user input is placed into a predetermined arrangement of words
    
    /*Juan wants to get an ___ in his programming and algorithms class. In the spirit of comradery, his professor is willing 
    to automatically give him that grade if he can sing ____ verbatum and if he can guess if U.S. will earn more or less than ___ medals at the next 
    ______ games in _____*/
}