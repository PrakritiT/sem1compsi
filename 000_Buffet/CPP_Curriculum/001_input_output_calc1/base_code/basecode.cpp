// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	cout<<"This is a multiplacation calculator"<<endl;
	cout<<"give me a number"<<endl;
	int num1;
	cin>>num1;
	// 
	cout<<"give me another number"<<endl;
	int num2;
	cin>>num2;
	cout<<"your numbers multipled together equals: ";
	cout<<num1*num2;
}
