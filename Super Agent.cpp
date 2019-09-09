#include <cstdio>
 
int main()
{
    char symbols[3][4];
    scanf("%s%s%s", symbols[0], symbols[1], symbols[2]);
    printf(symbols[0][0] == symbols[2][2] && symbols[0][1] == symbols[2][1] && symbols[0][2] == symbols[2][0] && symbols[1][0] == symbols[1][2] ? "YES\n" : "NO\n");
    return 0;
}
