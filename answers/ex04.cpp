#include <iostream>
using namespace std;

int main(){
    float max = 0; int n = 0; float input = 0;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>input;
        if(input> max){
            max = input;
        }
    }
    
    cout << (int)max;
}
