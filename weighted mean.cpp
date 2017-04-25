
/*

Given an array, X , of N integers and an array, W , representing the respective weights of X's elements,
calculate and print the weighted mean of X's elements. Your answer should be rounded to a scale of 1 decimal place (i.e., 12.3 format).

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
    vector <double> arr;
    vector <double> weight;
    double total_weight(0);
    for(double i = 0 ; i < n ; i++)
    {
        cin>>x;
        arr.push_back(x);
    }

    for(double i = 0 ; i < n ; i++)
    {
        cin>>x;
        weight.push_back(x);
        total_weight+=x;
    }
    
    double gen_weight(0);
    for(double i = 0 ; i < n ; i++)
        gen_weight+=(weight[i]*arr[i]);
    
    cout<<fixed<<setprecision(1)<<(gen_weight)/total_weight;
    return 0;
}