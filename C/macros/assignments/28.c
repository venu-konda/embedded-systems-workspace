#define hello 10
void main()
{
 printf("%d",hello);
 #undef hello
 printf("%d",hello);
}
