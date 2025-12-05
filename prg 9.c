#include <stdio.h>
#include <stdlib.h>
void heapify(int a[10],int n){
    int i,k,v,j,flag=0;
    for(i=n/2;i>=1;i--){
            k=1;
            v=a[k];
            flag=0;
            while(!flag&&(2*k)<=n){
                    j=2*k;
            if(j<n&&a[j]<a[j+i]){
                    j=j+1;
            }
            if(v>=a[j])
            flag=1;
            else
            {
                a[k]=a[j];
                k=j;
            }
            }
            a[k]=v;
            flag=0;
    }
    }
    int main()
    {
        int n,a[10],i,ch;
        for(;;)
{
    printf("\n 1.create heap");
     printf("\n 2.extract max");
      printf("\n 3.exit");
       printf("\n read choice:");
       scanf("%d",&ch);
       switch(ch)
       {
           case 1:printf("\n read the number of element:");
           scanf("%d",&n);
           printf("\n read element \n");
           for(i=1;i<=n;i++)
            scanf("%d",&a[i]);
           heapify(a,n);
           printf("\n element after consteucting heap\n");
           for(i=1; i<=n; i++)
            printf("%d\t",a[i]);
           break;
           case 2: if (n>=1)
           {
               printf("\n element deleted is %d,",a[1]);
               a[1]=a[n];
               printf("\n heap after reconstruction heap\n");
           for(i=1; i<=n; i++)
            printf("%d\t",a[i]);

           }
           else
            printf("\n no element to delete");
            break;
            default:exit(0);

}
   }
return 0;
    }



