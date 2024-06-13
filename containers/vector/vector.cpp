#include<iostream>
#include<vector>

using namespace std;

int main(){
    //creation
    vector<int> marks;
    marks.push_back(10);
    marks.push_back(30);
    marks.push_back(20);
    cout << "size" << marks.size() << endl;
    marks.pop_back();
    cout << "size" << marks.size() << endl;
    cout << *marks.begin() << endl;

    //front back check marks.empty()
    // marks[0] or marks[0] =100 

    // marks.at(0) or marks[0] same thing

    // marks.capacity() ooh if default limit reaches it doubles the capacity

    // by default capacity 0; we can change by reserve; marks.reserve(10)
    // marks.max_size()

    // marks.clear() => removes all elem of vector
    // marks.insert(iterator,value) marks.insert(marks.begin(),50);
    // marks.erase(itert postn) erase(start, end) e.g marks.erase(marks.begin(),marks.end()) => size 0

    // swap 
    vector<int> first;
    vector<int> second;

    first.push_back(10);
    first.push_back(20);
    first.push_back(30);
    
    second.push_back(90);
    second.push_back(80);
    second.push_back(70);

    first.swap(second);
    cout << "first vector:" << first[0] << endl;

    // for_each loop
    for(int i : second){
        cout << i << " ";
    }
    // traversing via iterator
    // creating iterator
    vector<int>::iterator it = first.begin();
    while(it != first.end()){
        cout << *it << " ";
        it++;
    }

    //2d array/vector
    vector<vector<int>> arr(5,vector<int>(4,0));
    int totalRows =  arr.size();
    int totalColumns= arr[0].size();

    // diff col size
    // vector<vector <int>> brr(3);
    // brr[0] = vector<int>(4);
    // brr[1] = vector<int>(2);
    // brr[2] = vector<int>(5);

    // int totalRowsbrr = brr.size();
    // for(int i =0 ; i < totalRowsbrr; i++){
    //     cout << "size of col" << i << "in brr is" << brr[i].size() << " " << endl;
    // }

    std::vector<std::vector<int>> brr(3); // Changed to size 3 to match the maximum index used in the assignment
    brr[0] = std::vector<int>(4);
    brr[1] = std::vector<int>(2);
    brr[2] = std::vector<int>(5);

    int totalRowsbrr = brr.size();
    for (int i = 0; i < totalRowsbrr; i++) {
        std::cout << "size of col " << i << " in brr is " << brr[i].size() << std::endl;
    }



    // vector<int> miles(10);
    // vector<int> distances(15,0); //15 len each elem 0

}




