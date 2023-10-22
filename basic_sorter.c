/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Girilen 3 Sayiyi Kücükten Büyüge Siralayan Program                       */
/*                                                                            */
/*   By: Yusuf Emre OZDEN | <yusufemreozdenn@gmail.com>                       */
/*                                                                            */      
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int who_is_min(int n1, int n2, int n3)
{
    int min;

    if(n1<n2 && n1<n3)
        min = n1;
    else if(n2<n1 && n2<n3)
        min = n2;
    else if(n3<n1 && n3<n2)
        min = n3;
    
    return(min);
}

int who_is_max(int n1, int n2, int n3)
{
    int max;

    if(n1>n2 && n1>n3)
        max = n1;
    else if(n2>n1 && n2>n3)
        max = n2;
    else if(n3>n1 && n3>n2)
        max = n3;
    
    return(max);
}

int main()
{
    int n1, n2, n3, mid;

    printf("Lütfen birinci sayınızı giriniz: ");
    scanf("%d",&n1);

    printf("Lütfen ikinci sayınızı giriniz: ");
    scanf("%d",&n2);

    printf("Lütfen üçüncü sayınızı giriniz: ");
    scanf("%d",&n3);

    int min = who_is_min(n1,n2,n3);
    int max = who_is_max(n1,n2,n3);

    if ((n1 != who_is_min(n1,n2,n3) && n1 != who_is_max(n1,n2,n3)))
        mid = n1;
    else if ((n2 != who_is_min(n1,n2,n3) && n2 != who_is_max(n1,n2,n3)))
        mid = n2;
    else if ((n3 != who_is_min(n1,n2,n3) && n3 != who_is_max(n1,n2,n3)))
        mid = n3;

    printf("Girdiğiniz en küçük sayı %d, ",who_is_min(n1,n2,n3));
    printf("girdiğiniz ortanca sayı %d, ",mid);
    printf("girdiğiniz en büyük sayı ise %d'dir.\n",who_is_max(n1,n2,n3));
}