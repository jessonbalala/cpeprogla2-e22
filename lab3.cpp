#include<iostream>
#include<cstring>
using namespace std;

int myStrCmp(char* str1,char* str2){
  //return strlen(str);
  return strcmp(str1,str2);
}

int main(){
  char str1[100]="hello";
  char str2[100]="Hello";
  
  cout << myStrCmp(str1,str2);
}
