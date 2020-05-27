#include<stdio.h>

struct bill
{
    char itemname[6][30];

    int price[6];

    int numberofitems;

    int total;
    int billno;

    int day;

    int month;

    int year;

}b[20];

int main()
{
	int i,empty,l;

        int n,k=0;

        printf("CUSTOMER BILLING SYSTEM\n");
        
start:
        printf("\n Enter your choice\n");
        scanf("%d",&n);

        switch(n)
        {
            case 1: //Input Details
                printf("New Bill\n");
                printf("Bill Number:%d \n",k);

                printf("Enter date(dd/mm/yyyy):\n");
                scanf("%d/%d/%d",&b[k].day,&b[k].month,&b[k].year);

                printf("Enter number of items: ");
                scanf("%d",&b[k].numberofitems);
                int j,a;
                a = b[k].numberofitems;

                for(j=0;j<a;++j)
                {
                    printf("Enter item name:\n");
                    scanf("%s",b[k].itemname[j]);
                    printf("Enter Price:\n");
                    scanf("%d",&b[k].price[j]);
                }
                k++;
                goto start;
                break;

        case 2:
		empty = 1;        	

            //int a;
            printf("Enter Bill Number: ");
            scanf("%d",&a);

            printf("Date: %d/%d/%d \n",b[a].day,b[a].month,b[a].year);
            int p = b[a].numberofitems;
            for(j=0;j<p;++j)
            {
                printf("Item Name: %s \n",b[a].itemname[j]);
                printf("Price: %d \n",b[a].price[j]);
            }
            goto start;



        case 3://Searching for bill using date
        empty = 2;
            int d,m,y;

            printf("Enter date(dd/mm/yyyy): \n");
            scanf("%d/%d/%d",&d,&m,&y);

            for(i=0;i<k;i++)
            {
                if(b[i].day==d && b[i].month==m && b[i].year==y)
                {
                    printf("Bill No: %d\n",b[l].billno);
                    int p = b[a].numberofitems;
                    for(j=0;j<p;++j)
                    {
                        printf("Item Name: %s \n",b[a].itemname[j]);
                        printf("Price: %d \n",b[a].price[j]);
                    }
                    break;
                }
            }
            goto start;

        case 4: //returning an item
       /* empty =3;
        int bilno;
        
        printf("Enter bill no: \n");
        scanf("%d",&bilno);

        if(b[i].billno==bilno)
        {
         for(j=1;j<=a;++j)
         {
          char itmn[30];
          int  pr;
           
           printf("Enter the item to be returned: \n");
           scanf("%s",itmn);
           
           printf("Enter the price of the item to be returned: \n");
           scanf("%d",&pr);
           
           if(strcmp(b[j].itemname,itmn)==0 && b[j].price==pr)
           {
            printf("This item is returned \n");
            --j;
            }
           
            }
           
            }*/
            break;
        
        default:
        	printf("Error");

    }

}
