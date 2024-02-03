#include<iostream>
using namespace std;

uint32_t swapOddEvenBits(uint32_t num)
{
    uint32_t oddBits, evenBits;
    uint32_t maskOddBits = 0xAAAAAAAA;
    uint32_t maskEvenBits = 0x55555555;

    oddBits = num & maskOddBits;
    evenBits = num & maskEvenBits;

    // swap
    oddBits >>= 1;
    evenBits <<=1;

    return oddBits | evenBits;
}

int main()
{
    uint32_t num = 170; // Example number: 10101010 in binary

    cout << "Input  : " << num << endl;
    cout << "output : " << swapOddEvenBits(num) << endl; // 85


    return 0;
}
