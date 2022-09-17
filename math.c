#include<stdio.h>
#include<math.h>

int main()
{
    int no;
    int x;
    int fno =1;
    printf("Enter a No.");
    scanf("%d",&no);

    
    while(no>0)
    {
        x = no%10;
        fno = fno*10+x;
        no = no/10;
    }

    printf("%d \n",fno);

    return 0;
}