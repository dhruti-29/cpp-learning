#include <iostream>
using namespace std;
class Demo {
public:
    void show() const {
        cout << "Const function";
    }
};

int main() {
    const Demo d;
    d.show();
}
