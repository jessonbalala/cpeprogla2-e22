#include<iostream>
#include<cstring>
using namespace std;

int myStrCmp(char* str1,char* str2){
  //return strlen(str);
 switch(strcmp(str1,str2)){
 	
	case-1:
		cout<<"negative";
	case 0:
		cout<<"equal";
	case 1:
		cout<<"positive";
		break;
 }
}

void myStrCpy(char* str1,char* str2){
	strcpy(str1,str2);
}
int main(){
  char str1[100]="hello";
  char str2[100]="Hello";
  
  
  myStrCmp(str1,str2);
  myStrCpy(str1,str2);
  cout << str1;
  
  
}
