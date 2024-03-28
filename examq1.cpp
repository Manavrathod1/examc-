#include <iostream>
using namespace std;
class Distance 
{
    public:
    int feet;
    int inch;

    Distance() {
        feet = 0;
        inch = 0;
    }

    void readDistance() {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inch: ";
        cin >> inch;
    }
        Distance addDistance(const Distance& d) {
        Distance result;
        result.feet = feet + d.feet;
        result.inch = inch + d.inch;
        
        if (result.inch >= 12) {
            result.feet += result.inch / 12;
            result.inch %= 12;
        }
        
        return result;
    }

    void displayDistance() {
        cout << feet << " feet " << inch << " inch";
    }
};

int main() 
{
    Distance d1, d2, sum;
    
    cout << "Input 1:" << endl;
    d1.readDistance();

    cout << "Input 2:" << endl;
    d2.readDistance();

    sum = d1.addDistance(d2);

    cout << "Output:" << endl;
    sum.displayDistance();
    cout << endl;    
}
