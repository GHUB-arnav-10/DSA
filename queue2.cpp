#include <iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
queue<int>q;
q.push(5);
q.push(12);
q.push(11);
q.push(6);
if(q.empty()){
    cout<<"Queue is Empty"<<endl;
    return 0;
}
q.pop();
cout<<"Now the first element is:"<<q.front()<<endl;
cout<<"Now the last element is:"<<q.back()<<endl;
cout<<"The Size is:"<<q.size()<<endl;
}

