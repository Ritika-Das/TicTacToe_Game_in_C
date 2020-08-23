#include <stdio.h>

void initial(char[]);
void display(char[]);
void assign(char[],n,char);

int main()
{
    char arr[3][3],choice;
    int n;
    printf("Welcome to Noughts and Crosses: Let's proceed with the nought player!");
    initial(arr);
    printf("Choose your block:");
    scanf("%d",&n);
    choice='O';
    assign(arr,n,choice);
    
}

void initial(char arr[])
{
    int i,j;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            arr[i][j]=' ';
        }
    }
}

void assign(char arr[],int n,char choice)
{
    if((n==1)&&(arr[1][1]==' '))
        arr[1][1]=choice;
    if((n==2)&&(arr[1][2]==' '))
        arr[1][2]=choice;
    if((n==3)&&(arr[1][3]==' '))
        arr[1][3]=choice;
    if((n==4)&&(arr[2][1]==' '))
        arr[2][1]=choice;
    if((n==5)&&(arr[2][2]==' '))
        arr[2][2]=choice;
    if((n==6)&&(arr[2][3]==' '))
        arr[2][3]=choice;
}

void display(char arr[])
{
    printf(" %c | %c | %c \n",arr[1][1],arr[1][2],arr[1][3]);
    printf("--------------\n");
    printf(" %c | %c | %c \n",arr[2][1],arr[2][2],arr[2][3]);
    printf("--------------\n");
    printf(" %c | %c | %c \n",arr[3][1],arr[3][2],arr[3][3]);
}
