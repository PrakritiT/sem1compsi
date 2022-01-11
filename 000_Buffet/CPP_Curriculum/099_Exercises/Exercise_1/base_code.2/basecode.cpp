// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	//cout<<"yeah we are starting c++"<<endl;
	char s;
	cout<<"What character do you want to represent a snowflake: ";
	cin>>s;
	//
	for(int h = 0; h < 6; h = h+1){
			gotoxy(3 , 3+h );
			cout<<s<<endl;
			sleep(1);
			gotoxy(3 , 3+h );
			cout<<' '<<endl;
	}
	
			
	}