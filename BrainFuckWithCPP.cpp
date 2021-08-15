#include <iostream>
char temp;//temp指的是输入的数据。
int pa[50];
int* p;//指的纸带；
void mmain();
using namespace std;
int main() {
    p = &pa[1];
    mmain();
}
void mmain() {
    char a;
    char temp;//temp指的是输入的数据.
    cin >> temp;
    switch (temp) {
    case '+':*p += 1; mmain(); break;
    case '-':*p -= 1; mmain(); break;
    case '<':p--; mmain(); break;
    case '>':p++; mmain(); break;
    case '[': {
        if (*p == 0)p--;
        mmain();
        break;
    }
    case ']': {
        if (*p == 0)p++;
        mmain();
        break;
    }
    case ',':cin >> a; *p = int(a); mmain(); break;
    case '.':cout << char(*p); mmain(); break;
    default:mmain(); break;
    }
}
