#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int x1,y1,x2,y2,x3,y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    double result = sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));
    double result2 = sqrt(pow(x1-x3, 2) + pow(y1-y3, 2));
    double result3 = sqrt(pow(x2-x3, 2) + pow(y2-y3, 2));

    if(result2 < result) result = result2;
    if(result3 < result) result = result3;

    cout << (int)result << endl;

    return 0;
}
