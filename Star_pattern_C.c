#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include <stdlib.h>

void SolidSquare()
{
    system("CLS"); // clearing screen
    printf("\n\n\t======== Solid Square ========\n\n");

    int side;
    printf("Enter the lenght of sides:  ");
    scanf("%d", &side);

    printf("\n");

    for (int i = 0; i < side; i++)
    {
        for (int j = 0; j < side; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    printf("\n\n Press an key to close this window:"); // freezing screen till next input
    getch();
}

void HollowSquare()
{
    system("CLS"); // clearing screen
    printf("\n\n\t======== Hollow Square ========\n\n");

    int side;
    printf("Enter the lenght of sides:  ");
    scanf("%d", &side);

    int space = side - 2;

    printf("\n");

    for (int i = 0; i < side; i++)
    {
        if (i == 0 || i == (side-1))
        {
            for (int j = 0; j < side; j++)
            {
                printf("* ");
            }
        }
        else
        {
            printf("* ");
            for (int k = 0; k < space; k++)
            {
                printf("  ");
            }
            printf("* ");
        }

        printf("\n");
    }

    printf("\n\n Press an key to close this window:"); // freezing screen till next input
    getch();
}

void Diamond()
{
    system("CLS"); // clearing screen
    printf("\n\n\t======== Diamond ========\n\n");

    int height;

    printf("Enter the length of sides of the diamond:  ");
    scanf("%d", &height);

    printf("\n");

    for (int i = 1; i <= height; i++)
    {
        for (int j = 0; j < (height - i); j++)
        {
            printf(" ");
        }

        for (int k = 0; k < i; k++)
        {
            printf("* ");
        }
        
        printf("\n");
    }

    for (int i = height; i > 0; i--)
    {
        for (int j = 0; j < (height - i); j++)
        {
            printf(" ");
        }

        for (int k = 0; k < i; k++)
        {
            printf("* ");
        }
        
        printf("\n");
    }   

    printf("\n\n Press an key to close this window:"); // freezing screen till next input
    getch();
}

void Pyramid()
{
    system("CLS"); // clearing screen
    printf("\n\n\t======== Pyramid ========\n\n");

    int base;
    printf("Enter the lenght of base:  ");
    scanf("%d", &base);

    printf("\n");

    for (int i = 1; i <= base; i++)
    {
        for (int j = 0; j < (base - i); j++)
        {
            printf(" ");
        }

        for (int k = 0; k < i; k++)
        {
            printf("* ");
        }
        
        printf("\n");
    }


    printf("\n\n Press an key to close this window:"); // freezing screen till next input
    getch();
}

void UpsideDownPyramid()
{
    system("CLS"); // clearing screen
    printf("\n\n\t======== Upside Down Pyramid ========\n\n");

     int base;
    printf("Enter the lenght of base:  ");
    scanf("%d", &base);

    printf("\n");

    for (int i = base; i > 0; i--)
    {
        for (int j = 0; j < (base - i); j++)
        {
            printf(" ");
        }

        for (int k = 0; k < i; k++)
        {
            printf("* ");
        }
        
        printf("\n");
    }

    printf("\n\n Press an key to close this window:"); // freezing screen till next input
    getch();
}

void RightPointingTriangle()
{
    system("CLS"); // clearing screen
    printf("\n\n\t======== Right Pointing Triangle ========\n\n");

    int length;
    printf("Enter the lenght of the triangle:  ");
    scanf("%d", &length);

    int row = length + (length - 1);
    int l = length - 1;

    printf("\n");

    for (int i = 1; i <= row ; i++)
    {      
        if (i <= length)
        {
            for (int j = 0; j < i; j++)
            {
                printf("*");
            }
        }
        else
        {
            for (int k = 1; k <= l; k++)
            {
                printf("*");
            }
            l--;
        }
        printf("\n");
    }
    

    printf("\n\n Press an key to close this window:"); // freezing screen till next input
    getch();
}

void LeftPointingTriangle()
{
    system("CLS"); // clearing screen
    printf("\n\n\t======== Left Pointing Triangle ========\n\n");

    int length;
    printf("Enter the lenght of the triangle:  ");
    scanf("%d", &length);

    int row = length + (length - 1);
    int m = length - 1;

    printf("\n");

    for (int i = 1; i <= row ; i++)
    {
        if (i <= length)
        {
            for (int j = 0; j < (length - i); j++)
            {
                printf(" ");
            }
        }
        else
        {
            for (int j = 0; j < (i - length); j++)
            {
                printf(" ");
            }
            
        }

        if (i <= length)
        {
            for (int k = 0; k < i; k++)
            {
                printf("*");
            }  
        }
        else
        {
            for (int l = 1; l <= m; l++)
            {
                printf("*");
            }
            m--;
        }
        printf("\n");
    }

    printf("\n\n Press an key to close this window:"); // freezing screen till next input
    getch();
}

void BowTie()
{
    system("CLS"); // clearing screen
    printf("\n\n\t======== Bow Tie ========\n\n");

    int size;
    printf("Enter the length of bow tie:  ");
    scanf("%d", &size);

    size = size/2;
    int spaces = 2 * size - 2;

    for (int i = 1; i <= size; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        for (int j = 0; j < spaces; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
        spaces -=2;
    }
    spaces = 0;

    for (int i = size; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        for (int j = 0; j < spaces; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
        spaces +=2;
    }

    printf("\n\n Press an key to close this window:"); // freezing screen till next input
    getch();
}

void Frame()
{
    system("CLS"); // clearing screen
    printf("\n\n\t======== Frame ========\n\n");

    int size, i, j;
    printf("Enter the size:  ");
    scanf("%d", &size);

    printf("\n");

    for ( i = 1; i <= size; i++)
    {
        for ( j = i; j <= size; j++)
        {
            printf("*");
        }
        for ( j = 1; j <= (2*i-2); j++)
        {
            printf(" ");
        }
        for ( j = i; j <= size; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for ( i = 1; i <= size; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            printf("*");
        }
        for ( j = (2*i-2); j < (2*size-2); j++)
        {
            printf(" ");
        }
        for ( j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n\n Press an key to close this window:"); // freezing screen till next input
    getch();
}

void AdditionSign()
{
    system("CLS"); // clearing screen
    printf("\n\n\t======== Addition Sign ========\n\n");

    int length;
    printf("Enter the length of the addition sign:  ");
    scanf("%d", &length);

    printf("\n");

    for (int i = 1; i <= 2*length-1; i++)
    {
        for (int j = 1; j <= 2*length-1; j++)
        {
            if (i == length || j == length*2-1)
            {
                printf("* ");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    
    printf("\n\n Press an key to close this window:"); // freezing screen till next input
    getch();
}

void CrossSign()
{
    system("CLS"); // clearing screen
    printf("\n\n\t======== Cross Sign ========\n\n");

    int n,m;
    printf("Enter the size of cross:  ");
    scanf("%d", &n);

    m = 2*n-1;
    printf("\n");

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i == j || j == (m-i+1))
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    

    printf("\n\n Press an key to close this window:"); // freezing screen till next input
    getch();
}

void SolidCircle()
{
    system("CLS"); // clearing screen
    printf("\n\n\t======== Solid Circle ========\n\n");

    printf("\n\n Press an key to close this window:"); // freezing screen till next input
    getch();
}

void Heart()
{
    system("CLS"); // clearing screen
    printf("\n\n\t======== Heart ========\n\n");

    int height,i,j;
    printf("Enter the height of the heart:  ");
    scanf("%d", &height);

    printf("\n");

    for (i = height/2; i <= height; i+=2)
    {
        for (j = i; j < height-1; j+=2)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        for (j = i; j <= height-1; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (i = height; i >= 1; i--)
    {
        for (j = i; j < height; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= (i*2)-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    printf("\n\n Press an key to close this window:"); // freezing screen till next input
    getch();
}

int main()
{
    int opt;
    bool Run = true;

    while (Run)
    {
        system("CLS");
        printf("\n\n\t======== Welcome to Star patterns ========\n");
        printf("\n choose which star pattern to print.\n 1. Solid square \n 2. Hollow square \n 3. Diamond \n 4. Pyramid \n 5. Upside-down pyramid \n 6. Right pointing triangle \n 7. Left pointing triangle \n 8. Bow tie \n 9. Frame \n 10. Addition sign \n 11. Cross sign \n 12. Solid circle \n 13. Heart \n 14. Exit \n choose your opinion:  ");
        scanf("%d", &opt);

        switch (opt)
        {
        case 1:
            SolidSquare();
            break;

        case 2:
            HollowSquare();
            break;

        case 3:
            Diamond();
            break;

        case 4:
            Pyramid();
            break;

        case 5:
            UpsideDownPyramid();
            break;

        case 6:
            RightPointingTriangle();
            break;

        case 7:
            LeftPointingTriangle();
            break;

        case 8:
            BowTie();
            break;

        case 9:
            Frame();
            break;

        case 10:
            AdditionSign();
            break;

        case 11:
            CrossSign();
            break;

        case 12:
            SolidCircle();
            break;

        case 13:
            Heart();
            break;

        case 14:
            Run = false;
            break;

        default:
            break;
        }
    }

    return 0;
}