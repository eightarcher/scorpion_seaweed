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
    int n;
    cin >> n;
    vector<int> height(n);
    for(int height_i = 0;height_i < n;height_i++){
        cin >> height[height_i];
    }

    int candles = 0;
    int brick = 0;
    //sort (height.begin(), height.end()); // sorts ascending order
    sort (height.begin(), height.end(), greater<int>()); //sorts descending order
    /*
    for (int lead = 0 ; lead < n ; lead++){
        cout << height[lead] << " ,";
    }
    */
    //for (int brick = 0 ; height[brick] == height[0] ; brick++){
    //    candles += brick;
    //}

    while (height[brick] == height[0]){
        candles += 1;
        brick++;
    }

    cout << candles;

    return 0;
}
