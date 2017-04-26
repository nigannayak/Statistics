#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <iomanip>
using namespace std;

double power(double q,double i)
{
    if(i == 0)
        return 1;
    
    if(int(i)%2 == 0)
        return power(q*q,i/2);
    
    return q*power(q*q,(i-1)/2);
}

double find_val(double i,double p)
{
    double q = 1-p;
    return power(q,i);
}

int main()
{
    double p,n,x;
    cin>>p>>n;
    cin>>x;
    p /= n;
    double ans = p;
    for(double i = 1 ; i < x ; i++)
        ans += find_val(i,p)*p;
        
    cout<<fixed<<setprecision(3)<<ans;
    return 0;
}