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
	cout<<"Pick a Symbol: ";
	cin>>a;
	cout<<"Enter line length: ";
	cin>>b;
	cout<<"Horozantal or Vertical(Type H or V): ";
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
	
	
}
