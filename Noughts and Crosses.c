#include <stdio.h>

int main()
{
    char arr[3][3];
    printf("Welcome to Noughts and Crosses: Let's proceed with the nought player!");
    printf("Choose your block:");
    scanf("%d",&n);
    if((n==1)&&(arr[1][1]==' '))
        arr[1][1]='O';
    if((n==2)&&(arr[1][2]==' '))
        arr[1][2]='O';
    if((n==3)&&(arr[1][3]==' '))
        arr[1][3]='O';
    if((n==4)&&(arr[2][1]==' '))
        arr[2][1]='O';
}

void initial(char arr)
{
    int i,j;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            
        }
    }
}

void display(char arr)
{
    printf(" %c | %c | %c \n",arr[1][1],arr[1][2],arr[1][3]);
    printf("--------------\n");
    printf(" %c | %c | %c \n",arr[2][1],arr[2][2],arr[2][3]);
    printf("--------------\n");
    printf(" %c | %c | %c \n",arr[3][1],arr[3][2],arr[3][3]);
}
