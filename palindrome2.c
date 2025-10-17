#include <stdio.h>
#include <string.h>
int main() 
{
	int n;
	scanf("%d",&n);
    char str[10];
    int i,flag = 0;
    scanf("%s",str);
    for (i = 0; i < n; i++) 
    {
        // Checking if string is palindrome or not
        if (str[i] != str[n- i - 1]) {
            flag = 1;
            break;
        }
    }
    if (flag)
        printf("%s is not palindrome", str);
    else
        printf("%s is palindrome", str);    
    return 0;
}
