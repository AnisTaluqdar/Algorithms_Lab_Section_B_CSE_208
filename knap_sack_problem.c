#include <stdio.h>
int main()
{
    int arrmain[8]={4,9,2,5,6,1,8,3};
    int arrsub[8]={800,100,600,300,200,900,700,400};
    int s,x,z,t,sum=0,sum1=0;

    for(int i = 0; i <= 6; i++)
    {
        for(int j=0; j <= 6; j++)
        {
            if(arrsub[j] < arrsub[i+1])
            {
                x = arrsub[j];
                arrsub[j] = arrsub[i+1];
                arrsub[i+1] = x;
                z = arrmain[j];
                arrmain[j] = arrmain[i+1];
                arrmain[i+1] = z;

            }
        }
    }

    for(int k = 0; k<=7;k++)
    {
         sum = sum + arrmain[k];
         sum1 = sum1+ arrsub[k];
        if(sum <= 15)
        {
            t = sum;
            s = sum1;
            printf("Product no. %d\n",arrmain[k]);

        }

    }
    printf("Total product no. are %d\n",t);
    printf("Total product value are %d\n",s);
    

    return 0;
}
