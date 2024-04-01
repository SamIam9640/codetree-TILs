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
            } 
        } else if (operation == "size") {
            cout<< dynamicArray.size() << endl;
        } else if (operation == "get") {
            int k;
            ss >> k;
            if (k >= 1 && k <= dynamicArray.size()) {
                cout<< dynamicArray[k - 1] << endl;
            } 
        } 
    }
    
    return 0;
}