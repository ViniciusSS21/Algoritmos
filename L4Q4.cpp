#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main() {
   string a;
   getline(cin, a);
   for (int i = a.size() - 1; i >= 0; --i) {
   cout << a[i];
    }
   cout << endl;
}