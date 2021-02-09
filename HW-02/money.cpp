/*
Enigma Swan Adams
CS 201 Homework 02: money.cpp
2/7/2021

Does as decribed in the addional program 1 
section of the homework
**********************************************/


#include "money.h"


int money() {
    // makes coresnding vectors for the different things (coins, how many they have, how much each coin is worth 
    vector<int> moneyAmounts(5);
    vector<int> moneyVals{ 1,5,10,25,50 };
    int totalInPennies = 0;
    vector <string> moneyTypes{ "pennies", "nickels", "dimes", "quarters", "half-dollar coins" };

    // lops through the different coins asking how many the person has and string it in the moneyAmounts vector
    for (int i = 0; i < moneyTypes.size(); i++) {
        cout << "How many " << moneyTypes.at(i) << " do you have? ";
        cin >> moneyAmounts.at(i);
        cout << endl;
    }

    //loops trhough again and prints how many of each coin the people have, and also totals the amount in pennies 
    for (int j = 0; j < moneyTypes.size(); j++) {
        string moneyType = moneyTypes.at(j);
        totalInPennies += moneyVals.at(j) * moneyAmounts.at(j);

        //adjust to singular if the person only has one of a certain type of coin
        if (moneyAmounts.at(j) == 1 && moneyTypes.at(j) != "pennies") {
            moneyType = moneyType.erase(moneyType.size() - 1);

            moneyTypes.at(j) = moneyType;
        }
        else if (moneyAmounts.at(j) == 1) {
            moneyType = "penny";
            moneyTypes.at(j) = moneyType;
        }

        cout << "You have " << moneyAmounts.at(j) << " " << moneyTypes.at(j) << endl;
    }

    // tells the user how much total money the person has in dollars. 
    cout << "The value of all your coins is $";
    printf("%.2f", totalInPennies / 100.0);

    return 0;
}
