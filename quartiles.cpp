//
// Created by Mike Schaff on 4/20/17.
//
#include <iostream>
#include <vector>

using namespace std;

int median(vector<int> v);

int main(){

    int size = 0;
    cin >> size;
    vector<int> qrt2(size);
    for ( int i = 0 ; i < size ; i++ ){
        cin >> qrt2[i];
    }
    sort (qrt2.begin(),qrt2.end());
    for (int brick = 0 ; brick < size ; brick++ ){
        cout << qrt2[brick] << ",";
    }
    cout << endl;

    if (size % 2 == 0){


        vector<int>::const_iterator first1 = qrt2.begin();
        vector<int>::const_iterator last1 = qrt2.begin() + (size/2-1);
        vector<int> qrt1 (first1, last1);

        vector<int>::const_iterator first2 = qrt2.begin() + (size/2+1);
        vector<int>::const_iterator last2 = qrt2.end();
        vector<int> qrt3 (first2, last2);

        cout << median(qrt1) << endl;
        cout << median(qrt2) << endl;
        cout << median(qrt3) << endl;
    }
    else {

        vector<int>::const_iterator first1 = qrt2.begin();
        vector<int>::const_iterator last1 = (qrt2.begin() + (size/2));
        vector<int> qrt1 (first1, last1);

        vector<int>::const_iterator first2 = (qrt2.begin() + (size/2+1));
        vector<int>::const_iterator last2 = qrt2.end();
        vector<int> qrt3 (first2, last2);

        cout << median(qrt1) << endl;
        cout << median(qrt2) << endl;
        cout << median(qrt3) << endl;
    }
    return(0);
}
int median(vector<int>V){

    int siz = V.size();
    int med = 0;

    if (siz % 2 == 0){
        med = ((V[siz/2]+V[(siz/2)-1])/2);
    }
    else med = (V[siz/2]);

    return(med);
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


 */