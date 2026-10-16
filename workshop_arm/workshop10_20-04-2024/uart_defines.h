#define TX 0
#define RX 1
#define FOSC 12000000
#define CCLK (FOSC*5)
#define PCLK (CCLK/4)
#define BAUD 19200
#define LOADVAL ((PCLK)/(16*BAUD))

#define WORD_LEN 3
#define DLAB_BIT 7
#define TEMT_BIT 6
#define RDR_BIT 0
 
#define READBIT(DATA,BIT) ((DATA>>BIT)&1)
#define CLRBIT(DATA,BIT) (DATA=(DATA&~(1<<BIT)))
typedef unsigned char u8;
typedef signed char s8;
typedef signed short int s16;
typedef unsigned int u32;
typedef signed int s32;

void Init_UART(void);
void UART_Tx(char sByte);
char UART_Rx(void);
int UART_readNum(void);
void UART_puts(s8 *s);
void UART_U32(u32 n);
void UART_S32(s32 n);





