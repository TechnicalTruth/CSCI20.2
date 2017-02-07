//Juan Lemus
//Lab Description: Calculating U.S. population in 'x' years
//Date: 2/2/17

#include <iostream>
using namespace std;

int main()
{
    
    int yearsAhead = 0;
    int estPopulation = 0;
    int yearChosen = 0;
    int popGrowth = 0;
    int currPopulation = 324473878;
    int bbyBirthrate = 0;
    
    

    
    cout << "Welcome to Population Calculation, meeting your population estimation needs since 2017!" << endl;
    
    cout << "Please enter the current U.S. population: "<< endl;
    cin >> currPopulation;
    
    cout << "Please enter the current U.S. growthrate (per minute): ";
    cin >> bbyBirthrate;
    
    cout << "Please input how many years ahead would you like to see?" << endl;
    cin >> yearsAhead;
    
    yearChosen = 2017 + yearsAhead;
    popGrowth = bbyBirthrate * 525600 * yearsAhead;                    // 525600 comes from 60*60*24*365 
    estPopulation = currPopulation + popGrowth;
    
    cout << "You chose to estimate the U.S. population " << yearsAhead << " years in the future." << endl;
    cout << "This means that in the year " << yearChosen << " the population is: ~" << estPopulation << " in the United States." << endl;
    
    return 0;
}