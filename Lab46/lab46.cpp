#include <iostream>
#include <string>
#include <fstream>

using std :: cin;
using std :: cout;
using std :: endl;
using std :: string;

int main(){
    
    string studName;
    double numSemesters;
    double ttlUnits;
    double currGpa;
    int i = 0;
    char studGrades[99];
    double studGpa[99];
    
    cout << "Enter file name: ";
    cin >> fileName;
    
    fin.open(fileName);
    fin.open("report.html");

    if(!fin.eof()){
        
        cout << "Could not open designated file: " << fileName << endl;
        return 1;
    }    
    
    cout << "Student Information: " << endl << endl;
    
    getline(fin, studName);
    fin >> ttlUnits;
    fin >> currGpa;
    fin >> numSemesters;
    
    
    for(i = 0; i < 99; ++i){
        
        fin >> studGrades[i];
        fin >> studGpa[i];
        
        if(studGrades[i] == ' '){
            
            i = i + 18;
        }
    }
    
    fout << studName << endl;
    fout << ttlUnits << " " << currGpa << endl;
    fout << numSemesters << endl;
    
    for(i = 0; i < 99; ++i){
        
    }
    
    
    
    
    
    return 0;
}