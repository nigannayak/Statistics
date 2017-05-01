#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

double find_pos(vector <double> vec , double val , int start , int end1)
{
    if(vec[start] == val)
        return start+1;

    if(vec[end1] == val)
        return end1+1;

    double mid = (start+end1)/2;
    if(vec[mid] == val)
        return mid+1;

    if(vec[mid] > val)
        return find_pos(vec,val,start+1,mid-1);

    return find_pos(vec,val,mid+1,end1-1);
}

int main() {

    double n,x,y;
    cin>>n;
    vector <double> vecX;
    vector <double> sortX;
    vector <double> vecY;
    vector <double> sortY;
    for(double i = 0 ; i < n ; i++)
    {
        cin>>x;
        vecX.push_back(x);
        sortX.push_back(x);
    }

    for(double i = 0 ; i < n ; i++)
    {
        cin>>y;
        vecY.push_back(y);
        sortY.push_back(y);
    }

    sort(sortX.begin(),sortX.end());
    sort(sortY.begin(),sortY.end());
    vector <int> rankX;
    vector <int> rankY;
    for(double i = 0 ; i < n ; i++)
    {
        double valX = vecX[i];
        int pos = find_pos(sortX,valX,(int)0,(int)n-1);
        rankX.push_back(pos);

        double valY = vecY[i];
        pos = find_pos(sortY,valY,(int)0,(int)n-1);
        rankY.push_back(pos);
    }

    vector <double> di;
    for(double i = 0 ; i < n ; i++)
    {
        double diff = abs((double)rankX[i]-(double)rankY[i])*abs((double)rankX[i]-(double)rankY[i]);
        di.push_back(diff);
    }

    double sumd = 0;
    for(double i = 0 ; i < n ; i++)
        sumd += di[i];

    double minus_val = 6*sumd;
    double denominator = (n*n*n)-n;
    minus_val /= denominator;

    double ans = 1-minus_val;
    cout<<fixed<<setprecision(3)<<ans;
    return 0;
}