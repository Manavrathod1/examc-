//write a proggram to creat class to read time in second and convert into time in HH:MM:SS formate
#include <iostream>
using namespace std;

class TimeConv {
private:
    int h;
    int m;
    int s;

public:
    TimeConv() : h(0), m(0), s(0) {}

    
    void timeinsec() {
        int totalSec;
        cout << "Enter time in seconds: ";
        cin >> totalSec;

        h = totalSec / 3600;
        totalSec %= 3600;
        m = totalSec / 60;
        s = totalSec % 60;
    }

    
    void displayT() const {
        cout << "Time: " << h << " hours " << m << " minutes " << s << " seconds" << endl;
    }
};

int main() {
    TimeConv tc;

    
    tc.timeinsec();

   
    tc.displayT();

    
}