#include<iostream>
#include<string.h>
using namespace std;

void Reverse(char s[])
{
    int len= strlen(s)-1;

    for(int i=0 ;i<(strlen(s)/2); i++)
    {
        char temp = s[i];
        s[i]=s[len];
        s[len--]=temp;
    }

    for(int i=0 ;i<strlen(s); i++)
    {
        cout<<s[i];
    }
    cout<<" ";
}

int main()
{
    char arr[] ="Akash Kavade Mayani";
    char a[10];
    int j=0;

    for(int i=0; i<(strlen(arr)); i++)
    {
        if(arr[i]!=' ')
        {
            a[j++]=arr[i];
        }
        else
        {
            Reverse(a);
            j=0;
        }
    }
    Reverse(a);

    return 0;
}
