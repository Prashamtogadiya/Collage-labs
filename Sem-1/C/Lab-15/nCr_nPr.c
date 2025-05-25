// C Program find nCr (Combination) and nPr (Permutation)

#include<stdio.h>

int fact(int);

void main(){
    int n,r;
    printf("Value of n : ");
    scanf("%d",&n);
    printf("Value of r : ");
    scanf("%d",&r);

    int nfact = fact(n);
    int nr = fact(n-r);

    int nPr = nfact/nr;
    int nCr = nPr/fact(r);

    printf("nPr = %d",nPr);
    printf("\nnCr = %d",nCr);
}

int fact(int n){
    int ans=1;
    if (n==0 || n==1)
    {
        return 1;
    }
    
    for (int i = 2 ; i <= n; i++)
    {
        ans*=i;
    }
    return ans;
}