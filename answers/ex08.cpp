#include <iostream>
#include <string>
#include <cctype>
using namespace std;
namespace Loud{

    void print(std::string s){
        for(char& c : s){
           c = toupper(c); 
        }
        cout << s << endl;
    }
};

namespace Quiet{
    void print(std::string s){
        for(char& c : s){
           c = tolower(c); 
        }
        cout << s << endl;
    }
};


int main(){
    int n;
    cin >> n;
    std::string s1, s2;
    for(int i = 0; i < n; ++i){
        cin >> s1 >> s2;
        if(s1 == "Quiet")
            Quiet::print(s2);
        else if(s1 == "Loud")
            Loud::print(s2);
    }
    return 0;
}
