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
    return 0.5*(1+b)*100;
}

int main()
{
    double mean,sd,x,y,z;
    cin>>mean>>sd;
    cin>>x>>y;
    
    double ans1 = double(100) - func(mean,sd,x);
    double ans2 = double(100) - func(mean,sd,y);
    cout<<fixed<<setprecision(2)<<ans1<<endl;
    cout<<fixed<<setprecision(2)<<ans2<<endl;
    cout<<fixed<<setprecision(2)<<func(mean,sd,y);
    return 0;
}