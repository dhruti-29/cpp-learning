#include <iostream>
#include<forward_list>
using namespace std;

int main() {
   // forward_list<int>flist1;
   forward_list<int> flist1; // Empty list
forward_list<int> flist2 = {1, 2, 3, 4, 5}; // Initialization with values
forward_list<int> flist3(5, 100); // List of size 5 with all values = 100
    return 0;
}
