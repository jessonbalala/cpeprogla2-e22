//Balala
//problem 1
#include <iostream>
using namespace std;

struct Name{
       char fullName[30];
};

struct Student{
       int id;
       Name name;
       double quiz[3];       
};

void newLine();

int main(){
    Student stud;
    double sum;
    cout << "Enter student records: \n";
    cout << "ID: ";
    cin >> stud.id;
    newLine();
    cout << "Name: ";
    cin.getline(stud.name.fullName, 29);
   
    for(int i=0; i<3; i++){
            cout << "Quiz "<< i+1 << ": ";
            cin >> stud.quiz[i]; 
			sum += stud.quiz[i]/3;       
    }
    if(sum>=75){
		cout << "\n\n";
    	cout << "Display student records\n";
    	cout << "ID: " << stud.id << endl;
    	cout << "Name: " << stud.name.fullName << endl;
    	cout << "Grades: "<<sum<<endl;
    	cout << "Remarks :Passed"<<endl;    
    }
	
	else{
		 cout << "\n\n";
    cout << "Display student records\n";
    cout << "ID: " << stud.id << endl;
    cout << "First Name: " << stud.name.fullName << endl;
    cout << "Grades: "<<sum<<endl;
    cout << "Remarks: Failed"<<endl;
    }
    
    
    system("pause > 0");
    return 0;   
}
void newLine(){
     char s;
     do{cin.get(s);}while(s!='\n');     
}

