#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {

    double xi,yi;
    double n(5);
    vector <double> vecX;
    vector <double> vecY;
    for(double i = 0 ; i < 5 ; i++)
    {
        cin>>xi>>yi;
        vecX.push_back(xi);
        vecY.push_back(yi);
    }
    
    double meanX(0),meanY(0);
    double sqrsumX(0),sqrsumY(0);
    double mulT(0);
    for(double i = 0 ; i < 5 ; i++)
    {
        meanX += vecX[i];
        meanY += vecY[i];
        sqrsumX += vecX[i]*vecX[i];
        sqrsumY += vecY[i]*vecY[i];
        mulT += vecX[i]*vecY[i];
    }
    
    double sumX = meanX;
    double sumY = meanY;
    meanX /= n;
    meanY /= n;
    
    double numerator = (n*mulT) - (sumX*sumY);
    double denominator = (n*sqrsumX) - (sumX*sumX);
    double b = numerator/denominator;
    double a = meanY - (meanX*b);
    double X = 80;
    double Y = a + (b*X);
    
    cout<<fixed<<setprecision(3)<<Y;
    return 0;
}