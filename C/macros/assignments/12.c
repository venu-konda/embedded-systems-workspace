#define a 10
int main()
{
 #ifdef a
printf("VECTOR ");
 #endif
 #ifndef a
 printf("INDIA\n");
 #else
 printf("HYDERABAD\n");
 #endif
 return 0;
}
