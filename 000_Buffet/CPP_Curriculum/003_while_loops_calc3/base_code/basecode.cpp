// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	//
	//
	//int x = 0;
	//char y = 'x';
	//while(true){
	//	cout<<"youve been gnomed!";
	//	cin>>y;
	//	if(y == 'q'){
	//		cout<<"HELP";
	//		break;
	//	}
	//	if (x == 100){
	//		break;
	//	}
	//	x = x + 1;
	//	
	//}
//
//}
	int x = 0;
	cout<<"This is a calculator. You will be asked to enter your first number, operation(-,+,/,*), and your second number."<<endl;

	while(true){
		cout<<"First number:";
		int num1;
		char sym;
		int num2;
		cin>>num1;
		cout<<"Operation:";
		cin>>sym;
		cout<<"Second number:";
		cin>>num2;
		if(sym == '+')
	{
		cout<<(num1+num2)<<endl;
	}
	 else if(sym=='-')
	{
		cout<<(num1-num2)<<endl;
	}
	 else if(sym =='*')
	{
		cout<<(num1*num2)<<endl;
	}
	 else if(sym == '/')
	{
		cout<<(num1/num2)<<endl;
	}
	else{
		
		cout<<"If you didnt get an answer, you did not follow the instructions."<<endl;
	}
		int q;	
		cout<<"Do you wish to peform another operation? Select 1 if you want to continue. Select 2 if you want to stop."<<endl;
		cin>>q;
		if(q == 2){
			break;
		}
	
	}
	
	
}
	