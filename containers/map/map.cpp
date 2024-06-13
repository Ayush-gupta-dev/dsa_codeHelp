#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

// string key:val unordered map and ordered map

int main(){

    //create
    unordered_map<string,string> table; // insetion O(1)
    // map<string,string> table; // insertion O(ln) sorted accrdlngly alpha... keys sorts

    //insertion
    table["in"] = "India";
    table.insert(make_pair("en","England"));

    pair<string, string> p;
    p.first = "br";
    p.second= "Brazil";
    table.insert(p);

    cout << table.size() << endl;

    // table clear,  empty
    cout << table.at("in") << endl;
    // table.at("in") = "Indonesia";
    table["in"] = "Inda3";
    cout << table.at("in") << endl;

    unordered_map<string,string>::iterator it = table.begin();
    while(it != table.end()){
        pair<string,string> p = *it;
        cout << p.first << " " << p.second <<endl;
        it++;
    }

    // erase, find , count table.erase(table.begin, table.end);

    if(table.find("in") != table.end()){
        cout << "key found" <<endl;
    }else{
        cout << "not fnd" <<endl;
    }

    if(table.count("in") == 1){
        cout << "key found" <<endl;

    }else{
        cout << "not fnd" <<endl;
    }



    return 0;
}