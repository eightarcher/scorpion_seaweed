//
// Created by Mike Schaff on 4/20/17.
//

#include <iostream>

using namespace std;

int main(){

    int n = 0;
    cin >> n;

    if( n % 2 != 0){
        cout << "Weird" << endl;
    }
    if(( n % 2 == 0) && (( n >= 2 ) && ( n <= 5))){
        cout << "Not Weird" << endl;
    }
    if(( n % 2 == 0 ) && (( n >= 6 ) && ( n <= 20))){
        cout << "Weird" << endl;
    }
    if( (n % 2 == 0) && ( n > 20)) {
        cout << "Not Weird" << endl;
    }

    return (0);
}
