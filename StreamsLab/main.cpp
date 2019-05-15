#include <iostream>
#include "utils.hpp"
#include "utils.cpp"

using namespace std;

int main()
{
    string filename;
    cout << "Enter the name of the data file: " << endl;
    getline(cin, filename);
    string output;
    getAndConcatCapitols(filename, output);

    /*

    if(getAndConcatCapitols(filename, output))
    {
        //cout << endl << output << endl;
    }
    */
    return 0;
}
