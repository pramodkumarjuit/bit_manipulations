#include<iostream>
using namespace std;

bool power_of_two(uint32_t n) {
    if ((n & n-1 ) == 0) {
        return true;
    }
    return false;
}

int main(int argc, char* argv[])
{
    uint32_t n = 0;
    cout << "Enter a number:" << endl;
    cin >>n;

    if (power_of_two(n)) {
        cout << "No. is power of 2" << endl; 
    } else {
        cout << "No. is not power of 2" << endl; 
    }

    return 0;
}
