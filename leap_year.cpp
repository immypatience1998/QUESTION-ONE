#include <iostream>
using namespace std;

bool is_leap_year(unsigned int Y) {
    if (Y % 400 == 0) {
        return true; 
    } else if (Y % 100 == 0) {
        return false; 
    } else if (Y % 4 == 0) {
        return true; 
    } else {
        return false; 
    }
}

int main() {
    
    cout << is_leap_year(1600) << endl; 
    cout << is_leap_year(1700) << endl; 
    cout << is_leap_year(2004) << endl; 
    cout << is_leap_year(2021) << endl; 

    return 0;
}

