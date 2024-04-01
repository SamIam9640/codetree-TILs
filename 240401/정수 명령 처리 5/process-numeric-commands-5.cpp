#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v;

    for(int i=0;i<n;i++){

    v.push_back (10);
    v.push_back (20);
#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main() {
    vector<int> dynamicArray;
    string command;
    
    while (getline(cin, command)) {
        stringstream ss(command);
        string operation;
        ss >> operation;
        
        if (operation == "push_back") {
            int num;
            ss >> num;
            dynamicArray.push_back(num);
        } else if (operation == "pop_back") {
            if (!dynamicArray.empty()) {
                dynamicArray.pop_back();
            } else {
                cout << "Array is empty!" << endl;
            }
        } else if (operation == "size") {
            cout << "Size of dynamic array: " << dynamicArray.size() << endl;
        } else if (operation == "get") {
            int k;
            ss >> k;
            if (k >= 1 && k <= dynamicArray.size()) {
                cout << "Element at index " << k << ": " << dynamicArray[k - 1] << endl;
            } else {
                cout << "Invalid index!" << endl;
            }
        } else {
            cout << "Invalid command!" << endl;
        }
    }
    
    return 0;
}