//Assistance by buddy

#include <iostream>

using namespace std;

int main()

{

    int userSize, timesRemaining, i, k, position;

    while (userSize){

        cout << "Enter the size of the square:" << endl;

        cin >> userSize;

        cout << endl;

        // Create a copy of the initial size

        // Keep track of how many times we did the loop
        for (timesRemaining = userSize; timesRemaining > 0; timesRemaining--){

                // Count up to the remaining
                for (i = timesRemaining; i <= userSize; i++){

                    cout << i << "\t";
                }

                // Get position in line
                // To account for difference between index & real position
                int position = userSize - timesRemaining + 1;

                for (i = 1; position < userSize; i++){
                    cout << userSize - i << "\t";
                    position++;
                }

                cout << endl;
        }

        cout << endl;

    }

    return 0;

}
