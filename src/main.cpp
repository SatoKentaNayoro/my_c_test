#include <iostream>

using std::string;
using std::cout;

int main() {
    int count = 10;
    for (int i = 1; i <= 5; i++) {
        count = count << i;
    };
    cout << "count: " << count << std::endl;
    string a = "abcd";
    cout << "a_len: " << a.length() << std::endl;
    cout << "a_2: " << a[2] << std::endl;
    cout << "a_2: " << a[2] << std::endl;
    cout << count << '\n';
    cout << count << std::endl;

    int b = 1;
    double c;
//    c = b++;
    c = 2 * b++ /3.0;
    cout << b << '\n' << c << '\n';
}
