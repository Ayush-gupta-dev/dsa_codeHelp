#include<iostream>
#include<queue>

using namespace std;
int main(){
    //creation
    deque<int> dq;
    //insertion
    dq.push_back(10);
    dq.push_back(20);

    dq.push_front(100);
    dq.push_front(200);

    // dq.pop_front();
    // dq.pop_back();

    cout << dq.front() <<endl;
    cout << dq.back() <<endl;

    //dq.empty()

    // operator available dq[index] dq.at(index)

    // insert clear erase swap
    dq.insert(dq.begin()+1,90);
    deque<int>::iterator it = dq.begin();
    while(it != dq.end()){
        cout << *it << endl;
        it++;
    }
    dq.clear();
    cout << dq.size() <<endl;
    if(dq.empty()){
        cout << "empty dq" <<endl;
    }else{
        cout << "not empty" <<endl;
    }


    return 0;
}