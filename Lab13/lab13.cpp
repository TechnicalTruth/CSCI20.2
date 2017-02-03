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
    
    

    
    cout << "Welcome to Population Calculation, meeting your population estimation needs since 2017!" << endl; 
    
    cout << "Please input how many years ahead would you like to see: " << endl;
    cin >> yearsAhead;
    
    cout << "You chose to estimate the U.S. population " << yearsAhead << " years in the future." << endl;
    
    yearChosen = 2017 + yearsAhead;
    popGrowth = 2102400 * yearsAhead;                    // 2,102,400 comes from 4(net gain of one person every 15 sec.)*60*24*365
    estPopulation = currPopulation + popGrowth;
    
    
    cout << "This means that in the year " << yearChosen << " the population is: ~" << estPopulation << " in the United States." << endl;
    
    return 0;
    
    //MC125 PROGRAMMING CLUB?
}