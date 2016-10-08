#include<iostream>
#include<cmath>
#include <fstream>
using namespace std;

int main(){
	
	int  x ,sum=0;
	ifstream f("input.txt");
	int number;
	
	while (f>>number){
		
		for(x=0;x<number;x++)
      		if(x%3==0 || x%5==0)
         		sum=sum+x;
  	cout<<sum;
	     
	}
	system ("pause > 0");

}
