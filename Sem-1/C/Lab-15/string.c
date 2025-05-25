// Use string handling functions strlen(), strcmp(), strcpy(), strcat(), strrev(), strlwr() and strupr()

#include<stdio.h>
#include<string.h>

void main(){
    char s1[5],s2[5];
    gets(s1);
    gets(s2);

    printf("lenght : %d\n",strlen(s1));
    printf("compare : %d\n",strcmp(s1, s2));
    printf("lower : %s\n",strlwr(s1));
    printf("upper : %s\n",strupr(s1));
    printf("reverse : %s\n",strrev(s1));
    printf("copy : %s\n",strcpy(s1, s2));
    printf("concate : %s\n",strcat(s1, s2));
}