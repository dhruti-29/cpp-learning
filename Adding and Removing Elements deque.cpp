#include <iostream>
#include<deque>
using namespace std;

int main() {
    deque<int>dq;
    dq.push_back(10); // Add at the end
dq.push_front(20); // Add at the front
dq.push_back(30);
dq.push_front(40);
dq.pop_back(); // Remove last element (30)
dq.pop_front(); // Remove first element (40)
std::cout << "Deque elements: ";
for (int num : dq) {
std::cout << num << " ";
}
    return 0;
}
