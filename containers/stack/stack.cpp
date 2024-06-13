#include<iostream>;
#include<stack>;

using namespace std;

// shaadi ki plates on stack: LIFO
int main(){
    stack<int> st;
    //insertion
    st.push(10);
    st.push(20);
    st.push(30);

    cout << st.size() <<endl;
    st.pop();
    cout << st.top() <<endl;


    return 0;

}