// Finding character duplicates.

#include<iostream>
#include<string>

int main()
{
    // Character array.
    char a[] = "finding";
    // The range is (0-25), as 'a = 97' and 'z = 122'.
    int h[26] = {0};
    
    for(int i = 0; a[i]!='\0'; i++)
    {
        h[int(a[i])-97]++;
    }
    for(int i = 0; i<26;i++)
    {
        if(h[i] > 1)
        {
            std::cout<<char(i+97)<<" has appeared "<<h[i]<<" times.\n";
        }
    }


    // String.
    std::string str = "finding";
    int length = str.length();

    // The range is (0-25), as 'a = 97' and 'z = 122'.
    int H[26] = {0};

    for(int i = 0; i<length; i++)
    {
        H[int(str[i]) - 97]++;
    }
    for(int i = 0; i<26; i++)
    {
        if(H[i]>1)
        {
            std::cout<<char(i+97)<<" has appeared "<<H[i]<<" times.\n";
        }
    }
    return 0;
}