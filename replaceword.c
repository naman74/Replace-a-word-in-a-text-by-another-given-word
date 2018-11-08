#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
	char s[100];
	char word[10],rword[10],str[10][10];
    int i=0,j=0,k,w,p;
    printf("Enter a string\n");
    gets(s);
    printf("Enter the word to replace\n");
    gets(word);
    printf("enter the word to replace it with\n");
    gets(rword);
    p=strlen(s);
    for(k=0;k<p;k++)
    {
    	if(s[k]!=' ')
    	{
    		str[i][j]=s[k];
    		j++;
		}
		else
		{
			str[i][j]='\0';
			j=0,i++;
		}
	}
	
	str[i][j]='\0';
	w=i;
	for(i=0;i<=w;i++)
	{
		if(strcmp(str[i],word)==0)
		{
		  strcpy(str[i],rword);
	    }
	    printf("%s ",str[i]);
	}
	getch();
}
