#include <stdio.h>
int main(){
    int n;
    float h=1189,w=841,temp;
    printf("\nEnter a number [0-8]:");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        temp = w;
        w = h/2;
        h = temp;        
    }
    printf("\n\nDimentions for A%d are %d x %d.\n",n,(int)h,(int)w);
    return 0;
}