#include<iostream>
using namespace std;


class functorOne{
    public:
        bool operator()(int a, int b){
            // desc order me cmprkrna
            // if a >b  -> true a should be placed before b
            return a > b;
        }
};

int main(){
    
    functorOne cmp;
    if(cmp(10,5)== true){
        cout << "10 > 5" << endl;
    }
    
    return 0;

}