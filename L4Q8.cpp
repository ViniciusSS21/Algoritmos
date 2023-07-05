#include <iostream>
#include <cstring>
#include <string>
#include <cstdlib>
using namespace std;
//aluno:Vinícius Santos da Silva
//turma:IF23
//8) Construa um programa que leia duas strings do teclado. Imprima uma mensagem informando se a segunda string lida está contida dentro da primeira.
int main() {
  
string s1;
getline(cin,s1);
string s2;
getline(cin,s2);
auto s = s1.find(s2); 
if (s != string::npos){ 
cout << "encontrada "<< endl;
}else
cout << "não encontrada";
  
   
}
