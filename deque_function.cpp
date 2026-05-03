#include <iostream>
#include<deque>
#include<algorithm>
using namespace std;

int main() {
    deque<int>d;

    d.push_back(10);
    d.push_back(20);
    d.push_front(5);
    d.push_front(1);

    d.emplace_back(25);
    d.emplace_front(0);

    cout<<"index 2 :"<<d.at(2)<<endl;
    cout<<"front : "<<d.front()<<"back :"<<d.back()<<endl;

    d.pop_back();
    d.pop_front();

    d.insert(d.begin() + 2 ,99);
d.erase(d.begin()+3);

cout<<"size : "<<d.size()<<endl;
cout<<"is deque empty ? "<<(d.empty() ?"yes" : "no")<<endl;


auto it =find(d.begin(),d.end(),99);
    if(it!=d.end()){
        cout<<"found 99 at index :"<<distance(d.begin(),it)<<endl;

    }
cout << "Deque elements: ";
for (int x : d) {
cout << x << " ";
}
cout << endl;

    return 0;
}
