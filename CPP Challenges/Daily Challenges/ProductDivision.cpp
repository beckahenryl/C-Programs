#include <iostream>
#include <vector>
using namespace std;

int main() {
    unsigned int sizeArray;
    int valuesInArray, product;

    vector <int> array;
    vector <int> resultArray;
    vector <int> newArray;

    cout << "size of array: ";
    cin >> sizeArray;

    //get all the values in the array
    do {
        cin >> valuesInArray;
        array.push_back(valuesInArray);
    }
    while(array.size() < sizeArray);

    product = 1;

    //product of all values in the array
    for (int i = 0; i < sizeArray; i++){
        if (array[i] > 0) {
            product *= array[i];
        }
    }

    //create a separate array that has the product, equaling the size
    //of the array

    for (int i = 0; i < sizeArray; i++){
        resultArray.push_back(product);
    }

    //divide each value in the result (product) array by the original
    //and place in a new array
    for (int i = 0; i < sizeArray; i++){
        newArray.push_back(resultArray[i] /= array[i]);
    }


    //display the results
    for (int i = 0; i < sizeArray; i++){
        cout << newArray[i] << endl;
    }


    return 0;
}
