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
    double n,p;
    cin>>p>>n;
    p /= 100;
    double sum1(0);
    for(double i = 0 ; i < 3 ; i++)
        sum1+=find_ans(i,p,n);

    cout<<fixed<<setprecision(3)<<sum1<<endl;
    double sum2(0);
    for(double i = 0 ; i < 2 ; i++)
        sum2+=find_ans(i,p,n);

    sum2 = 1-sum2;
    cout<<fixed<<setprecision(3)<<sum2<<endl;
    return 0;
}