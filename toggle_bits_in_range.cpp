#include<iostream>
#include <bitset>
#include<cmath>
using namespace std;

uint32_t toggle_bits(uint32_t num, uint32_t pos1, uint32_t pos2)
{
    uint32_t mask, num_bits;
    num_bits = pos2-pos1+1;
    mask = (1 << num_bits) - 1; // creates 1's
    mask = mask << pos1;

    return num ^ mask;
}

int main()
{
    uint32_t pos1, pos2, num;
    cout << "Enter the number: ";
    cin >> num;
    cout << "Enter position1(from LSB): ";
    cin >> pos1;
    cout << endl << "Enter position2(from LSB): ";
    cin >> pos2;
    cout << "pos1=" << pos1 << " pos2=" << pos2 << std::endl;

    cout << "Input  :" << std::bitset<32>(num) << endl;
    cout << "Output :" << std::bitset<32>(toggle_bits(num, pos1, pos2)) << endl;

    return 0;
}
