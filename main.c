#include <stdlib.h>
#include <stdio.h>
#define RAKIB "CSE"
#define COUNTRY "Bangladesh"



void func();
static int count=5;
int main()
{
    while(count--)
{
func();
}
    printf("\n%s\n\n",COUNTRY);

    return EXIT_SUCCESS;
}

void func( void )
{
static int i =  5 ; /* local static variable */
i++;
printf("i is %d and count is %d\n", i, count);
}



/**
int main()
{
    int n, sum = 0, c, value;

    printf("Enter the number of integers you want to add\n");
    scanf("%d",&n);

    printf("Enter %d integers\n",n);

    for(c=1;c<=n;c++){
        scanf("%d",&value);
        sum += value;
    }
    printf("Sum of entered integers = %d\n",sum);

    return EXIT_SUCCESS;
}


int main()
{
    int n,i,c,a=1;

    printf("Type the number of rows of Floyd's triangle to print: \n");
    scanf("%d",&n);

    for(i=0;i<=n;i++){
        for(c=0;c<=i;c++){
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
    getch();
    return 0;
}






int main()
{
    int n;

    printf("Type a Digit: \n");
    scanf("%d",&n);

    if((n/2)*2==n){
        printf("Even");
    }else{
    printf("Odd");
    }

    return 0;
}
*two


#include <stdio.h>
#include <stdlib.h>





int main()
{
    char pass[10],user[15],ch;
    int i;

    printf("Type your username: ");
    gets(user);

    printf("Enter your password: ");


    for(i=0;i<5;i++){
        ch=getch();
        pass[i]=ch;
        ch='*';
        printf("%c",ch);
    }

    pass[i]='\0';


    printf("\n\n\nUsername : %s",user);
    printf("\nPassword: %s\n\n",pass);

    return 0;
}

 */

