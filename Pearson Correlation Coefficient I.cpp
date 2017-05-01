#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {

    double n,x,y;
    cin>>n;
    vector <double> vecX;
    vector <double> vecY;
    for(double i = 0 ; i < n ; i++)
    {
        cin>>x;
        vecX.push_back(x);
    }

    for(double i = 0 ; i < n ; i++)
    {
        cin>>y;
        vecY.push_back(y);
    }

    double meanX(0),meanY(0);
    for(double i = 0 ; i < n ; i++)
    {
        meanX += vecX[i];
        meanY += vecY[i];
    }

    meanX /= n;
    meanY /= n;
    double sdX(0);
    double sdY(0);
    double pCC(0);
    for(double i = 0 ; i < n ; i++)
    {
        sdX += abs(vecX[i]-meanX)*abs(vecX[i]-meanX);
        sdY += abs(vecY[i]-meanY)*abs(vecY[i]-meanY);
        pCC += ((vecX[i]-meanX)*(vecY[i]-meanY));
    }

    pCC /= n;
    sdX /= n;
    sdY /= n;
    sdX = sqrt(sdX);
    sdY = sqrt(sdY);

    double sdT = sdX*sdY;
    pCC /= sdT;

    cout<<fixed<<setprecision(3)<<pCC;
    return 0;
}