//
// Created by Asahi on 2025/9/10.
//
#include <iostream>
#include <cassert>

using std::cout;
using std::endl;

int main() {
    bool a = true;
    if (a) {
        cout << "a: " << a << endl;
    }

    bool b = a == 0;
    assert(!b);
    cout << "b: " << b << endl;

    bool c = a == 1;
    assert(c);
    cout << "c: " << c << endl;

    bool d;
    d = a -= 1;
    assert(!d);
    cout << "d: " << d << endl;
    a += 1;

    int e;
    e = a -= 1;
    assert(!e);
    cout << "e: " << e << endl;
    a += 1;

    bool f;
    f = a == true;
    assert(f);
    cout << "f: " << f << endl;

    // other test
    bool g;
    cout << "current a: " << a << endl;
    g = a -= 2;
    cout << "g: " << g << endl;
    assert(g);

    int h;
    cout << "current a: " << a << endl;
    h = a -= 2;
    cout << "h: " << h << endl;
    int mid = a;
    int i = mid -= 2;
    cout << "i: " << i << endl;
}