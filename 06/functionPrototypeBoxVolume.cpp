#include <iostream>
using namespace std;

unsigned int boxVolume(unsigned int length = 1, unsigned int width = 1, unsigned int height = 1); // function prototype

int main()
{
    cout << "The default box volume is: " << boxVolume(10, 5, 2);
}

unsigned int boxVolume(unsigned int length, unsigned int width, unsigned int height)
{
    return length * width * height;
}