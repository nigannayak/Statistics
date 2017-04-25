
/*

Given an array, X, of N integers, calculate and print the standard deviation. Your answer should be in decimal form,
rounded to a scale of 1 decimal place (i.e., 12.3 format). An error margin of +-0.1 will be tolerated for the standard deviation.

*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{
    double n,x;
    cin>>n;
    vector <double> vec;
    for(double i = 0 ; i < n ; i++)
    {
        cin>>x;
        vec.push_back(x);
    }

    double mean(0);
    for(double i = 0 ; i < n ; i++)
        mean+=vec[i];

    mean/=n;
    double mean_square(0);

    for(double i = 0 ; i < n ; i++)
    {
        double mul = abs(mean-vec[i]);
        mean_square+=(mul)*(mul);
    }

    mean_square/=n;
    cout<<fixed<<setprecision(1)<<sqrt(mean_square);

    return 0;
}