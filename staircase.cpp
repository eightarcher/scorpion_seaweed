#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;

    for ( int k = 1 ; k <= n ; k++ ){
        for ( int i = 0 ; i < n - k ; i++ ){
            cout << " ";
        }
        for ( int j = 1 ; j <= k ; j++ ) {
            cout << "#";
        }
        cout << endl;


    }


    return 0;
}

