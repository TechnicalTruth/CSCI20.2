#include <iostream>
#include <string>
#include <fstream>

/*using std :: cin;
using std :: cout;
using std :: endl;
using std :: string;*/
using namespace std;

int main(){
    
    string studName;
    string studLstName;
    string fileName;
    int numSemesters;
    double ttlUnits;
    double currGpa;
    char studGrades[99];
    double studGpa[99];
    
     ifstream fin;
    ofstream fout;
    
    cout << "Enter file name: ";
    cin >> fileName;
    
    fin.open(fileName);
    if(!fin.is_open()){
        cout << "Could not open desired file: " << fileName << endl;
        return 1;
    }
    fin.open("output.html");

    if(!fin.is_open()){
        
        cout << "Could not open designated file 'output.html'" << endl;
        return 1;
    }    
    
    fin >> studName;
    fin >> studLstName;
    fin >> ttlUnits;
    fin >> currGpa;
    fin >> numSemesters;
    
  //html style output
    fout << "<title>" << "Student Name: " << studName << "</title>" << endl;
    fout << "Total Units: " << ttlUnits << endl;
    fout << "<h1>" << "GPA: " << currGpa << "</h1>" << endl;
    fout << "<h1>" << "Number of semesters: " << numSemesters << "</h1>" << endl;
    
    
    
    
    
    return 0;
}