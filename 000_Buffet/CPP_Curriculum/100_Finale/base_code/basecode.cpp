// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here=
	cout<<"Happy Winter! How big do you want your present to be?"<<endl;
	char a;
	int b;
	int c;
	cout<<"Height: ";
	cin>>b;
	cout<<"length: ";
	cin>>c;
	//
	//int h = 0;
	//for(int v = 0; v<c; v++){
		for(int v = 0; v < c; v = v+1){
		for(int h = 0; h < b; h = h+1){
			gotoxy(7+v , 7+h );	
			cout<<'*';	
			
		}
		}
		char o = ' ';
		for(int v = 1; v < c-1; v = v+1){
		for(int h = 1; h < b-1; h = h+1){
			gotoxy(7+v , 7+h );	
			cout<<o;
		}
		}
		
		
	gotoxy(1,15);	
	cout<<"                            "<<endl;
	cout<<"Lets see what is in the box!"<<endl;
	sleep(3);
	int ran = random(5);
	if (ran==1){
		cout<<"you got a lump of coal"<<endl;
		cout<<"*******"<<endl;
		cout<<" ******"<<endl;
		cout<<" *****"<<endl;
		cout<<"      "<<endl;
	}
	else if (ran == 2){
		cout<<"YOU GOT A NEW PHONE"<<endl;
		cout<<"  *************"<<endl;
		cout<<"  * APPLE  *  *"<<endl;
		cout<<"  * S20       *"<<endl;
		cout<<"  *************"<<endl;
		cout<<"               "<<endl;
	}
	else if (ran == 3){
		cout<<"Santa claus isn't real"<<endl;
	}
		
	else if(ran == 4){
		cout<<"You get a cat!"<<endl;
		cout<<"       *      *"<<endl;
		cout<<"      *  *   * *    "<<endl;
		cout<<"    **************"<<endl;
		cout<<"   *   *      *   *    "<<endl;
		cout<<"    *     ***    *    "<<endl;
	}
	else if(ran == 5){
		cout<<"Its empty"<<endl;
	}
	
	else{
		cout<<"That was someone elses box"<<endl;
	}
	
	gotoxy(1,22);
	cout<<" *     *      *       ****   ****    *       * "<<endl;
	cout<<" *     *     *  *     *   *  *    *   *     *  "<<endl;
	cout<<" *     *    *    *    *    * *     *   *   *    "<<endl;
	cout<<" *     *   *      *   *    * *     *    * *     "<<endl;
	cout<<" *******   ********   * * *  * * *       *     "<<endl;
	cout<<" *     *   *      *   *      *           *    "<<endl;
	cout<<" *     *  *        *  *      *           *    "<<endl;
	cout<<" *     *  *        *  *      *           *    "<<endl;
	cout<<" *     *  *        *  *      *           *    "<<endl;
//
	cout<<" *             * *********  *       * ********* ******  ****   "<<endl;
	cout<<" *             *     *      * *     *     *     *       *   *  "<<endl;
	cout<<" *             *     *      *  *    *     *     *       *    * "<<endl;
	cout<<"  *           *      *      *   *   *     *     *       *    * "<<endl;
	cout<<"  *           *      *      *   *   *     *     ******  * * *  "<<endl;
	cout<<"   *    *    *       *      *    *  *     *     *       **     "<<endl;
	cout<<"   *   * *   *       *      *    *  *     *     *       * *    "<<endl;
	cout<<"    * *   * *        *      *     * *     *     *       *  *   "<<endl;
	cout<<"     *     *     *********  *      *      *     ******  *   *  "<<endl;
	 
	
	
	
	
}

