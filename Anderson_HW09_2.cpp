//Filename: HW09_2
//Description: The program should display the contents of the file on the screen.
//Author: Renee Anderson
//Date Modified:10/17/24


#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;


int main()
{
    ifstream inFile;
    char inName[200];
    string inputLine = " ";
    int lineNumber = 1;

    cout << "Enter the input file names: ";
    cin >> inName;
    inFile.open(inName);
    if (!inFile)
    {
        cout << "error opening file" << inName << endl;
        return 22;
    }

    while (!inFile.eof())
    {
       getline(inFile, inputLine, '\n');
       cout << setw(4) << right << lineNumber 
            << ": " << inputLine << endl;
        lineNumber++;
    }

    inFile.close();

    return 0;
}