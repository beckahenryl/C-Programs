#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/* The program below improves upon the original two sum in that it works for any value and any size array*/

int main(){


    int target, sum, values;
    unsigned int sizeArray;

	cout << "Target: ";
	cin >> target;

	cout << "Size of Array: ";
	cin >> sizeArray;

	cout << "Values in Array: " << endl;

	vector <int> arry;

	//get values from the user and add to array
  
	do{
        cin >> values;
        arry.push_back(values);
	}
	while (arry.size() < sizeArray);

    sum = 0;

	for (int i = 0; i < sizeArray; i++){
		if (arry[i] + arry[i+1] == target){
		    sum = arry[i] + arry[i+1];
			
			//return indices of arry
			std::vector<int>::iterator itr1 = std::find(arry.begin(), arry.end(), arry[i]);
			std::vector<int>::iterator itr2 = std::find(arry.begin(), arry.end(), arry[i+1]);
			cout << std::distance(arry.begin(), itr1) << " " << std::distance(arry.begin(), itr2);


		}
	}


	return 0;
}
