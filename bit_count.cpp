#include<iostream>
using namespace std;

void bit_count_optimized(int n) {
    int c;
    for (c = 0; n ; c++) {
        n &= n - 1; // the least significant bit is changed to zero.
    }
    cout << "Optimized implementation" << endl;
    cout << "No. of bits: " << c << endl;
}

int main(int argc, char* argv[])
{
    cout << "Counting the no. of bits" << endl;
    int n = 11;
    int input = n;

    int count = 0;
    for (int i = 0; n; i++) {
        if ((n & 0x1) == 0x1) {
            count++;
        }
        n = n>>1;
    }

    cout << "Number: " << input << endl;
    cout << "No. of bits: " << count << endl;

    bit_count_optimized(input);
    return 0;
}
