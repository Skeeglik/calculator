#include "calculator.h"

#include <QMessageBox>

void Calculator::updateDisplay() {

    display.clear();
    display.append(QString::number(firstNumber));

    if (operation != 0) {
        display.append(" ");
        display.append(operation);
        display.append(" ");
    }

    if (secondNumberDefined) {
        display.append(QString::number(secondNumber));
    }
}

bool Calculator::isOperationValid(char ch) {
    switch (ch) {
    case '+': break;
    case '-': break;
    case '*': break;
    case '/': break;
    default: return false;
    }
    return true;
}

void Calculator::focusOnSecondNumber() {
    focus = 2;
}

Calculator::Calculator() {
    clear();
}

void Calculator::enterDigit(char ch) {
    int digit = ch-'0';
    double* target;
    if (focus == 1) target = &firstNumber;
    else {
        target = &secondNumber;
        secondNumberDefined = true;
    }

    *target = *target * 10 + digit;

    updateDisplay();
}

void Calculator::clear() {
    firstNumber = 0;
    secondNumber = 0;
    secondNumberDefined = false;
    operation = 0;
    focus = 1;
    updateDisplay();
}

QString Calculator::getDisplay() const {
    return display;
}

void Calculator::setOperation(char ch) {
    if (!isOperationValid(ch)) {//invalid operation
        QMessageBox::critical(NULL, "Error", "Operation is invalid");
        return;
    }

    //Apply previous operation and set a new one
    if (secondNumberDefined) {
        applyOperation();
    }

    operation = ch;
    focusOnSecondNumber();
    updateDisplay();
}

void Calculator::applyOperation() {
    if (secondNumberDefined) {
        switch (operation) {
        case '+': firstNumber += secondNumber; break;
        case '-': firstNumber -= secondNumber; break;
        case '*': firstNumber *= secondNumber; break;
        case '/': firstNumber /= secondNumber; break;
        }
        secondNumber = 0;
        secondNumberDefined = false;
    }
    operation = 0;
    updateDisplay();
}
