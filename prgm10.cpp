#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double p,t,r;
     cout << "Enter principal amount: ";
    cin >> p;
    cout << "Enter interest rate (per year): ";
    cin >> r;
    cout << "Enter time (in years): ";
    cin >> t;
    double A=p*((pow((1+r/100),t)));
    double Ci=A-p;
    cout<<"Compound interset is"<<Ci;
    return 0;
}
