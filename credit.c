#include<cs50.h>
#include<stdio.h>

int main(void)
{
    long number;
    do
    {
        number = get_long("");
    }    
    while (number < 99999999999999 || number > 1000000000000000);
    {
        int a = number / 100000000000000;
        int b = number / 10000000000000 - ((number / 100000000000000)*10);
        int c = number / 1000000000000 - ((number / 10000000000000)*10);
        int d = number / 100000000000 - ((number / 1000000000000)*10);
        int e = number / 10000000000 - ((number / 100000000000)*10);
        int f = number / 1000000000 - ((number / 10000000000)*10);
        int g = number / 100000000 - ((number / 1000000000)*10);
        int h = number / 10000000 - ((number / 100000000)*10);
        int i = number / 1000000 - ((number / 10000000)*10);
        int j = number / 100000 - ((number / 1000000)*10);
        int k = number / 10000 - ((number / 100000)*10);
        int l = number / 1000 - ((number / 10000)*10);
        int m = number / 100 - ((number / 1000)*10);
        int n = number/10 - ((number / 100)*10);
        int o = number - ((number / 10)*10);
        int rate = ((a+c+e+g+i+k+m+o)*2)+b+d+f+h+j+l+n;
        if (rate == 20)
        {
            printf("VISA");
        }
        else
        {
            printf("INVALID");
        }
        return 8;
    }
    
}