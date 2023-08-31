#include<iostream>
#include<stack>
using namespace std;
int main(){
stack<int>s;
s.push(5);
s.push(8);
s.push(1);
s.push(9);
cout << "The top element is: " << s.top() << endl;
cout << "The size is: " << s.size() << endl;
if(s.empty()){
    cout<<"Stack is empty"<<endl;
    return 0;
}
s.pop();
cout << "The top element is: " << s.top() << endl;
cout << "The size is: " << s.size() << endl;
}
