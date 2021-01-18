#include<iostream>
using namespace std;
int main()
{
	int a=15;
	float b= 55.47;
	char c= 'a';
	double d=55526641252;
	bool e= true , f=false;
	cout<< " int = " << a;
	cout<< "\n float = " << b;
	cout<< "\n char = " << c;
	cout<< "\n double = " << d;
	cout<< "\n bool True = " << e;
	cout<< "\n bool False = " << f;
	return 0;
}

//LOCAL & GLOBAL VARIABLE
// int glo =55; //global variable
// void sum(){
// 	int a;
// 	cout<<glo;
// }
// int main (){
// 	int glo =87; //use same variable name in local and global but local variable is more precedence
// 	glo = 98; //change glo value
// 	int loc=77; // local variable
// 	sum(); //function call 
// 	cout<<"\n"<<glo;
// 	cout<<"\n"<<loc;

// }

// int c = 12;
// int main(){
// 	int a, b, c;
// 	cout<<"enter the value of a: "<<endl;
// 	cin>>a;
// 	cout<<"enter the value of b: "<<endl;
// 	cin>>b;
// 	c=a+b;
// 	cout<<"The sum is "<<c<<endl;
// 	cout<<"the global variable is " <<::c;

// 	return 0;
// }