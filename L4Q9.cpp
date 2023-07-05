#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main() {
  char s1[100];
  fgets(s1,100, stdin);
  char s2[100], *ps;
  cin.get(s2,100);
  ps=strstr(s1,s2);
  int s=0;
  if (ps!=NULL){
    s+=1;
   ps = strstr(ps + strlen(s2)+1, s2);
  while(ps!=NULL){
    s+=1;
    ps = strstr(ps + strlen(s2)+1, s2);
  }
  }cout << s;
}
