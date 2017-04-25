
/*

The interquartile range of an array is the difference between its first (Q1) and third (Q3) quartiles (i.e.,Q3-Q1).
Given an array, X, of N integers and an array, F, representing the respective frequencies of X's elements, construct a data set, X,
where each xi occurs at frequency fi. Then calculate and print S's interquartile range, rounded to a scale of 1 decimal place (i.e., 12.3 format).

*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

double find_median(vector <double> v)
{
    if(v.size()%2 == 0)
        return (v[v.size()/2]+v[(v.size()/2)-1])/2;

    return v[v.size()/2];
}

int main()
{
    double n,x;
    cin>>n;
    vector <double> arr;
    vector <double> freq;
    vector <double> vec;
    for(double i = 0 ; i < n ; i++)
    {
        cin>>x;
        arr.push_back(x);
    }

    for(double i = 0 ; i < n ; i++)
    {
        cin>>x;
        freq.push_back(x);
    }

    for(double i = 0 ; i < n ; i++)
    {
        for(double j = 0 ; j < freq[i] ; j++)
            vec.push_back(arr[i]);
    }

    sort(vec.begin(),vec.end());
    double Q1,Q3;
    vector <double> L;
    vector <double> U;
    n = vec.size();

    if((int)n%2 == 0)
        U.assign(vec.begin()+(n/2),vec.end());

    else
        U.assign(vec.begin()+(n/2)+1,vec.end());

    L.assign(vec.begin(),vec.begin()+(n/2));

    Q1 = find_median(L);
    Q3 = find_median(U);
    cout<<fixed<<setprecision(1)<<(Q3-Q1);

    return 0;
}