#include <iostream>

using namespace std;

void printMenu(int& choice) {
    //Adds an initial choice for the user to select their wanted function.
    cout << "Welcome to my program, please select a function to perform: " << endl;
    cout << "1. Addition " << endl;
    cout << "2. Subtraction " << endl;
    cout << "3. Multiplication " << endl;
    cout << "4. Division " << endl;

    //Allows user to input their choice, selected via number value from the choices above.
    cout << "\nYour Selection: ";
    cin >> choice;
}
void getChoices(float& A, float& B) {
    //Gets the value for A from user input
    cout << "Please enter the first value: ";
    cin >> A;
    cout << endl;

    //Gets the value for B from user input
    cout << "Please enter the second value: ";
    cin >> B;
    cout << endl;
}
void firstChoice(float& A, float& B) {
    //Provides the Addition function when chosen.
    cout << "Your answer is: " << endl;
    cout << A << " + " << B << " = " << float(A + B) << endl;
}
void secondChoice(float& A, float& B) {
    //Provides the Subtraction function when chosen.
    cout << "Your answer is: " << endl;
    cout << A << " - " << B << " = " << float(A - B) << endl;
}
void thirdChoice(float& A, float& B) {
    //Provides the Multiplication function when chosen.
    cout << "Your answer is: " << endl;
    cout << A << " * " << B << " = " << float(A*B) << endl;
}
void fourthChoice(float& A, float& B) {
    //Provides the Division function when chosen.
    cout << "Your answer is: " << endl;
    cout << A << " / " << B << " = " << float(A/B) << endl;
}
int main(){
    //Determines the value/input types of the variables.
    int choice;
    float A;
    float B;

    //Provides the choice selector as a part of the main function of the program.
    printMenu(choice);
    getChoices(A, B);

    //Determines the outcome based on the value input for the "choice" section of the program.
    if (choice == 1) {
        firstChoice(A, B);
    }
    if (choice == 2) {
        secondChoice(A, B);
    }
    if (choice == 3) {
        thirdChoice(A, B);
    }
    if (choice == 4) {
        fourthChoice(A, B);
    }

    //Ends the code.
    return 0;
}