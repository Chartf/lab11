#include<iostream>
using namespace std;

int main(){
	int count[5] = {};
	int i=0;
	char grade;
	cout << "Please input grade of each student (A-F) or input 0 to exit." << endl;
	do{
		i++;
		cout << "Student [" << i << "]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade=='0'){
			break;
		}
		if(grade == 'A'){
			count[0]++;
		} 
		else if(grade == 'B'){
			count[1]++;
		} 
		else if(grade == 'C'){ 
			count[2]++;
		} 
		else if(grade == 'D'){ 
			count[3]++;
		}
		else if(grade == 'F'){ 
			count[4]++;
		} else{ cout << "Wrong input. Please input again." << endl;
			i--;
		} 
	}while(true);
	
	
	cout << "In total "<< i-1 <<" students." << endl;
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";	
	cout << "F = " << count[4] ;
	//	and so on ... for grade = C, D, F	
	
	return 0;
}
