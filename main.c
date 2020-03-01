//
//  main.c
//  geffe_generator
//
//  Created by Shaad Fazal on 20/02/20.
//  Copyright © 2020 Shaad Fazal. All rights reserved.
//

#include <stdio.h>

int main() {
    
    
    int a[5],d[15],i,b,n,k,l[5],m[5],e[15],f[15],g[15];
    printf("Enter the sequence for LFSR 1");
    for(n=0;n<4;n++)
    {
        scanf("%d",&a[n]);
    }
    printf("Enter the sequence for LFSR 2");
    for(n=0;n<4;n++)
    {
        scanf("%d",&l[n]);
    }
    printf("Enter the sequence for LFSR Select");
    for(n=0;n<4;n++)
    {
        scanf("%d",&m[n]);
    }

    

    for(i=0;i<15;i++)
    {
        k=(a[0]^a[3]);
        d[i]=a[3];
        for(b=2;b>=0;b--)
        {
            a[b+1]=a[b];
        }
        a[0]=k;
    }
    for(i=0;i<15;i++)
    {
        k=(l[0]^l[3]);
        e[i]=l[3];
        for(b=2;b>=0;b--)
        {
            l[b+1]=l[b];
        }
        l[0]=k;
    }
    for(i=0;i<15;i++)
    {
        k=(m[0]^m[3]);
        f[i]=m[3];
        for(b=2;b>=0;b--)
        {
            m[b+1]=m[b];
        }
        m[0]=k;
    }
    for(i=0;i<15;i++)
    {
        g[i]=f[i]?d[i]:e[i];
    }
    printf("Geffe Generator ouput:");
    for(i=0;i<15;i++)
    {
        printf("%d",g[i]);
    }
   
    return 0;
}
