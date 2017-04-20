//
// Created by Mike Schaff on 4/20/17.
//

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> values(n);
    vector<int> weights(n);

    for ( int i = 0 ; i < n ; i++ ){
        cin >> values[i];
    }
    for ( int i = 0 ; i < n ; i++ ){
        cin >> weights[i];
    }
    double valSum = 0;
    double wgtSum = 0;

    for ( int i = 0 ; i < n ; i++ ){
        valSum += values[i]*weights[i];
        wgtSum += weights[i];
    }
    double wgtMean;
    wgtMean = valSum / wgtSum;

    cout << setprecision(1) << fixed << wgtMean << endl;
    return (0);
}
/*
5
10 40 30 50 20
1 2 3 4 5

10
10 40 30 50 20 10 40 30 50 20
1 2 3 4 5 6 7 8 9 10
31.1
*/