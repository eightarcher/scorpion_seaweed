#include <vector>
#include <iostream>
#include <iomanip>

using namespace std;
using namespace ;


vector<int> slapChop( bool dir , vector<int> &slappy){
    int v = (slappy.size()/2+1);
    vector<int> sonOfSlappy();
    if (dir == true){ // chop forward
        for (vector<int>::iterator it = slappy.begin() ; it <= (slappy.begin() + v) ; ++it){
            sonOfSlappy.push_back (it);
            return (sonOfSlappy());
        }

    }
    if (dir == false){ // chop in reverse
        for (vector<int>::iterator it = slappy.rbegin() ; it <= (slappy.rbegin() + v) ; ++it){
            sonOfSlappy.push_back (it);
            sort (sonOfSlappy.begin ,sonOfSlappy.end);
            return (sonOfSlappy());
        }

    }
}


int main(){



}