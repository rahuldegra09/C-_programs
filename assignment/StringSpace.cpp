#include<iostream>
#include<string.h>

using namespace std;
int main()
{
    char str[50],ch;
    int len,i,j;
    cout<<"enter the sentence:";
    cin.getline(str,50,'\n');
    len=strlen(str);
    cout<<"\n"<<len;
    for(i=0;i<len-1;i++)
    {
        if (str[0] == ' ')
        {
            for (i = 0; i < len - 1; i++)
            {
                str[i] = str[i + 1];
            }
            len--;
            i=-1;
            continue;
        }

        if (str[i] == ' ' && str[i + 1] == ' ')
        {
            for (j=i;j<(len - 1);j++)
            {
                str[j]=str[j+1];
            }
            len--;
            i--;
        }
        }
    if (str[i] == ' ' && str[i + 1] == ' ')
    {
        str[i]='\0';
    }
        for (int i = 0; i < len; i++)
        {
            str[i] = tolower(str[i]);
        }
    for (int i = 0; i < len; i++){
            str[0]=toupper(str[0]);
        if (str[i] == ' ' && str[i + 1] != ' ')
        {
            str[i + 1]=toupper(str[i+1]);
        }
    }
    cout << "\nnow the array is :" << str << "...";

}