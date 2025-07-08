#include<stdio.h>
#include<string.h>
void main()
{
    char s1[20],s2[20],s3[20];
    int l,i;
    printf("enter 3 words:");
    scanf("%s%s%s",s1,s2,s3);
    l=strlen(s1);
    for(i=0;i<=l-1;i++)
    {
        if(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u'||
        s1[i]=='A'||s1[i]=='E'||s1[i]=='I'||s1[i]=='O'||s1[i]=='U')
        {
            s1[i]='%';
        }
    }
    
    l=strlen(s2);
    for(i=0;i<=l-1;i++)
    {
        if(s2[i]!='a'&&s2[i]!='e'&&s2[i]!='i'&&s2[i]!='o'&&s2[i]!='u'&&
        s2[i]!='A'&&s2[i]!='E'&&s2[i]!='I'&&s2[i]!='O'&&s2[i]!='U')
        {
            s2[i]='#';
        }
    }
    
    l=strlen(s3);
    for(i=0;i<=l-1;i++)
    {
        if(s3[i]>='a'&&s3[i]<='z')
        {
            s3[i]-=32;
        }
    }
    strcat(s1,s2);
    strcat(s1,s3);
    printf("%s",s1);
}
