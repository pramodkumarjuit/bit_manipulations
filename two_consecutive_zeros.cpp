#include<iostream>
using namespace std;

// Input 00110111101111101111111111011111 Return: true
// Input: 01010101010101010101010101010101 Return: false

bool two_consecutive_zeros_finder(uint32_t n) {
    uint32_t mask = 0b11; // 3
    for (int i = 0; i<31 ; i++) {
        if ((n & mask) == 0) {
            return true;
        }
        mask = mask << 1;
    }
    return false;
}

int main(int argc, char* argv[])
{
    uint32_t n1 = 0b00110111101111101111111111011111;
    uint32_t n2 = 0b01010101010101010101010101010101;

    cout << "n1->True:" << two_consecutive_zeros_finder(n1) << endl;
    cout << "n2->False:" << two_consecutive_zeros_finder(n2) << endl;
    return 0;
}
