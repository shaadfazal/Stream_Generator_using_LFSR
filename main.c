//
//  main.c
//  test_pn_lfsr
//
//  Created by Shaad Fazal on 28/02/20.
//  Copyright © 2020 Shaad Fazal. All rights reserved.
//

#include <stdio.h>

int main()
    {
    // insert code here...
    int a[8],d[285],i,b,n,k,l; //array a has the starting sequence lenghth=req bits for pn + 1,d stores the lsb i is set
    printf("Enter the sequence");
    for(n=0;n<7;n++)
    {
        scanf("%d",&a[n]);
    }
    
    for(i=0;i<150;i++)
    {
        k=(a[6]^a[2]); //tap seq is bit-1 according to indexingeg: 7 indicates bit 8 in poly
        d[i]=a[6];              //highest index is lowest bit which is output bit
        for(b=5;b>=0;b--)       // b upper limit = (-1)+upper limit of a[]
        {
            a[b+1]=a[b];        //shifting
        }
        a[0]=k;             // xor bit formed after taps is transferred
    }
    
    for(l=0;l<150;l++)      // bits to be displayed keep under max limit in accordance with above for loop
    {
        printf("%d",d[l]);
        if(l==126)            // seq repeat after (2^n)-1 bits new line to compare repeating bit-streams
        {
            printf("\n");
        }
    }
    printf("the seq");
    return 0;
}
