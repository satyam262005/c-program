// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[] = "abc";
//     int freq[256] = {0};
//     int ln = strlen(str);
//     for (int i = 0; i < ln; i++)
//     {
//         freq[str[i]]++;
//     }
//     for (int i = 0; i < 256; i++){
//     if (freq[i] > 0)
//     {
//         printf("%c: %d", i, freq[i]);
//     }
// }
// }



// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[] = "abc";
//     int freq[256] = {0};
//     int ln = strlen(str);
//     for (int i = 0; i < ln; i++)
//     {
//         freq[str[i]]++;
//     }
//     for (int i = 0; i < 256; i++){
//     if (freq[i] == 1)
//     {
//         printf("%c:\n", i, freq[i]);
//     }
// }
// }

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[] = "abc";
//     int freq[256] = {0};
//     int ln = strlen(str);
//     for (int i = 0; i < ln; i++)
//     {
//         freq[str[i]]++;
//     }
//     for (int i = 0; i < 256; i++){
//     if (freq[i]>0)
//     {
//         printf("%c%d", i, freq[i]);
//     }
// }
// }

 #include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "abc";
    
    char newstr[67];
    int j=0;
    int ln=strlen(str);
    for(int i=0;i<ln;i++)
    {
        if (str[i]!='a'){
            newstr[j]=str[i];
            j++;

        }
    }
    newstr[j+1]='\0';
     for(int i=0;i<ln;i++)
    { 
        printf("%c",newstr[i]);}
        return 0;
    }