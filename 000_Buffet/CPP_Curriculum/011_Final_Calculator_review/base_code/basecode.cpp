// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));

	int x = 0;
	char box;
	cout<<"This is a calculator. You will be asked to enter your first number, operation(-,+,/,*), and your second number."<<endl;

	while(true){
		cout<<"First number:";
		int num1;
		char sym;
		int num2;
		int ans;
		cin>>num1;
		cout<<"Operation:";
		cin>>sym;
		cout<<"Second number:";
		cin>>num2;
		if(sym == '+')
	{
		int ans = num1+num2;
	}
	 else if(sym=='-')
	{
		int ans = num1-num2;
	}
	 else if(sym =='*')
	{
		int ans = num1*num2;
	}
	 else if(sym == '/')
	{
		int ans = num1/num2;
	}
	char b;
	cout<<"What symbol do you want to box your answer?  ";
	cin>>b;
	for(int v = 0; v < 8; v = v+1){
		for(int h = 0; h < 20; h = h+1){
			gotoxy(8+h , 8+v );	
			cout<<b;
	}
	}
	char o = ' ';
		for(int v = 1; v < 7; v = v+1){
		for(int h = 1; h < 19; h = h+1){
			gotoxy(8+h , 8+v);	
			cout<<o;
		}
		}
			gotoxy(12,12);
			cout<<ans;
}
}