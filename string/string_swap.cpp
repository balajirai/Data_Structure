// swap two strings
// swap()

#include <iostream>
using namespace std;
int main(){
    string r = "10";
    string m = "20";
    cout << "Before  swap r contains " << r << "rupees" << '\n';
    cout << "Before  swap m contains " << m << "rupees" << '\n';

    // swap
    r.swap(m);

    cout << "After  swap r contains " << r << "rupees" << '\n';
    cout << "After  swap m contains " << m << "rupees";
    return 0;
}