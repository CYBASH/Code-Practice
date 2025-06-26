// Anagram. Ex: Silent - Listen

#include<stdio.h>
#include<string.h>

int main() {


    char str1[] = "Lavender Brown";
    char str2[] = "Brand New Lover";
    char s1[100]="",s2[100]="";
    int c1=0,c2=0;
    int i,j,temp;

    // str1 Removing Spaces and convert to lower case
    for(i=0;str1[i] != '\0';i++) {
        if (str1[i] != ' ') {
            if(str1[i] >= 'A' && str1[i] <= 'Z') {
                s1[c1++] =str1[i]+32;
            } else {
                s1[c1++] = str1[i];
            }
        }
    }
    s1[c1] = '\0';
    
    // str2 Removing Spaces and convert to lower case
    for(i=0;str2[i] != '\0';i++) {
        if (str2[i] != ' ') {
            if(str2[i] >= 'A' && str2[i] <= 'Z') {
                s2[c2++] =str2[i]+32;
            } else {
                s2[c2++] = str2[i];
            }
        }
    }
    s2[c2] = '\0';

    //sort s1
    for(i=0;i<c1-1;i++) {
        for(j=i+1;j<c1;j++) {
            if(s1[i] > s1[j]) {
                temp = s1[i];
                s1[i] = s1[j];
                s1[j] = temp;
            }
        }
    }

    //sort s2
    for(i=0;i<c2-1;i++) {
        for(j=i+1;j<c2;j++) {
            if(s2[i] > s2[j]) {
                temp = s2[i];
                s2[i] = s2[j];
                s2[j] = temp;
            }
        }
    }

    //compare s1 and s2
    int isAnagram = 1;
    if(c1 != c2) {
        isAnagram = 0;
    } else {
        for(i=0;i<c1;i++) {
            if(s1[i] != s2[i]) {
                isAnagram = 0;
                break;
            }
        }
    }

    if(isAnagram) {
        printf("\"%s\" is an anagram of \"%s\"\n" , str1 , str2);
    } else {
        printf("\"%s\" is not an anagram of \"%s\"\n" , str1 , str2);
    }



    return 0;
}