
//ASCII value (all characters) frequency count
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int freq[256] = {0};

    printf("Enter the string: ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str, "\n")] = '\0'; // remove newline

    for(int i=0; str[i]!='\0'; i++)
    {
        unsigned char ch = str[i];
        freq[ch] = freq[ch] + 1;
    }

    printf("Print the frequency:\n");

    for(int i=0; i<256; i++)
    {
        if(freq[i]>0)
        {
            printf("%c : %d\n",i,freq[i]);
        }
    }
}




//Alphabet (lowercase) frequency count
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int freq[26] = {0};

    printf("Enter the string: ");
    fgets(str,sizeof(str),stdin);

    for(int i=0; str[i]!='\0'; i++)
    {
        char ch = str[i];
        if(ch>='a' && ch<='z')
        {
            freq[ch - 'a'] = freq[ch - 'a'] + 1;
        }
    }
    printf("Print the Frequency:\n");

    for(int i=0; i<26; i++)
    {
        if(freq[i]>0)
        {
            printf("%c : %d\n", i + 'a',freq[i]);
        }
    }
}

