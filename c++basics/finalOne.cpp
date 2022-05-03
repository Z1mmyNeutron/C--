 
#include<stdio.h>
void red() { printf("\033[1;31m"); }

int main()
{
    int count=1;
    int ans=1;
    int a;
while(1)
{
    red();
    printf( "\n enter an integer: ");
    scanf("%d", &a);
    if(count == 3) break;
    if(a<0) count++;
    else{
        ans = ans*a;
        count =1;
        }
    }
    printf( " answer is given by %d", ans);

    return 0;
}