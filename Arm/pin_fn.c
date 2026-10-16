 #include<LPC21xx.h>
 int main()
 {	//	int PINSELO;
 	  //	PINSEL=0<<0;
	//	PINSEL2=1<<0;	
	//	PINSEL2=2<<0;

	//	PINSEL2=3<<0;
	PINSEL1=PINSEL1&~((3<<0))|(2<<0);
		while(1);
 }
