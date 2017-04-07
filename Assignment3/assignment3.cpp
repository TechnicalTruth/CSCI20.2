#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using std :: cin;
using std :: cout;
using std :: endl;
using std :: string;

class SCORE{
    public:
    SCORE(){
        //Default contstructor
        score_ = 0;
    }
    
    void setScore(int diVal){
        score_ = score_ + diVal;
    }
    
//Returns player's score
    int getScore(){
        return score_;
    }
    
    private:
        int score_;
};

// random number function representative of a dice roll
int srandNum();

int main(){
    int diVal;
    int sRandNum;
    int tempVal;
    int itterations;
    char userIn;
    
    //objects created to keep score
    SCORE user;
    SCORE ai;
    
    cout << "Welcome to 'Pig'! This game will run until either you or the AI obtain 100 points ";
    cout << "or until you either enter 'Q' to quit. Press 'R' to begin your roll." << endl;
    cin >> userIn;
    
    while( (user.getScore() < 100 && ai.getScore() < 100) && (userIn != 'y' && userIn != 'Y')){

// user entering 'R' continues his turn
        if(userIn == 'r' || userIn == 'R'){
// if else statement allows us to reset his score if he gets a 1
            diVal = srandNum();
                if(diVal != 1){
                    
                    user.setScore(diVal);
                        cout << "You rolled a " << diVal << " and  your new score is now: " << user.getScore() << endl;
                 
                }
                else{
                    //[FIXME]
                      
                    cout << "What a shame, you rolled a '1' and your score will now be reset." << endl;
                    
                }
            
            cout << "Press 'R' to roll again or 'S' to stay: ";
            cin >> userIn;
            cout << endl;
        }
        else if(userIn == 's' || userIn == 'S'){
            
           for(itterations = 0; itterations < 6; ++itterations){
               
                diVal = srandNum();
//if else used once agian to evaluate if dice landed on one
                if(diVal == 1){
                    //[FIXME]
                
                }
                else{
                    ai.setScore(diVal);
                    
                    itterations = 6; 
                }
            
        }
        }
//allows user to quit at any time
        else if (userIn == 'q' || userIn == 'Q'){
            
            cout << "Are you sure you wish to quit?" << endl;
            cin >> userIn;
            
        }
        else{
//precautionary measure in case they want to try something funny
            
            cout << "Please enter a valid key: " << endl;
            cout << "Roll = 'R'" << endl;
            cout << "Stay = 'S'" << endl;
            cout << "Quit = 'Q'" << endl;
            cin >> userIn;
        }
        
    }
    
    cout << "Thanks for playing, your score was " << user.getScore() << endl;
    cout << "The computer's score was " << ai.getScore() << endl;

//evaluates scores to determine winner
    if( user.getScore() < ai.getScore()){
        
        cout << "You have lost" << endl;
    }
    else if(user.getScore() > ai.getScore()) {
        
        cout << "You have won" << endl;
    }
    else{ 
        
        cout << "This session has ended in a draw" << endl;
    }
    
    return 0;
}

int srandNum(){
    
    int sRandNum;
    
    
    srand(time(0));
    
//The '6' & '1' parameters allow for proper dice simulation
    sRandNum = ((sRandNum % 6) + 1);
    
    return sRandNum;
}