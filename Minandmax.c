#include<stdio.h>

int main()
{
      int num[10],low,highest,i=0,j=1;
      printf("\nEnter 10 numbers below :: \n");
      for(i=0;i<10;i++,j++)
      {
          printf("\nEnter number %d :: ",j);
          scanf("%d",&num[i]);
      }

      low=num[0];
      highest=num[0];
      i=0,j=1;

      for(i=0;i<9;i++)
      {
        if(low>num[i+1])
        {
            low=num[i+1];
        }
         if(highest<num[i+1])
        {
            highest=num[i+1];
        }
      }



      printf("\nThe Smallest Number among 10 Numbers is :: [ %d ]\n",low);
      printf("\nThe Smallest Number among 10 Numbers is :: [ %d ]\n",highest);

      return 0;
}
