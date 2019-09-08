#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <cstdlib>

using namespace std;

/*Reverse the 32 bit integer
 * check if the integer is 32 bits after reversing. If it is not, return 0
 * 123 -> 321
 * -123 -> -321
 *  120 -> 21
 *  place integer in an array but first convert to a string
 *  starting from the last element in the array, place in that order
 *  array = [1,2,3] -> [3,2,1]
 *  check the array for trailing zeros or check the integer for zeros
 *  if it has the trailing zero, then remove it from there
 *  if it has a negative sign, then place it at the beginning of the array and then reverse as normal
 *
 *  I was able to fix a few issues that the code below was having and ensure that I am checking for overflows on a 32-bit integer
 * */

int ReverseInteger(int x){

    string integerToString;
    integerToString = to_string(x);
    vector <char> placeValues;

    //if a value at the end has a zero, then make sure to not include it in the solution

    integerToString.erase ( integerToString.find_last_not_of('0') + 1, std::string::npos );

    //place the negative sign at the beginning of the vector

    for (char i = integerToString.size(); i >= 0; i--){
        if (integerToString[i] == '-'){
            placeValues.push_back(integerToString[i]);
        }
    }

    //create another loop to place the remaining values into the vector that
    //are not a negative sign
    for (char i = integerToString.size(); i >= 0; i--){
        if (integerToString[i] != '-'){
            placeValues.push_back(integerToString[i]);
        }
    }

    //remove the space at position 1
    placeValues.erase(placeValues.begin()+1);


    //convert the char vector to string

    ostringstream out;

    for (char c: placeValues){
        out << c;
    }

    string s(out.str());

    //convert the string into an integer
    stringstream ss(s);

    int i = 0;

    ss >> i;

    //check if the integer is 32 bits

    int absoluteVal = abs(i);

    if (absoluteVal >= 2147483647){
        return -1;
    }
    else{
        return i;
    }

}



int main() {

    int functionInteger = ReverseInteger(-1020);

    cout << functionInteger;

    return 0;
}
