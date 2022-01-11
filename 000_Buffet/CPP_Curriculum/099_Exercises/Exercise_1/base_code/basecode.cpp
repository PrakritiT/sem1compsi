// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	//cout<<"yeah we are starting c++"<<endl;
	int x = 5;
	while (x <=25)
	{
		cout<<x;
		
		x=x+1;
	}
	//
	int y = 15;
	while (true)
	{
		cout<<y;
		if (y==5){
			break;
		}
		y=y-1;
	}
	cout<<endl;
	for(int i = 5; i <= 25; i = i+1){
		cout<< i;
	}
	cout<<endl;
	for(int j = 15; j >= 5; j = j-1){
		cout<< j;
	}
}
