//
// Created by Mike Schaff on 4/19/17.
//

#include <iostream>
#include <iomanip>

using namespace std;


// 11:05:45PM

int main(){

    string time = "12:45:54PM";

    int hour = stoi( time.substr(0,2));
    int min = stoi( time.substr(3,5));
    int sec = stoi( time.substr(6,8));
    string demarc = time.substr(8,11);

    if ((( demarc == "AM") || ( demarc == "PM")) && ( hour == 12 )){
        hour = 0;
    }

    if ( demarc == "PM"){
        hour += 12;
    }
    cout << setfill('0') << setw(2) << hour << ":" << setfill('0') << setw(2) << min << ":" << setfill('0') << setw(2) <<sec << endl;

    return (0);

}
