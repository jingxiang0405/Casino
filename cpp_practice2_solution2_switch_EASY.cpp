#include<iostream>
using namespace std;

int main(){
    int assignment, midTerm, finalExam;
    int grade;
    cin >> assignment >> midTerm >> finalExam;
    
    grade = assignment*0.3 + midTerm*0.3 + finalExam*0.4;
    
    grade /= 5;
    
    switch(grade){
        case 20:
        case 19:
            cout << "A+" << endl;
            break;
        case 18:
            cout << "A" << endl;
            break;
        case 17:
            cout << "A-" << endl;
            break;
        case 16:
            cout << "B+" << endl;
            break;
        case 15:
            cout << "B" << endl;
            break;
        case 14:
            cout << "B-" << endl;
            break;
        case 13:
            cout << "C" << endl;
            break;
        case 12:
            cout << "C-" << endl;
            break;
        default:
            cout << "Failed" << endl;
    }
    
    return 0;
}
