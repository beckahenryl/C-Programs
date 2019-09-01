#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*

command: gcc TwoSum.cpp -lstdc++ -o main.o
arry = [2, 7, 11, 15]
target = 9
return = [0, 1] because 2+7=9

store array as a vector, the target is an integer
loop through each element in the array and take two
elements and check if the addition of their values
is equal to the target

starting point first element
index 0 to 3
second element
index 0 to 3
third element
index 0 to 3
fourth element
index 0 to 3

if it is, stop the loop and return the indices
if it is not, continue to compare each element
*/

int main(){

	int target, sum;


	cout << "Target: ";
	cin >> target;

	int arry [] = {2,7,11,15};

	sum = 0;

	for (int i = 0; i < 4; i++){
		if (arry[i] + arry[i+1] == target){
		    sum = arry[i] + arry[i+1];
			cout << sum << endl;
			
			//return the indices of the array
			auto index1 = std::find(arry, arry+4, arry[i]);
			auto index2 = std::find(arry, arry+4, arry[i+1]);
			cout << index1-arry << " " << index2-arry;
		}
	}

	return 0;
}
