// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	
	int bx;
	int by;
	int ex;
	int ey;
	//
	cout<<"Hello user! this program is designed to draw a line. Please follow instructions."<<endl;
	cout<<"What x coordanate would you like your line to start at?"<<endl;
	cin>>bx;
	cout<<"What y coordanate would you like your line to start at?"<<endl;
	cin>>by;
	cout<<"What x corrdanate would you like your line to end at? If you want a vertical line, keep x corrdanate the same."<<endl;
	cin>>ex;
	cout<<"What y corrdanate would you like your line to end at? If you want a horozantal line, keep y corrdanate the same"<<endl;
	cin>>ey;
	
		int i = 0;
		while (true){
		gotoxy(bx+i,by+i);
		cout<<'*'<<endl;
			if(i>ex){
				break;
			}
		i = i +1;
			
		}	
}
