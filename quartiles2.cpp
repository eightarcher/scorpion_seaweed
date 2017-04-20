#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;






int main(){

    int vsize = 0;
    cin >> vsize;

    vector<int> victor(vsize);
    for ( int i = 0 ; i < vsize ; i++){
        cin >> victor[i];
    }
    sort (victor.begin(), victor.end());

    int q1a = (vsize/4-1);
    int q1b = (vsize/4);
    int q2a = (vsize/2-1);
    int q2b = (vsize/2);
    int q3a = (vsize/2 + vsize/4);
    int q3b = (vsize/2 + vsize/4 + 1);

    int Q1a = ((victor[q1a] + victor[q1b])/2);
    int Q1b = victor[q1b];
    int Q3a = ((victor[q3a] + victor[q3b])/2);
    int Q3b = victor[q3a];
    int Q2a = ((victor[q2a] + victor[q2b])/2);
    int Q2b = victor[q2b];

    if( vsize % 2 == 0){
        cout << Q1b << endl;
    }
    else {
        cout << Q1a << endl;
    }

    if( vsize % 2 == 0){
        cout << Q2a << endl;
    }
    else {
        cout << Q2b << endl;
    }

    if( vsize % 2 == 0){
        cout << Q3b << endl;
    }
    else {
        cout << Q3a << endl;
    }


    return(0);
}


/*
9
3 7 8 5 12 14 21 13 18

18
1 2 5 7 9 12 4 8 10 4 13 27 3 12 17 9 7 6

10
3 7 8 5 12 14 21 15 18 14
7
13
15

12
4 17 7 14 18 12 3 16 10 4 4 12
4
11
15

 */