#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

double func(double mean, double sd, double x)
{
    double b = erf((x-mean)/(sd*sqrt(2)));
    return 0.5*(1+b);
}

int main()
{
    double mean,sd,x,y,z;
    cin>>mean>>sd;
    cin>>x;
    cin>>y>>z;
    
    double ans1 = func(mean,sd,x);
    double ans2 = func(mean,sd,z)-func(mean,sd,y);
    cout<<fixed<<setprecision(3)<<ans1<<endl;
    cout<<fixed<<setprecision(3)<<ans2;
    return 0;
}