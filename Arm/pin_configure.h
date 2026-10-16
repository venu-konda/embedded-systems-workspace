#define FUNC1 0
#define FUNC2 1
#define FUNC3 2
#define FUNC4 3
#define GPIO_OUT 0xFFFFFFFF
#define GPIO_IN 0x00000000
#define CFGPIN(WORD,PIN,FUNC)\
		WORD=((PIN<16)? \
		(WORD&~(3<<(PIN*2))|(FUNC<<(PIN*2))):\
		(WORD&~(3<<((PIN-16)*2))|(FUNC<<((PIN-16)*2)))) ;



//void PinFn(int PIN,int FUNC);
