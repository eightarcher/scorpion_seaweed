#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    long int a;
    long int b;
    long int c;
    long int d;
    long int e;
    cin >> a >> b >> c >> d >> e;
    long min = 0;
    long max = 0;

    long int myints[] = {a,b,c,d,e};

    sort (myints, myints + 5);
    for (int i = 0 ; i < 5 ; i++){
        cout << myints[i] << ",";
    }
    for (int j = 0 ; j < 4 ; j++){
        min += myints[j];
        cout << min << endl;
    }
    for (int k = 1 ; k < 5 ; k++){
        max += myints[k];
        cout << max << endl;
    }
    cout << endl;
    cout << min << " " << max << endl;
    cout << max << endl;


    return 0;
}
