// #include <iostream>
// // using  namespace std;
// int main()
// {   
//     int total = 7;
//     int count = 65; 
//     char noor;
//     double average;
//     noor = static_cast <char> (count);
//     std::cout << noor;
//     return 0;
#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
    double price = 25.6754387;
    
    cout << fixed << setprecision(2);
    cout << price;
    return 0;
}




