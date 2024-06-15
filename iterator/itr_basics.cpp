#include<iostream>
#include<vector>
#include <forward_list>
#include<list>


using namespace std;
int main(){

    // frwrd itr
    // forward_list<int> my_list;
    // my_list.push_front(10);
    // my_list.push_front(20);
    // my_list.push_front(30);
    // my_list.push_front(40);

    // forward_list<int>::iterator it = my_list.begin();

    //writing
    // while(it != my_list.end()){
    //     *it = *it +5;
    //     it++;
    // }
    //reading
    // for(int a:my_list){
    //     cout << a << " ";
    // } cout << endl;

    //bidirec itr
    
    list<int> bi_list;
    bi_list.push_back(10);
    bi_list.push_back(20);
    bi_list.push_back(30);

    list<int>::iterator it = bi_list.begin();
    while(it != bi_list.end()){
        *it = *it +2;
        cout << *it << " ";
        it++;
    }
    list<int>::iterator it2 = bi_list.end();
    while(it != bi_list.begin()){
        it--;
        *it = *it +2;
        cout << *it << " ";
        }
    
    // random acc itr
    // arr.begin() +1



    return 0;
}