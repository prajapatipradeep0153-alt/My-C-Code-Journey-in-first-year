// program of file
/* ptr एक file pointer है।
 FILE एक special data type है, जो C की stdio.h library में बना होता
   यह open file की जानकारी रखता है।
* बताता है कि ptr pointer है—यानी यह file की information का address  रखेगा।
ptr variable का नाम है; इसे आप कोई और valid नाम भी दे सकते हैं। */

#include <stdio.h>
int main()
{
    FILE *ptr; // file me jo information hai to ptr  uska address rakhata hai

    ptr = fopen("pradeep.txt", "r");

    int num;
    fscanf(ptr, "%d", &num); //  File से एक integer पढ़कर num में रखता है।
                             //&num	num का memory address। fscanf इसी address पर value लिखता है।
    printf("the value of num is %d\n", num);

    fscanf(ptr, "%d", &num);

    printf("the value of num is %d\n", num);
fclose(ptr);
    return 0;
}

/*
FILE	==    File को represent करने वाला built-in type।
FILE *ptr ===ptr एक pointer है जो खुले हुए file record को refer करेगा।
fopen("pradeep.txt", "r")	==pradeep.txt को read mode में खोलता है।
"r"	Read-only mode:== file से पढ़ सकते हैं, उसमें लिख नहीं सकते। File मौजूद होना जरूरी है।
int num;==	Memory में integer variable num बनता है।
fscanf(ptr, "%d", &num)	==File से एक integer पढ़कर num में रखता है।
%d	Integer का format specifier है।
&num	num का memory address। fscanf इसी address पर value लिखता है।
printf(...)	Console/terminal पर output देता है।
\n	New line; अगला output नई लाइन में जाता है।
fclose(ptr)	File बंद करके resource मुक्त करता है।
*/