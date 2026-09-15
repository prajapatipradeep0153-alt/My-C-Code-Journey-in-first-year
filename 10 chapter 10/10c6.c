// use the different mode

#include <stdio.h>

int main()
{
    FILE *ptr;

    // mode "w" nayi file bnao
    ptr = fopen("pradeep5.txt", "w");
    if (ptr == NULL)
    {

        printf("file doesn't exist sorry!");
    }
    fprintf(ptr, "arjun 85\n");
    fprintf(ptr, "arya 95\n");
    fclose(ptr);
    printf("file open ho gayi haio w mode se\n");

    // mode "a" append karo
    ptr = fopen("pradeep5.txt", "a");
    if (ptr == NULL)
    {

        printf("file doesn't exist sorry!");
    }
    fprintf(ptr, "pradeep 786\n");
    fclose(ptr);
    printf("naya data append ho gaya hai\n");

    // mode "r" read karo
    ptr = fopen("pradeep5.txt", "r");
    if (ptr == NULL)
    {

        printf("file doesn't exist sorry!");
    }
    char ch[100];

    while (fgets(ch, sizeof ch, ptr) != NULL)
    {
        printf("the value of c is %s \n", ch);
    }

    return 0;
}

/*
fgets(ch, sizeof ch, ptr)
- ptr वाली file से एक line पढ़ता है।
- उस line को ch array में रखता है।
- sizeof c बताता है कि ch में अधिकतम कितने characters सुरक्षित रूप से रख सकते हैं—यहाँ 100।
- सफलतापूर्वक line पढ़ने पर ch return करता है।
- file खत्म होने पर NULL return करता है।

while (... != NULL)
- जब तक नई line मिलती रहे, loop चलता है।
- file खत्म होते ही NULL मिलेगा और loop रुक जाएगा।

printf("%s", c);
- अभी जो line c में आई है, उसे screen पर दिखाता है।
*/