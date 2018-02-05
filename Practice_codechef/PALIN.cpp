    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
     
    void next_palindrom(char *k)
    {
        int len=strlen(k);
        int mij=(len-1)/2;
        int okreverse=1;
        int impar=len%2;
     
        int half=len/2;
     
        int i;
        for(i=0;i<half;i++)
        {
            if (k[mij+1+i]>k[mij-impar-i])
            {
                okreverse=0;
                break;
            }
            else
            {
                if (k[mij+1+i]<k[mij-impar-i])
                    break;
            }
        }
     
        if (i==half)
            okreverse=0;
     
        if(okreverse)
        {
            for(i=0;i<half;i++)
                k[mij+1+i]=k[mij-impar-i];
     
            puts(k);
        }
        else
        {
            int specialone=0;
            k[mij]=((k[mij]-'0')+1)%10 + '0';
            if (k[mij]=='0')
            {
                int i;
                for(i=mij-1;i>=0;i--)
                {
                    int val=((k[i]-'0')+1);
                    k[i]=val%10 + '0';
                    if (val<10)
                        break;
                }
     
                if (i==-1)
                    specialone=1;
            }
     
            for(i=0;i<half;i++)
                k[mij+1+i]=k[mij-impar-i];
     
            if (specialone)
            {
                k[len-1]=0;
                printf("1%s1\n",k);
            }
            else
                printf("%s\n",k);
     
        }
     
     
    }
     
    int main()
    {
        int t;
        scanf("%d%*c",&t);
        char *k=(char*)malloc(1000001*sizeof(char));
     
        for(int i=0;i<t;i++)
        {
            scanf("%s",k);
            next_palindrom(k);
        }
        free(k);
        return 0;
    } 