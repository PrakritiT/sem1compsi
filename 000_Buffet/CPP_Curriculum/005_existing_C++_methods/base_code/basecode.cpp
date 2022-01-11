// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	//cout<<"yeah we are starting c++"<<endl;
	char a;
	int b;
	char c;
	//
	cout<<"Pick a Symbol: ";
	cin>>a;
	cout<<"Enter line length: ";
	cin>>b;
	cout<<"Horozantal or Vertical or Diagonal(Type H or V or D): ";
	cin>>c;
	//
	if(c == 'H')
	{	
		int h=2;
		while(true){
			cout<<a;
			if (h>b){
				break;
			}
			h = h + 1;
		}
		
	}
	if(c == 'V')
	{	
		int V=2;
		while(true){
			cout<<a<<endl;
			if (V>b){
				break;
			}
			V = V + 1;
		}
		
	}
	if(c == 'D')
	{	
		int D= 2;
		while (true)
		{
		gotoxy(b+5 , b+5);
		cout<<a<<endl;
		if (D>b){
			break;}
		b = b - 1;
		}
	}
	
}
