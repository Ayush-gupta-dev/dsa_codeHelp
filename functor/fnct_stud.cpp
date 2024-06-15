#include<iostream>

using namespace std;


class Student{
    public:
        int marks;
        string name;
        Student(){

        }
        Student(int m, string n){
            this->marks = m;
            this->name = n;
        }
};

class StudentComparator{
    public:
        bool operator()(Student a, Student b){
            return a.marks < b.marks;
        }

};

int main(){

    Student s1;
    Student s2;
    s1.marks = 93;
    s1.name="babbar";

    s2.marks = 91;
    s2.name = "lakshay";

    StudentComparator cmp;
    if(cmp(s1,s2)){
        cout << "babbar marks more" <<endl;
    }else{
        cout << "lakshay marks more" <<endl;

    }



    return 0;
}