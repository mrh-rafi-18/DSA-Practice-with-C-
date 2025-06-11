#include<iostream>
#include<string.h>
using namespace std;


int main()
{
    char word[40],itoc[2],abbri[4];
    int mid_letters,j=0,i;

    cout<< "Enter the word : "<<endl;
    cin>> word;

    if(strlen(word)>10)
    {
        mid_letters=strlen(word)-2;

        for(i=mid_letters;i>0;i=i/10)
        {
            itoc[j]=(i%10)+48;
            j++;
        }
        itoc[j]='\0';
        abbri[0]=word[0];
        abbri[1]='\0';
        strcat(abbri,itoc);
        abbri[3]=word[strlen(word)];

    }
    abbri[4]='\0';

    cout<<abbri[0]<<endl;
}
