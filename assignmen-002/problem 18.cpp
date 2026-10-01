#include <iostream>
using namespace std;
int main()
{
double sales = 95000;
cout << "sales:$" << sales << endl ;
const double statetaxrate=.04;
double statetax = sales * statetaxrate;
cout << "state tax :$" << statetax << endl;
const double countytaxrate = .02;
double countytax = sales * countytaxrate;
cout << "countytax : $"<< countytax << endl;
double totaltax = statetax + countytax;
cout << "total tax : $" << totaltax;
return 0;
}