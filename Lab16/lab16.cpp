//Name: Juan Lemus
/*Description: Zombie parts tosser, user picks specific 
types of zombie parts to create two monsters while the rest are pre-determined.
Lab focuses on the re-use of structs for multiple */
//Date: 2/9/17

#include <iostream>
#include <string>

using std :: cin;
using std :: cout;
using std :: endl;
using std :: string;

struct Monster {
    string name;
    string head;
    string eyes;
    string ears;
    string nose;
    string mouth;
};


int main(){
    
    Monster monsterOne;
    Monster monsterTwo;
    Monster monsterThree;
    Monster monsterFour;
                                     // MOnster One is being created by user
    cout << "Please name your first monster: ";
    cin >> monsterOne.name;
    cout << "Choose a head type for this monster: ";
    cin >> monsterOne.head;
    cout << "Choose an eye type for this monster: ";
    cin >> monsterOne.eyes;
    cout << "Choose an ear type for this monster: ";
    cin >> monsterOne.ears;
    cout << "Choose a nose type for this monster: ";
    cin >> monsterOne.nose;
    cout << "Choose a mouth type for this monster: ";
    cin >> monsterOne.mouth;
                                        //Monster Two is being created by user
    cout << "Please name your second monster: ";
    cin >> monsterTwo.name;
    cout << "Choose a head type for this monster: ";
    cin >> monsterTwo.head;
    cout << "Choose an eye type for this monster: ";
    cin >> monsterTwo.eyes;
    cout << "Choose an ear type for this monster: ";
    cin >> monsterTwo.ears;
    cout << "Choose a nose type for this monster: ";
    cin >> monsterTwo.nose;
    cout << "Choose a mouth type for this monster: ";
    cin >> monsterTwo.mouth;
                                          //Premade Monster Three is defined
    monsterThree.name = "Craig";
    monsterThree.head = "Zombus";
    monsterThree.eyes = "Wackus";
    monsterThree.ears = "Spritem";
    monsterThree.nose = "Spritem";
    monsterThree.mouth = "Vegitas";
                                            //Premade Monster Four is defined
    monsterFour.name = "Greg";
    monsterFour.head = "Franken";
    monsterFour.eyes = "Vegitas";
    monsterFour.ears = "Spritem";
    monsterFour.nose = "Wackus";
    monsterFour.mouth = "Wackus";
    cout << endl;
                //Following is the output describing every Monster (One - Four)
                
    cout << "Monster name: " << monsterOne.name << endl;
    cout << "Head type: " << monsterOne.head << endl;
    cout << "Eye type: " << monsterOne.eyes << endl;
    cout << "Ear type: " << monsterOne.ears << endl;
    cout << "Nose type: " << monsterOne.nose << endl;
    cout << "Mouth type: " << monsterOne.mouth << endl;
    cout << endl;   
    
    /*additional endlines were added after each monster in order for the output
    to improve output readability and overall appearance*/
    
    cout << "Monster name: " << monsterTwo.name << endl;
    cout << "Head type: " << monsterTwo.head << endl;
    cout << "Eye type: " << monsterTwo.eyes << endl;
    cout << "Ear type: " << monsterTwo.ears << endl;
    cout << "Nose type: " << monsterTwo.nose << endl;
    cout << "Mouth type: " << monsterTwo.mouth << endl;
    cout << endl;
    
    cout << "Monster name: " << monsterThree.name << endl;
    cout << "Head type: " << monsterThree.head << endl;
    cout << "Eye type: " << monsterThree.eyes << endl;
    cout << "Ear type: " << monsterThree.ears << endl;
    cout << "Nose type: " << monsterThree.nose << endl;
    cout << "Mouth type: " << monsterThree.mouth << endl;
    cout << endl;
    
    cout << "Monster name: " << monsterFour.name << endl;
    cout << "Head type: " << monsterFour.head << endl;
    cout << "Eye type: " << monsterFour.eyes << endl;
    cout << "Ear type: " << monsterFour.ears << endl;
    cout << "Nose type: " << monsterFour.nose << endl;
    cout << "Mouth type: " << monsterFour.mouth << endl;
    
    return 0;
}