#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    double p,n,x;
    cin>>p>>n;
    cin>>x;
    double ans(1);
    for(double i = 0 ; i < x-1 ; i++)
        ans *= (n-p)/n;
    
    ans *= p/n;
    cout<<fixed<<setprecision(3)<<ans;
    return 0;
}