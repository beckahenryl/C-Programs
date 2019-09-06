#include <iostream>
#include <vector>
#include <string>
#include <sstream>
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
 *  For this code, I had trouble converting the values back to an integer. I will leave
 *  it as is until I am able to figure this out. I will work another section
 *  that checks whether the value is a 32-bit integer when I have figure the above out
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

    //convert the char vector to string

    ostringstream out;

    for (char c: placeValues){
        out << c;
    }

    string s(out.str());

    cout << s;

    return 0;

}

/*
int CheckBit(int ReverseInteger){

}
 */

int main() {

    int functionInteger = ReverseInteger(1020);

    return 0;
}
