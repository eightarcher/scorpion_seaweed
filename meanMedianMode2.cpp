#include <iostream>
#include <algorithm>
#include <vector>
//10
//64630 11735 14216 99233 14470 4978 73429 38120 51135 67060

using namespace std;

double mean(int n, vector<int> arr);
double median(int n, vector<int> arr);
int mode(int n, vector<int> arr);

int main(){
    int n;
    cin >> n;
    vector<int> mint(n);
    for (int len_i = 0 ; len_i < n ; len_i++) {
        cin >> mint[len_i];
    }
    sort (mint.begin(), mint.end());

    cout << mean(n, mint) << endl;
    cout << median(n, mint) << endl;
    cout << mode(n, mint) << endl;

    return(0);
}

double mean(int a, vector<int>b){

    double meanval = 0;

    for (int len_i = 0 ; len_i < a ; len_i++) {
        meanval += b[len_i];
    }

    return (meanval/a);
}

double median(int a, vector<int>b){

    double median = 0;

    if ( a % 2 == 0){
        double med1 = b[a/2];
        double med2 = b[(a/2)-1];

        median = (med1 + med2)/2;
    }
    else{
        median = b[a/2];
    }

    return (median);
}

int mode(int a, vector<int>b){

    int hinum = 0;
    int curnum = 0;
    int hict = 0;
    int curct = 0;

    for ( int i = a ; i >= 0 ; i-- ){
        curnum = b[i];
        curct = 0;
        //cout << curnum << endl;
        //cout << b[i] << endl;
        for ( int j = a ; j >= 0 ; j-- ){
            if (curnum == b[j]){
                curct += 1;
                //cout << b[j] << endl;
                cout << curct << endl;
            }
        }
        if (hict <= curct){
            hict = curct;
            hinum = curnum;
            //cout << hict << ";" << hinum << endl;
        }
    }


    return(hinum);
}
