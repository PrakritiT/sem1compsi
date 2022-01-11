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
	cout<< s<<"   "<<s<<"         "<<s<<"   "<<s<<"     "<<s<<"   "<<s<<"     "<<s <<endl;
	
	sleep(1);
	cout<< s<<"   "<<s<<"         "<<s<<"   "<<s<<"   "<<s<<"     "<<s<<"   "<<s <<endl;
	sleep(1.2);
	cout<< s<<"   "<<s<<" "<<s<<" "<<s<<"   "<<s<<"   "<<s<<"    "<<s<<"   "<<s <<endl;
	sleep(1.4);
	cout<< s<<"   "<<s<<"         "<<s<<"   "<<s<<"   "<<s<<"   "<<s<<"     "<<s <<endl;
	sleep(1.6);
	cout<< s<<"   "<<s<<"         "<<s<<"   "<<s<<""<<s<<""<<s<<""<<s <<endl;
}