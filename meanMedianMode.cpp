#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>


using namespace std;

/*
10
64630 11735 14216 99233 14470 4978 73429 38120 51135 67060

43900.6
44627.5
4978
*/

int main() {
    int n;
    cin >> n;
    vector<int> mintys(n);
    for (int len_i = 0; len_i < n; len_i++) {
        cin >> mintys[len_i];
    }
    double median = 0;
    double mean = 0;
    int mode = 0;

    sort(mintys.begin(), mintys.end());


    for (int len_i ; len_i < n ; len_i++ ){
        mean += (mintys[len_i]);
    }

    if (n % 2 == 0){
        cout << mintys[n/2] << "," << mintys[(n/2)-1] << endl;
        double med1 = mintys[n/2];
        double med2 = mintys[(n/2)-1];
        cout << med1 << "," << med2 << endl;
        median = ( med1 + med2 ) / 2;
    }
    if (n % 2 != 0){
        median = ((mintys[(n-1)/2]));
    }
    vector<int> mode_v(0)
    for ( int len_i ; len_i < n ; len_i++ ){
        for ( int len_j ; len_j < n ; len_j++){

        }
    }

    cout << (mean / n) << endl;
    cout << median << endl;
    cout << mode << endl;


    return(0);
}