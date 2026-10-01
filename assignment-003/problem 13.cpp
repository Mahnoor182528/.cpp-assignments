#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    long elapsedseconds = time(0);
    srand(elapsedseconds);
    int number = rand();
    cout << number;
    return 0;
}