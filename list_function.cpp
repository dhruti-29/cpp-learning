#include <iostream>
#include<list>
#include<algorithm>

using namespace std;

int main() {
    
    list<int>lst;

    lst.push_back(10);
     lst.push_back(20);
    lst.push_back(30);

    lst.emplace_back(39);
    lst.emplace_front(0);

    cout << "Front: " << lst.front() << ", Back: " << lst.back() << endl
lst.pop_back();
lst.pop_front();

auto it = lst.begin();
advance(it,2);
ls.insert(it,99);

advance(it,3);
it = lst.begin();

cout << "Size: " << lst.size() << endl;
cout << "Is list empty? " << (lst.empty() ? "Yes" : "No") << endl



auto findIt = find(lst.begin(), lst.end(), 99);
if (findIt != lst.end()) {
cout << "Found 99 in list." << endl;

cout << "List elements: ";
for (int x : lst) {
cout << x << " ";
}
cout << endl;

}
return 0;
}