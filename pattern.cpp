#include<iostream>
#include<cmath>
#include <fstream>
using namespace std;

int main(){
	
	
	
	ifstream f("input.txt");
	int i;
	int j;
	int x;
	int number[4]={1,2,4,3};
	

	while (f>>i>>j){
		for(x;i<=j;x++){
			cout<<i<<" ";
			i=i+number[x%4];
			}
		
			
		}

	
	system ("pause > 0");
}
