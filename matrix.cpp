#include<iostream>
using namespace std;
int main(){
	int A[3][3],B[3][3];
	cout <<"Enter the value of matrix A "<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++)
		{
			cin>>A[i][j];
		}
	}
	cout <<"Enter the value of matrix B "<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++)
		{
			cin>>B[i][j];
		}
	}
	
	cout <<endl<<"Addition of matrix A and B "<<endl;
	for (int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout <<A[i][j]+B[i][j] <<" ";
		}
		cout <<endl;
	}
	
	cout <<endl<<"Substraction of matrix A and B "<<endl;
	for (int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout <<A[i][j]-B[i][j] <<" ";
		}
		cout <<endl;
	}
	
	cout <<endl<<"Multiplication of matrix A and B "<<endl;
	for (int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout <<A[i][j]*B[i][j] <<" ";
		}
		cout <<endl;
	}
	return 0;
}
