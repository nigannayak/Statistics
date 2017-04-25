
/*

Given an array, X , of N integers, calculate the respective first quartile (Q1), second quartile (Q2), and third quartile (Q3).
It is guaranteed that Q1, Q2, and Q3 are integers.

*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int find_median(vector <int> v)
{
    if(v.size()%2 == 0)
        return (v[v.size()/2]+v[(v.size()/2)-1])/2;

    return v[v.size()/2];
}

int main()
{
    int n,x;
    cin>>n;
    vector <int> vec;
    for(int i = 0 ; i < n ; i++)
    {
        cin>>x;
        vec.push_back(x);
    }

    sort(vec.begin(),vec.end());
    int Q1,Q2,Q3;
    vector <int> L;
    vector <int> U;

    if(n%2 == 0)
    {
        Q2 = (vec[n/2]+vec[(n/2)-1])/2;
        U.assign(vec.begin()+(n/2),vec.end());
    }

    else
    {
        Q2 = vec[n/2];
        U.assign(vec.begin()+(n/2)+1,vec.end());
    }
    
    L.assign(vec.begin(),vec.begin()+(n/2));

    Q1 = find_median(L);
    Q3 = find_median(U);
    cout<<Q1<<"\n"<<Q2<<"\n"<<Q3;

    return 0;
}