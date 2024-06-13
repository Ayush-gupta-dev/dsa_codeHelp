#include<iostream>
#include<queue>

using namespace std;
int main(){
    //creation
    priority_queue<int>pq;
    // max-heap -> max-val -> highest priority

    pq.push(10); //10
    pq.push(30); // 30 10
    pq.push(20); // 30 20 10
    pq.push(55); // 55 30 20 10
    pq.push(14); // 55 30 20 14 10

    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;

    // pq.empty

    //min heap
    priority_queue<int,vector<int>, greater<int>> min_pq; // no need to understand meaning

    return 0;

}