#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std ;
int main() {
    // Design of menu to choose from
    cout << "A) Roll Dice?" << endl << "B) exit" << endl ;
    char menu;
    cin >> menu;
    // Validating input
    while (toupper(menu) != 'A' and toupper(menu) != 'B'){
        cout << "Invalid Input !!" << endl ;
        cout << "A) Roll Dice?" << endl << "B) exit" << endl ;
        cin >> menu;
    }
    // Loop the program until user choose to exit
    while (toupper(menu) == 'A') {
        // Generating random numbers of the dice
        const short max_value = 6;
        const short min_value = 1;

        srand(time(nullptr));
        int random_number = rand() % (max_value - min_value + 1)+ min_value;
        int random_number2 = rand() % (max_value - min_value + 1)+ min_value;

        cout << random_number << endl ;
        cout << random_number2 << endl ;

        cout << "A) Roll Dice?" << endl << "B) exit" << endl ;
        cin >> menu;
        // Re-validating input
        while (toupper(menu) != 'A' and toupper(menu) != 'B'){
            cout << "Invalid Input !!" << endl ;
            cout << "A) Roll Dice?" << endl << "B) exit" << endl ;
            cin >> menu;
    }   }


    return 0;
}