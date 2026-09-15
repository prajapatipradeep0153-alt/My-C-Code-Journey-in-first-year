// write mode me program
#include <stdio.h>
int main()
{
    FILE *fptr;                        // fptr ki jagah ptr bhi likh sakte hai
                                       // fptr = fopen("pradeep1.txt", "w");  // agar "w" ka use kiyA Agar file me jo data rahega vo delete ho jayega
                                       // aur jo initialize kiye ho vo aa jayega
    fptr = fopen("pradeep1.txt", "a"); // agar aap "a" ka use karte ho agar file me tumhara data haito vo rahega hi
    if (fptr == NULL)                  //lekin  ab jo initialize kiye ho vo lst me add ho jayegi
    {

        printf("the given value doesn't exist");
    } 
    int num = 400;
    fprintf(fptr, "%d", num);
    fclose(fptr);
    return 0;
}

/*
append 'a'=File में पुराना data है तो वह बना रहेगा।
            नया data हमेशा last/end में जुड़ता है। File मौजूद नहीं है तो नई file बन जाती है।
      fprintf==  printf screen पर लिखता है और fprintf file में लिखता है।
      fptr → जिस file में लिखना है
      "%d" → integer लिखने का format
       num → लिखी जाने वाली value  */