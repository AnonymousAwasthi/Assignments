#include<stdio.h>
#include<stdlib.h>
void printDaysInMonth();
void dayMessage();
void p4();
void p6();
void p7();
void p8();
void p9();
void p10();
int main()
{
    p10();
    printf("\n");
    return 0;
}
void p10()
{
    int choice,a,b,c,L;
    while(1)
    {
        printf("\n1. LCM");
        printf("\n2. Sum of Digits");
        printf("\n3. Volume of Cuboid");
        printf("\n4. Check Prime");
        printf("\n5. Exit");
        printf("\nEnter your chocie");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("enter two numbers");
                scanf("%d%d",&a,&b);
                for(L=a>b?a:b;L<=a*b;L++)
                {
                    if(L%a==0&&L%b==0)
                    {
                        printf("LCM is %d",L);
                        break;
                    }
                }
                break;
            case 2:
                printf("Enter a number");
                scanf("%d",&a);
                b=0;
                while(a)
                {
                    b=b+a%10;
                    a/=10;
                }
                printf("Sum is %d",b);
                break;

            case 3:
                printf("enter lengths of sides of a coboid");
                scanf("%d%d%d",&a,&b,&c);
                printf("Volume is %d",a*b*c);
                break;
            case 4:
                printf("Enter a number");
                scanf("%d",&a);
                for(b=2;b<a;b++)
                    if(a%b==0)
                        break;
                if(a==b)
                    printf("%d is Prime",a);
                else
                    printf("%d is not a Prime",a);
                break;
            case 5:
                exit(0);
            default:
                printf("\nInvalid Chocie");

        }
    }
}
void p9()
{
    char x;
    printf("Enter a character");
    scanf("%c",&x);
    switch(x)
    {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            printf("\nVowel\n");
            break;
        case 'b' ... 'd': case 'f' ... 'h':
        case 'j' ... 'n': case 'p' ... 't':
        case 'v' ... 'z': case 'B' ... 'D': 
        case 'F' ... 'H': case 'J' ... 'N': 
        case 'P' ... 'T': case 'V' ... 'Z':  
            printf("\nConsonant\n");
            break;
        default:
            printf("\nSpecial Character\n");
    }
}
void p8()
{
    char x;
    printf("Enter a character");
    scanf("%c",&x);
    switch(x)
    {
        case 'a' ... 'z':
            printf("\nLowercase Character");
            break;
        case 'A' ... 'Z':
            printf("\n Uppercase Character");
            break;
        default:
            printf("\nSpecial Character");
    }
}
void p7()
{
    int choice,x,f;
    while(1)
    {
        printf("\n1. Factorial");
        printf("\n2. Even Odd");
        printf("\n3. Area of Circle");
        printf("\n4. Sum of first N natural numbers");
        printf("\n5. Exit");
        printf("\nEnter your chocie");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("enter a number");
                scanf("%d",&x);
                f=1;
                while(x)
                {
                    f=f*x;
                    x--;
                }
                printf("\nFactorial is %d",f);
                break;
            case 2:
                printf("Enter a number");
                scanf("%d",&x);
                x&1?printf("Odd"):printf("Even");
                break;

            case 3:
                printf("entr radius of a circle");
                scanf("%d",&x);
                printf("Area is %f",3.14*x*x);
                break;
            case 4:
                printf("Enter a number");
                scanf("%d",&x);
                f=0;
                while(x)
                {
                    f=f+x;
                    x--;
                }
                printf("\nSum is %d",f);
                break;
            case 5:
                exit(0);
            default:
                printf("\nInvalid Chocie");

        }
    }
}
void p6()
{
    int marks;
    printf("Enter marks: ");
    scanf("%d",&marks);
    switch(marks)
    {
        case 90 ... 100:
            printf("\nGrade A");
            break;
        case 80 ... 89:
            printf("\nGrade B");
            break;
        case 70 ... 79:
            printf("\nGrade C");
            break;
        case 60 ... 69:
            printf("\nGrade D");
            break;
        case 50 ... 59:
            printf("\nGrade E");
            break;
        case 0 ... 49:
            printf("\nGrade F");
            break;
        default:
            printf("Invalid Marks");
    }
}
void p4()
{
    int choice, a,b,c;
    while(1)
    {
        printf("\n1. Check isosceles triangle");
        printf("\n2. Check right angled triangle");
        printf("\n3. Check equilateral triangle");
        printf("\n4. Exit");
        printf("Enter your chocie");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter length of sides of a triangle");
                scanf("%d%d%d",&a,&b,&c);
                if(a+b>c && b+c>a && a+c>b)
                    if(a==b||a==c||b==c)
                        printf("\nIt is an isosceles triangle");
                    else
                        printf("\nIt is not an isosceles triangle");
                else
                    printf("\nNot a valid Triangle");        
                break;
            case 2:
                printf("Enter length of sides of a triangle");
                scanf("%d%d%d",&a,&b,&c);
                if(a+b>c && b+c>a && a+c>b)
                    if(a*a+b*b==c*c || a*a+c*c==b*b ||b*b+c*c==a*a)
                        printf("\nIt is a right angled triangle");
                    else
                        printf("\nIt is not a right angled triangle");
                else
                  printf("\nNot a valid Triangle");          
                break;
            case 3:
                printf("Enter length of sides of a triangle");
                scanf("%d%d%d",&a,&b,&c);
                if(a+b>c && b+c>a && a+c>b)
                    if(a==b&&a==c)
                        printf("\nIt is an equilateral triangle");
                    else
                        printf("\nIt is not an equilateral triangle");
                else
                  printf("\nNot a valid Triangle");          
                break;
            case 4:
                exit(0);
            default:
                printf("\nInvalid Choice, retry");
        }
    }
}
void dayMessage()
{
    int day;
    printf("Enter day number (Mon-1)");
    scanf("%d",&day);
    switch(day)
    {
        case 1:
            printf("Monday is a new beginning");
            break;
        case 2:
            printf("Jai Bajrangbali");
            break;
        case 3:
            printf("Wonderful Wednesday");
            break;
        case 4:
            printf("Jio Ji bhar ke");
            break;
        case 5:
            printf("Thank God Its Friday");
            break;
        case 6:
            printf("Aaj tel chadhana hai");
            break;
        case 7:
            printf("Enjoy Holiday");
            break;
        default:
            printf("Invalid day number");
    }
}
void printDaysInMonth()
{
    int month;
    printf("Enter month number");
    scanf("%d",&month);
    switch(month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31 Days");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30 Days");
            break;
        case 2:
            printf("28 or 29 days");
            break;
        default:
            printf("Invalid Month number");
    }

}