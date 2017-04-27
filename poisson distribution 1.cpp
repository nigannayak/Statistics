#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
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

double find_poisson(double mean,double k)
{
    double e = 2.71828;
    double denominator = (power(e,2))*sqrt(e)*fact(k);
    return power(mean,k)/denominator;
}

int main()
{
    double mean,k,ans;
    cin>>mean>>k;
    ans = find_poisson(mean,k);
    cout<<fixed<<setprecision(3)<<ans;
    return 0;
}