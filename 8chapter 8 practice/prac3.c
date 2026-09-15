// Write your own version of strlen function from (string.h>

/*#include <stdio.h>
int main()
{
    char str[] = "harry"; // str naam ka character array banaya jisme "harry" store hai
    int i = 0, count;     // i count kar raha hai jitne baar loop calega vah 1 se badhta rahega
    char store = str[i];
    while (store != '\0')
    { // while(store!='\0') jab tak \0 na mile tab tak loop chalate raho

        store = str[i];
        i++;
    }
    count = i - 1;

    printf("%d", count);
    return 0;
}*/

// function se kare to

#include <stdio.h>
int strlen(char str[])

{

    int i = 0, count;
    char store = str[i];
    while (store != '\0')
    {
        store = str[i];
        i++;
    }
    count = i - 1;
    return count;
}

int main()
{
    char str[] = "pradeep bhai ";  // space agar huaa to vo bhi count hoga

    printf("%d", strlen(str));
    return 0;
}
