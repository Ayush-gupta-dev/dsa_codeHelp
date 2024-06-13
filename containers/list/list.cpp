#include<iostream>
#include<list>

using namespace std;
int main(){

    list<int>myList;
    //insertion push_back push_front
    myList.push_back(20);
    myList.push_back(40);
    myList.push_back(30);
    myList.push_front(50);
    // 50->20->30->40

    // pop_back pop_front()
    // clearList myList.empty() T|F
    // myList.front() prints first myList.back()
    // myList.begin() myList.end()

    //traverse
    list<int>::iterator it = myList.begin();
    while(it != myList.end() ){
        cout << *it << " ";
        it ++;
    }

    // remove(); remove alls elem
    list<int> first;
    first.push_back(10);
    first.push_back(20); 
    first.push_back(30);
    list<int> second;
    second.push_back(10); 
    second.push_back(200); 
    second.push_back(300); 

    first.swap(second);

    // insert first.insert(first.begin(),100)
    // erase(iter pstn) or (earse(start itr, end itr))
    






    return 0;
}