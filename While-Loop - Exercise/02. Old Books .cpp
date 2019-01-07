#include <iostream>
#include <string>

using namespace std;

int main()
{   string theBook, booksForCheck;
    int numberOfBooks;
    int counter = 0;
    getline(cin, theBook);
    bool isFound = false;
    cin >> numberOfBooks;
    cin.ignore();
    getline(cin, booksForCheck);

    while(counter < numberOfBooks){

        if (booksForCheck == theBook){
                isFound = true;
            break;
        }
        getline(cin, booksForCheck);

        counter ++;
    }
    if (isFound){
        cout << "You checked " << counter << " books and found it."  << endl;
    }else{
        cout << "The book you search is not here!" << endl;
        cout << "You checked " << counter << " books." << endl;
    }



    return 0;
}

