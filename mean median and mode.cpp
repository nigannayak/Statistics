
/*

Given an array, X of N integers ,calculate and print the the respective mean, median, and mode on separate lines.
If your array contains more than one modal value, choose the numerically smallest one.

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
    double max_val(0);
    for(double i = 0 ; i < n ; i++)
    {
        cin>>x;
        vec.push_back(x);
        max_val = max(max_val,x);
    }

    sort(vec.begin(),vec.end());
    double mean(0);
    long mode(0);
    double max_so_far(0);
    vector <double> count_val(max_val+1,0);
    for(double i = 0 ; i < n ; i++)
    {
        mean+=vec[i];
        count_val[vec[i]]++;
        if(max_so_far < count_val[vec[i]])
            max_so_far = count_val[vec[i]];
    }

    for(double i = 0 ; i < n ; i++)
    {
        if(max_so_far == count_val[vec[i]])
        {
            mode = (long)vec[i];
            break;
        }
    }

    cout<<fixed<<setprecision(1)<<(mean/n)<<endl;

    if((int)n%2 == 0)
        cout<<fixed<<setprecision(1)<<(vec[n/2]+vec[(n/2)-1])/2<<endl;

    else
        cout<<fixed<<setprecision(1)<<vec[n/2]<<endl;

    cout<<mode;
    return 0;
}