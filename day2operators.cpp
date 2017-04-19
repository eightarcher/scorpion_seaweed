/*
12.00
20
8
Sample Output

The total meal cost is 15 dollars.
 */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    double mealCost = 0;
    double tipPercent = 0;
    double taxPercent = 0;
    double totalMC = 0;

    cin >> mealCost;
    cin >> tipPercent;
    cin >> taxPercent;

    cout << tipPercent / 100 << endl;
    cout << taxPercent / 100 << endl;


    totalMC = (mealCost + (tipPercent/100 * mealCost) + (taxPercent/100 * mealCost));

    cout << round(totalMC) << endl;

    cout << "The total meal cost is " <<
                                                 round (mealCost + (tipPercent/100 * mealCost) + (taxPercent/100 * mealCost))
         << " dollars." << endl;


    return 0;
}

