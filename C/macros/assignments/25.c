void fun()
{
#define VAL 100
printf("%d\n",VAL);
}
int main()
{
#define VAL 200
fun();
printf("%d\n",VAL);
}
