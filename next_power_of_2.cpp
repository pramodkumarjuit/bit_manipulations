#include<iostream>
#include<vector>
using namespace std;

int32_t next_power_of_two(int32_t num) {
    int32_t count = 0;
    if ((num & num-1) == 0) { // already power of 2
        return num;
    }

    while (num) {
        num = num >> 1;
        count++;

    }
    return 1 << count;
}

int main(int argc, char* argv[])
{
    uint32_t n;
    cout << "Enter a number:";
    cin >> n;

    cout << "Next power of 2 is :" << next_power_of_two(n) << endl; 
    return 0;
}
