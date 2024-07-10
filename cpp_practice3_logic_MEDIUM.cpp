#include<iostream>
using namespace std;

int main(){
    int a, b;
    int result;
    bool possible = false;
    cin >> a >> b >> result;
    
    if(a && b == result){
        cout << "AND" << endl;
        possible = true;
    }
    
    if(a || b == result){
        cout << "OR" << endl;
        possible = true;
    }
    
    if(!possible){
        cout << "IMPOSSIBLE" << endl;
    }
    
    return 0;
}
