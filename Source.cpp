#include<iostream>
using namespace std;

string kangaroo(int x1, int v1, int x2, int v2) {
    int kangaroo1 = x1 + v1;
    int kangaroo2 = x2 + v2;
    int initalv1 = v1;
    int initialv2 = v2;
    if (x2 > x1 && v1 > v2) {
        kangaroo1 = x1 + v1;
        kangaroo2 = x2 + v2;
        while (true) {
            if (kangaroo1 > kangaroo2) {
                return "NO";
            }
            else if (kangaroo1 == kangaroo2) {
                return "YES";
            }
            kangaroo1 = kangaroo1 + initalv1;
            kangaroo2 = kangaroo2 + initialv2;
        }
    }
    else if (x1 > x2 && v2 > v1) {
        kangaroo1 = x1 + v1;
        kangaroo2 = x2 + v2;
        while (true) {
            if (kangaroo2 > kangaroo1) {
                return "NO";
            }
            else if (kangaroo1 == kangaroo2) {
                return "YES";
            }
            kangaroo1 = kangaroo1 + initalv1;
            kangaroo2 = kangaroo2 + initialv2;
        }
    }
    else return "NO";
}

int main() {
    string str = "";
    str = kangaroo(0, 3, 4, 2);
    cout << str << endl;
}