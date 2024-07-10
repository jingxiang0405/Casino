#include <iostream>
using namespace std;

int main(){
    int number = 0; int total = 0;
    cin>>number;
    while(number){
        total += number%10;
        number /= 10;
    }
    cout<<total;
}
