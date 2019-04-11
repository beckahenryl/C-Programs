#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    string book_title_strs[] =
    {
        "Twilight",
        "A Ghost in the Shell",
        "A very hungry caterpillar",
        "Catcher in the Rye",
        "Pride, Prejudice and Zombies",
        "Man in the Moon",
        "Goodnight Moon",
        "Goodnight Lab",
        "Knuffle Bunny, a cautionary tale.",
        "Eat, Pray, Munch",
        "Gray's Anatomy"
    };
    int num_books = sizeof(book_title_strs) / sizeof(book_title_strs[0]);

    // create an array of booleans to track the books checked out
    bool track_books_checked_out [2];
    // create and initialize your vector of book_titles using book_title_strs
     vector <string> book_titles( book_title_strs, book_title_strs + num_books);

    int selection, i;
    string checkout, returnBook;

    cout << "Welcome to the library. ";
    do
    {
        cout <<  "What would you like to do?" << endl;
        cout << "\n\t1) List all books" << endl;
        cout << "\t2) List available books" << endl;
        cout << "\t3) Checkout a book" << endl;
        cout << "\t4) Return a book" << endl;
        cout << "\t5) Exit\n" << endl;

        cin >>  selection;

        switch(selection)
        {
        case 1:
            // list all the books in the catalog
            for (i = 0; i < num_books; ++i){
                cout << "\t" << book_title_strs[i] << endl;
            }
            break;
        case 2:
            // list all the available books
            for (i = 0; i < book_titles.size(); ++i){
                cout << "\t" << book_titles.at(i) << endl;
            }
            break;
        case 3:
            // checkout a book
            cout << "Enter a book to checkout" << endl;
            cin.ignore();
            getline(cin, checkout);

            for (i = 0; i < num_books; i++){
                if (checkout == book_title_strs[i]){
                    if (checkout == book_titles.at(i)){
                      book_titles.erase(book_titles.begin() + i);
                    track_books_checked_out[0] = true;
                    cout << checkout << " is due back in 14 days." << endl;
                    break;
                    }
                    else if (checkout != book_titles.at(i)) {
                       track_books_checked_out[0] = false;
                       cout << checkout <<  " is not available." << endl;
                      break;
                    }
                }
                else if (checkout != book_title_strs[i]) {
                        track_books_checked_out[0] == false;
                        cout << checkout << " is not part of the catalog." << endl;
                        break;
                    }
            }
            break;
        case 4:
            // return a book
            cout << "Enter the name of the returning book" << endl;
            cin.ignore();
            getline(cin, returnBook);
            for (i = 0; i < num_books; i++){
                    if (returnBook != book_title_strs[i]){
                        if (returnBook != book_titles.at(i)){
                        cout << returnBook << " is not part of the catalog." << endl;
                        break;
                    }
                }
                else if (returnBook == book_title_strs[i]){
                        if (returnBook != book_titles.at(i)){
                            book_titles.insert(book_titles.begin()+i, returnBook);
                            cout << returnBook << " has been returned." << endl;
                            break;
                            }
                        else if (returnBook == book_titles.at(i)){
                                cout << returnBook << " is not checked out." << endl;
                                break;
                        }
                }
            }

            break;
        case 5:
            exit(0);
            break;
        default:
            cout << "You entered an invalid selection.";
            break;
        }

        cout << "\nConintue? (y/n)" << endl;
        char cont;
        cin >> cont;
        if(cont == 'n')
        {
            selection = 5;
        }

    } while( selection != 5);
    return 0;
}
