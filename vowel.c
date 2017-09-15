#include<stdio.h>
#include<conio.h>
void main()
{
 char c;
  int isLowercaseVowel, isUppercaseVowel;
 do {
       scanf(" %c", &c);
    }
    while (!isalpha(c));
    isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    if (isLowercaseVowel || isUppercaseVowel)
    {
        printf("vowel");
    }
     else
     {
        printf("consonant");
      }
}
