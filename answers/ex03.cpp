#include <iostream>
using namespace std;

int main(){
    int n = 0; int pos_x = 0; int pos_y = 0;
    cin>>n;
    int x;
    for(int i = 0; i < n; ++i){
        cin >> x;
        if(x%2==0){
            pos_x+=1;
        }
        if(x%2==1){
            pos_y+=2;
        }
        if(x%3==0){
            pos_x-=1;
        }
        if(x%4==0){
            pos_y-=2;
        }
    }

    cout<< "(" << pos_x<<", "<<pos_y << ")" << endl;

}
