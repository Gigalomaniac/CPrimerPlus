#include <stdio.h>
#include <string.h>

int main(void)
{
    char fname[10], lname[10];
    scanf("%s%s", fname, lname);
    int len1 = strlen(fname);
    int len2 = strlen(lname);
    printf("%s %s\n%*d %*d\n", fname, lname, len1, len1, len2, len2);
    printf("%s %s\n%-*d %-*d\n", fname, lname, len1, len1, len2, len2);
    return 0;
}
