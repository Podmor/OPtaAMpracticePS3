#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;
int main()
{
        char str[] = "hello abcdgogoabcd";
        char *temp = "abcd";
        short j = 0;
            for(int i = 0; i<=strlen(str);i++)
                if(str[i] == temp[j])
                {
                    str[i] = ' ';
                    j++;
                    if(j == strlen(temp))j = 0;
                }
                std::cout<<str;
                system("pause");
                return 0;
}
