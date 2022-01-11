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
	int x;
	int y;
	
	//
	cout<<"Pick a Symbol: ";
	cin>>a;
	cout<<"Enter line length horozantally: ";
	cin>>b;
	cout<<"Enter line length Verically: ";
	cin>>c;
	cout<<"Starting x-coor: ";
	cin>>x;
	cout<<"Starting y-coor: ";
	cin>>y;
	//int h = 0;
	//for(int v = 0; v<c; v++){
		for(int v = 0; v < c; v = v+1){
		for(int h = 0; h < b; h = h+1){
			gotoxy(x+h , y+v );	
			cout<<a;	
			
		}
		}
		char o = ' ';
		for(int v = 1; v < c-1; v = v+1){
		for(int h = 1; h < b-1; h = h+1){
			gotoxy(x+h , y+v );	
			cout<<o;
		}
		}
	
}
