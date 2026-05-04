#include <iostream>
#include<vector>
#include<algorithm> //for swap and sorting
using namespace std;

int main() {
    
    vector<int> vec = {10, 20 ,30};

    cout<<"size :"<<vec.size()<<endl;
    cout<<"capacity : "<<vec.capacity()<<endl;
    cout<<"is empty : "<<vec.empty()<<endl; // if vector empty than print 0 and otherwise print 1

    vec.resize(5,100); //size 5 thase and value 100 add thase jaya value nathi thya badhe 100 100 j print thase 

    vec.shrink_to_fit();
    cout<<"new size after resize : "<<vec.size()<<endl;

    for(int num : vec){
        cout<<num<<" ";
    }
cout<<endl;

    cout<<"element access method"<<endl;

cout<<"at index "<<vec[2]<<" "<<vec.at(2)<<endl;
//cout<<"using opreator ";
cout<<"front element : "<<vec.front()<<endl;
cout<<"back element : "<<vec.back()<<endl;
int* dataptr= vec.data();
cout<<"adreess : "<<dataptr<<endl;


vec.push_back(40);
vec.pop_back();

vec.insert(vec.begin() + 1 ,15); // second position a 15 add thase 
vec.erase(vec.begin() + 2); // thrird positon thi remove thai jay element 


    for(int num : vec){
        cout<<num<<" ";
    }
cout<<endl;


vec.emplace_back(50); // just like push_back but fast

for(int num : vec){
        cout<<num<<" ";
    }
cout<<endl;

vector<int>vec2;
vec2.assign(3,7); // for assign value  inshort 3 times 7 7 7 

vec.swap(vec2); // vec and  vec2 

cout<<"after swap vector : ";
for(int num : vec){
        cout<<num<<" ";
    }
cout<<endl;

cout<<"iterators"<<endl;
for(auto it = vec2.begin(); it != vec2.end() ;++it){
    cout<<*it<<" ";
}
//reverse loop chale
cout<<"reverse traversal : ";
for(auto rit = vec2.rbegin(); rit != vec2.rend() ;++rit){ 
cout<<*rit<<" ";
}

cout << "\n--- Relational Operators ---" << endl;
    vector<int> v1 = {1, 2, 3};
    vector<int> v2 = {1, 2, 3};
    vector<int> v3 = {1, 2, 4};

    if (v1 == v2) cout << "v1 and v2 are equal" << endl;
    if (v1 != v3) cout << "v1 and v3 are not equal" << endl;
    if (v1 < v3)  cout << "v1 is lexicographically smaller than v3" << endl;
//lexicorgraphically smaller means dixinery ni jem check kare
    
    vec2.clear();
    cout << "\nVec2 size after clear: " << vec2.size() << endl;

return 0;
}