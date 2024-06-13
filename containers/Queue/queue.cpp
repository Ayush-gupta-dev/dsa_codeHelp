#include<iostream>;
#include<queue>
using namespace std;

// Queue: FIFO: Addtn from rear || removal form front

int main(){

    //creation
    queue<int> q;
    //insertion
    q.push(10);
    q.push(20);
    q.push(30);

    cout << "q size" << q.size() << endl;

    q.pop(); // 10 will be popped
    cout << "q size" << q.size() << endl;

    if(q.empty() == true){
    cout << "q empty";

    }else{
    cout << "q not empty" << endl;

    }
    // q.front() q.back()

    queue<int> first;
    queue<int> second;

    first.push(100);
    first.push(200);
    first.push(300);

    second.push(10);
    second.push(20);
    second.push(30);

    //swap
    first.swap(second);
    // travers
    cout << "first elem of first" << first.front() << endl;    



    return 0;
}