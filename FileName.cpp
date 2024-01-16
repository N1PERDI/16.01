#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector <int> stack;
 void push(vector <int> & stack) {
     int n;
     cin >> n;
     stack.push_back(n);
     cout << "ok" <<endl;
 }
 void pop(vector <int>& stack) {
     if (stack.size() > 0) {
         cout << stack [stack.size() - 1];
         stack.pop_back();
     }
     else { cout << "error"<< endl; }
 }
 void back() {
     if (stack.size() > 0) {
         cout << stack [stack.size() - 1];
     }
     else { cout << "error" << endl; }
 }
 void size () {
     cout << size(stack) << endl;
 }
 void clear(vector <int>& stack) {
     stack.clear();
     cout << "ok" << endl;
 }
int main() {

    while (true) {
        string com;
        cin >> com;
        if (com == "push") { push(stack); }
        else if (com == "pop") { pop(stack); }
        else if (com == "back") { back(); }
        else if (com == "size") { size(); }
        else if (com == "clear") { clear; }
        else if (com == "exit") { 
            std::cout << "bye";
            return 0;
        }
    }
}

