# define a 10
void main()
{
 printf("%d..", a);
 foo();
 printf("%d", a);
}
void foo()
{
 #undef a
 #define a 50
}
