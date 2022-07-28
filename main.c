#include <stdio.h>
#include <stdlib.h>

int yil;

int main(void)
{
    printf("Yili giriniz: ");
    scanf("%d", &yil);

    if(yil%4 == 0)
    {
        if(yil%100 == 0 && yil%400 == 0)
        {
            printf("%d yili artik yildir.", yil);
        }else if(yil%100 == 0 && yil%400 != 0)
        {
            printf("%d yili artik yil degildir.", yil);
        }else if(yil%100 != 0 && yil%400 == 0)
        {
            printf("%d yili artik yil degildir.", yil);
        }else
        {
            printf("%d yili artik yildir.", yil);
        }
    }else
    {
        printf("%d yili artik yil degildir.", yil);
    }
    return(0);
}
