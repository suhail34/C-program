#include <stdio.h>
int a;
int func()
{
    static int a = 0;
    printf("%d\n", a);
    a++;
    return 0;
}
int main()
{
    func();
    func();
    func();
    func();
    func();
    func();
    return 0;
}