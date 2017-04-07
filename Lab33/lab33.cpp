#include <iostream> 
#include <string>
#include <cstdlib>
#include <ctime>

using std :: cin;
using std :: cout;
using std :: endl;
using std :: string;

int rndmNum ();

int main(){

int userGuess;
int srandNum;

srandNum = rndmNum();
    
    cout << "Please try to guess a value between 1 and 50" << endl;
    cin >> userGuess;
    
    while(userGuess != srandNum){
        
        if( userGuess < srandNum && userGuess >= 1){
            
            cout << "Sorry, your value is too low, please try again." << endl;
            
        }
        else if( userGuess > srandNum && userGuess <= 50){
            
            cout << "Sorry, your value is like Snoop Dogg... too high, now try again playa." << endl;
            
        }
        else{
            
            cout << "Could you follow directions and pick a number within the scope? Thanks ;D" << endl;
            
        }
        cout << "Please try to guess a value between 1 and 50" << endl;
        cin >> userGuess;
    }
    
    return 0;
    
}




int rndmNum(){       //rndmNum function is defined
    int srandNum;
    
    srand(time(0));
    
   srandNum = ((rand() % 50) + 1);
    
    return srandNum;
}