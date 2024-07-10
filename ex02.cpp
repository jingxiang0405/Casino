#include<iostream>
using namespace std;

int main(){
    int assignment, midTerm, finalExam;
    int grade;
    cin >> assignment >> midTerm >> finalExam;
    
    grade = assignment*0.3 + midTerm*0.3 + finalExam*0.4;
    
    if(grade >= 95) cout << "A+" << endl;
    else if(grade >= 90) cout << "A" << endl;
    else if(grade >= 85) cout << "A-" << endl;
    else if(grade >= 80) cout << "B+" << endl;
    else if(grade >= 75) cout << "B" << endl;
    else if(grade >= 70) cout << "B-" << endl;
    else if(grade >= 65) cout << "C" << endl;
    else if(grade >= 60) cout << "C-" << endl;
    else cout << "Failed" << endl;
    
    return 0;
}
