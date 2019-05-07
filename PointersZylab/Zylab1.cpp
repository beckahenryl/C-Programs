#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    std::string inputString;
    std::string findComma = ",";
    std::vector<string> vect;

    while (true){
            cout << "Enter input string:" << endl;
            getline(cin, inputString);
            if (inputString != "q"){
                std::size_t found = inputString.find(findComma);
                if (found!=std::string::npos){
                        //remove the space
                        inputString.erase(std::remove(inputString.begin(), inputString.end(), ' '), inputString.end());
                        std::stringstream ss(inputString);
                        std::string substring;

                        while(getline(ss, substring, ',')){
                             vect.push_back(substring);

                        }
                        cout << "First word: " << vect[0] << endl;
                        cout << "Second word: " << vect[1] << endl;
                        cout << endl;
                        vect.erase(vect.begin(), vect.begin()+2);
                }

                else{
                    cout << "Error: No comma in string." << endl << endl;
                    }

                }
            else{
                    break;
                }
            }


             return 0;
}
