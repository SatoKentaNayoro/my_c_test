//
// Created by Asahi on 2025/9/10.
//
#include <string>
#include <iostream>
#include <algorithm>

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
    a.pop_back();
    printf("pop_back a: %s\n", a.c_str());
    reverse(a.begin(), a.end());
    printf("reverse a: %s\n", a.c_str());
    transform(a.begin(), a.end(), a.begin(), [](unsigned char c){
      return tolower(c);
    });
    printf("tolower a: %s\n", a.c_str());
    a += 's';
    printf("after += s: %s\n", a.c_str());
    a.clear();
    printf("clear a: %s\n", a.c_str());
    return 0;
}