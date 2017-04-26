#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <iomanip>
using namespace std;

double power(double p,double x)
{
    if(x == 0)
        return 1;

    if((int)x%2 == 0)
        return power(p*p,x/2);

    return p*power(p*p,(x-1)/2);
}

double fact(double n)
{
    if(n == 0)
        return 1;

    return n*fact(n-1);
}

double find_ans(double x,double p,double n)
{
    double q = 1-p;
    double mul = power(p,x)*power(q,(n-x));

    return (fact(n)/(fact(x)*fact(n-x)))*mul;
}

int main()
{
    double a,b,p;
    cin>>a>>b;
    double n = 6;
    p = (a/(a+b));
    double sum(0);
    for(double i = 3 ; i < 7 ; i++)
        sum+=find_ans(i,p,n);

    cout<<fixed<<setprecision(3)<<sum;
    return 0;
}