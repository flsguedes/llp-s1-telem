#include <stdio.h>

int main()
{
    int i;
    i=1;
    while(i < 100)
    {
        i++;
        if(i % 4 != 0)
            continue;
    
        printf("%d\n", i);
    }
    return 0;
}