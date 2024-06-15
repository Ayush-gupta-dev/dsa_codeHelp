#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

class Student{
    public:
        int marks;
        string name;
        Student(){

        }
        Student(int m, string n){

            this->marks =m;
            this->name=n;
        }

};

class comparator{
    public:
        bool operator()(Student a, Student b){

            if(a.marks == b.marks){
                return a.name < b.name;
            }
            return a.marks > b.marks;
        }
};

int main(){
    
    vector<Student> arr;
    arr.push_back(Student(90,"Love"));
    arr.push_back(Student(85,"ayush"));
    arr.push_back(Student(23,"daksh"));

    // priority_queue<int,vector<int>,less<int>> pq3; here less is oprtr //max heap for min heap oprtr greater<int> 


    sort(arr.begin(),arr.end(),comparator()); //ab desc hoga
    // priority_queue<Student, vector<Student>, comparator> pq;
    // pq.push(Student(90,"love"))
    // pq.push(Student(100,"ayush"))
    //catch here top is 100, ayush last one // TOP IS AT END!!


    
    return 0;

}