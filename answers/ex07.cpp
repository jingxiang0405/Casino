#include<iostream>
using namespace std;

int main(){
    int a, b;
    int result;
    bool possible = false;
    cin >> a >> b >> result;
    bool bo = (result ? 1 : 0);
    if((a && b) == bo){
        cout << "AND" << endl;
        possible = true;
    }
    
    if((a || b) == bo){
        cout << "OR" << endl;
        possible = true;
    }
    
    if(!possible){
        cout << "IMPOSSIBLE" << endl;
    }
    
    return 0;
}
