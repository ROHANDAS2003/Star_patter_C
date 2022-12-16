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

    printf("\n\n Press an key to close this window:"); // freezing screen till next input
    getch();
}

void Diamond()
{
    system("CLS"); // clearing screen
    printf("\n\n\t======== Diamond ========\n\n");

    printf("\n\n Press an key to close this window:"); // freezing screen till next input
    getch();
}

void Pyramid()
{
    system("CLS"); // clearing screen
    printf("\n\n\t======== Pyramid ========\n\n");

    printf("\n\n Press an key to close this window:"); // freezing screen till next input
    getch();
}

void UpsideDownPyramid()
{
    system("CLS"); // clearing screen
    printf("\n\n\t======== Upside Down Pyramid ========\n\n");

    printf("\n\n Press an key to close this window:"); // freezing screen till next input
    getch();
}

void RightPointingTriangle()
{
    system("CLS"); // clearing screen
    printf("\n\n\t======== Right Pointing Triangle ========\n\n");

    printf("\n\n Press an key to close this window:"); // freezing screen till next input
    getch();
}

void LeftPointingTriangle()
{
    system("CLS"); // clearing screen
    printf("\n\n\t======== Left Pointing Triangle ========\n\n");

    printf("\n\n Press an key to close this window:"); // freezing screen till next input
    getch();
}

void BowTie()
{
    system("CLS"); // clearing screen
    printf("\n\n\t======== Bow Tie ========\n\n");

    printf("\n\n Press an key to close this window:"); // freezing screen till next input
    getch();
}

void Frame()
{
    system("CLS"); // clearing screen
    printf("\n\n\t======== Frame ========\n\n");

    printf("\n\n Press an key to close this window:"); // freezing screen till next input
    getch();
}

void Butterfly()
{
    system("CLS"); // clearing screen
    printf("\n\n\t======== Butterfly ========\n\n");

    printf("\n\n Press an key to close this window:"); // freezing screen till next input
    getch();
}

void AdditionSign()
{
    system("CLS"); // clearing screen
    printf("\n\n\t======== Addition Sign ========\n\n");

    printf("\n\n Press an key to close this window:"); // freezing screen till next input
    getch();
}

void CrossSign()
{
    system("CLS"); // clearing screen
    printf("\n\n\t======== Cross Sign ========\n\n");

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

void HollowCircle()
{
    system("CLS"); // clearing screen
    printf("\n\n\t======== Hollow Circle ========\n\n");

    printf("\n\n Press an key to close this window:"); // freezing screen till next input
    getch();
}

void Heart()
{
    system("CLS"); // clearing screen
    printf("\n\n\t======== Heart ========\n\n");

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
        printf("\n choose which star pattern to print.\n 1. Solid square \n 2. Hollow square \n 3. Diamond \n 4. Pyramid \n 5. Upside-down pyramid \n 6. Right pointing triangle \n 7. Left pointing triangle \n 8. Bow tie \n 9. Frame \n 10. Butterfly \n 11. Addition sign \n 12. Cross sign \n 13. Solid circle \n 14. Hollow Circle \n 15. Heart \n 16. Exit \n choose your opinion:  ");
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
            Butterfly();
            break;

        case 11:
            AdditionSign();
            break;

        case 12:
            CrossSign();
            break;

        case 13:
            SolidCircle();
            break;

        case 14:
            HollowCircle();
            break;

        case 15:
            Heart();
            break;

        case 16:
            Run = false;
            break;

        default:
            break;
        }
    }

    return 0;
}