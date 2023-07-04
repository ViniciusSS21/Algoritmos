#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main() {
   //4) programa que leia uma string e a imprima de trás para a frente:
   string a;
   getline(cin, a);
   for (int i = a.size() - 1; i >= 0; --i) {
   cout << a[i];
    }
   cout << endl;
}
