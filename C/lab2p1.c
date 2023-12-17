#include<stdio.h>
//#include<conio.h>

void main()
{


    char p[80]="bab";
    char t[80]="aabbbbabb";
    int r,s,l,k,max, index;
    clrscr ();
    R=strlen(p);
    S=strlen(t);
    k=0;
    max=s-r;

    while(k<max)
    {
        for(l=0; l<r;l++)
        if (p(l)!= t[k+l])
        break;
        if (l==r)
        {
            index=k;
            break;
        }
        else
        k=k+1;
    }
    if (k>max)
    index=-1;
    printf("p= %s ",p);
    printf(\n\nt=%s",t);
    if (index != -1)
    printf("\n Index is %d ",index);
    else
    printf(" p does nor exist ");
    return 0;
    }

}