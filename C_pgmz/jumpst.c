/*break  , continue statement*/


#include <stdio.h>
int main()
{
    int i;
    for(i=1;i<=15;i++)
    {  /*Continue statement */
       if(i==2)
       continue;
       printf("%d\n",i);
	    /*Break statement */
       if(i==10)
        break;
    }
    return 0;
}




