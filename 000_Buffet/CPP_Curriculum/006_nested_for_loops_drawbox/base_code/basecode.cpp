// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	//cout<<"yeah we are starting c++"<<endl;
	char a;
	int b;
	int c;
	//
	cout<<"Pick a Symbol: ";
	cin>>a;
	cout<<"Enter line length horozantally: ";
	cin>>b;
	cout<<"Enter line length Verically: ";
	cin>>c;
	//
	//int h = 0;
	//for(int v = 0; v<c; v++){
		for(int v = 0; v < c; v = v+1){
		for(int h = 0; h < b; h = h+1){
			gotoxy(6+h , 6+v );	
			cout<<a;	
			
		}
		}
	
	//for int var = 0, var < 5, i++
	//gotoxy(3+1,6)
	//cout
	
}
