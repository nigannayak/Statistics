#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double meanX,meanY;
    cin>>meanX>>meanY;
    double ansX = 160 + 40*(meanX + (meanX*meanX));
    double ansY = 128 + 40*(meanY + (meanY*meanY));
    cout<<fixed<<setprecision(3)<<ansX<<endl;
    cout<<fixed<<setprecision(3)<<ansY;
    return 0;
}