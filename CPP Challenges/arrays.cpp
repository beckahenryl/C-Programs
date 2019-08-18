#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int num_integers, integers;

    cin >> num_integers;

    vector <int> arry;

    while(cin >> integers){
        arry.push_back(integers); //add the values to the array
    }

    for (int i = num_integers-1; i >= 0; i--){ //decrement
         cout << arry[i] << " ";
    }
   
    return 0;
}
