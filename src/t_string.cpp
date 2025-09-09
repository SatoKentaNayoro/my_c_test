//
// Created by Asahi on 2025/9/10.
//
#include <string>
#include <iostream>

using namespace std;

int main() {
    string a = "ABCDE";
    printf("%s\n", a.c_str());
    cout << "a len: " << a.length() << endl;
    printf("a len: %zu\n", a.length());
    printf("a 4: %c\n", a[3]);
    printf("a out of range: %c\n", a[6]);
    printf("new a: %s\n", a.append("G").c_str());
    printf("new a2: %s\n", a.c_str());
    a.clear();
    printf("clear a: %s\n", a.c_str());
    return 0;
}