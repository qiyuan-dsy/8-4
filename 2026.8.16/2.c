#include<stdio.h>
void func()
{
    int a;
    a=100;
    printf("a in func %d\n", a);

}
int main()
{
    int a=0;
    printf("a in main %d\n", a);
    func();
    printf("a in main %d\n", a);
    return 0;
}