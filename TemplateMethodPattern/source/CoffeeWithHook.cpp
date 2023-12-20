#include "CoffeeWithHook.h"

#include <iostream>

using namespace std;

void CoffeeWithHook::brew() {
    cout << "Drippping Coffee through filter" << endl;
}

void CoffeeWithHook::addCondiments() {
    cout << "Adding Sugar and Milk" << endl;
}

bool CoffeeWithHook::customerWantsCondiments() {
    string answer = getUserInput();

    return (tolower(answer[0]) == 'y');
}

string CoffeeWithHook::getUserInput() {
    string answer = "";

    cout << "Would you like milk and sugar with your coffee? [(y)es/(n)o]" << endl;
    cin >> answer;

    return answer.length() > 0 ? answer : "no";
}