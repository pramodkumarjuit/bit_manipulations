#include<iostream>
#include <bitset>

using namespace std;

uint32_t reverse_bits(uint32_t num) {
    uint32_t r = 0, result = 0;
    for (int i = 0; i< 32; i++) {
        r = num & 0b1;
        result <<=1;
        result |= r;
        num >>= 1;

    }
    return result;
}

int main(int argc, char* argv[])
{
    uint32_t n;
    cout << "Enter a number:";
    cin >> n;

    cout << "Input  :" << std::bitset<32>(n) << endl; 
    cout << "Output :" << std::bitset<32>(reverse_bits(n)) << endl; 
    return 0;
}
