// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	char a;
	int b;
	int c;
	int x;
	int y;
	
	
	cout<<"Pick a Symbol: ";
	cin>>a;
	cout<<"Enter line length horozantally: ";
	cin>>b;
	cout<<"Enter line length Verically: ";
	cin>>c;
	cout<<"What x corrdanate do you want the box to start at: ";
	cin>>x;
	cout<<"y corrdanate: ";
	cin>>y;
	
	//
	//int h = 0;
	//for(int v = 0; v<c; v++){
		for(int v = 0; v < c; v = v+1){
		for(int h = 0; h < b; h = h+1){
			gotoxy(x+h , y+v );	
			cout<<a;	
			
		}
		}
}