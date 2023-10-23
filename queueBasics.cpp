// Basically it follows FIFO(First In First Out i.e vice-versa of stack)

#include<bits/stdc++.h>
using namespace std;

int main(){

queue<int>mack;

mack.push(89);
mack.push(90);

cout<<"The Front elememt of the Queue is :"<<mack.front()<<endl;

mack.push(23);

cout<<"The last element of the Queue is :"<<mack.back()<<endl;

cout<<"The size of this queue is :"<<mack.size();

return 0;

}