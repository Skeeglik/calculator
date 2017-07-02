#include <QString> // QString

#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator {
private:
    //Numbers the calculator is operating on
    double firstNumber, secondNumber;
    //Whether the second number has been defined or not
    bool secondNumberDefined;
    //Operation being applied to the numbers ('+', '-', '*', '/', 0)
    char operation;
    //The string that is being displayed
    QString display;
    //Sets whether the first or the second number is being edited
    int focus;

    //Updates display string with numbers and operation
    void updateDisplay();
    //Checks if operation is valid
    bool isOperationValid(char ch);
    //Sets focus to the second number
    void focusOnSecondNumber();
public:
    Calculator();
    //Appends a digit to the number that is in focus
    void enterDigit(char ch);
    //Clears numbers and operation
    void clear();
    //Returns string to be displayed in the calculator widget
    QString getDisplay() const;
    //Sets the operation
    void setOperation(char ch);
    //Applies operation to the numbers and stores result in the first number
    void applyOperation();
};

#endif // CALCULATOR_H
