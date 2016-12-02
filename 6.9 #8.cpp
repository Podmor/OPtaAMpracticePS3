#include <string.h>
#include <iostream>
 
using namespace std;
 
void del_char(char in[], int num)
{
    for (int i = num; i < strlen(in); i++)
        in[i] = in[i+1]; 
}
 
void repeat_char(char in[], int num)
{
    for (int i = strlen(in) + 1; i > num + 1; i--)
        in[i] = in[i-1]; 
    in[num+1] = in[num]; 
}
 
int main()
{
    char string[50];
    cin >> string;
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == '*')
        {
            del_char(string, i); 
            i--; 
        } else {
            repeat_char(string, i); 
            i++; 
        }
    }
    cout << string << endl;
    system("Pause");
    return 0;
}
