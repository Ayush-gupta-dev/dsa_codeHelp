#include<iostream>
#include<set>
using namespace std;
// just stores uniq vals

int main(){

    set <int> st;
    // unordered_set<int> ust;
    st.insert(10);
    st.insert(15);

    set<int>::iterator it = st.begin();
    while(it != st.end()){
        cout << *it << endl;
        it++;
    }

    return 0;
}