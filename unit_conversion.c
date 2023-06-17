#include<stdio.h>

int main()
{
    double val;
    int from, to,cont;

    do
    {
        printf("1.km\n");
        printf("2.m\n");
        printf("3cm\n");
        printf("4.mm\n");
        printf("Convert from: ");
        scanf("%d",&from);
        printf("Enter the value: ");
        scanf("%lf",&val);
        switch(from)
        {
            case 1:
                    printf("1.km\n");
                    printf("2.m\n");
                    printf("3.cm\n");
                    printf("4.mm\n");
                    printf("Convert to: ");
                    scanf("%d",&to);
                switch(to)
                {   
                    case 1: 
                        printf("conversion: %lf\n",val);
                        break;
                    case 2:
                        printf("Conversion: %lf\n",val*1000);
                        break;
                    case 3: 
                        printf("conversion: %lf\n",val*1000*100);
                        break;
                    case 4:
                        printf("Conversion: %lf\n",val*1000*100*10);
                        break;
                }
                break;

                case 2:
                    printf("1.km\n");
                    printf("2.m\n");
                    printf("3.cm\n");
                    printf("4.mm\n");
                    printf("Convert to: ");
                    scanf("%d",&to);
                switch(to)
                {
                    case 1: 
                        printf("conversion: %lf\n",val/1000);
                        break;
                    case 2:
                        printf("Conversion: %lf\n",val);
                        break;
                    case 3: 
                        printf("conversion: %lf\n",val*100);
                        break;
                    case 4:
                        printf("Conversion: %lf\n",val*100*10);
                        break;
                }
                break;

                case 3:
                    printf("1.km\n");
                    printf("2.m\n");
                    printf("3.cm\n");
                    printf("4.mm\n");
                    printf("Convert to: ");
                    scanf("%d",&to);
                switch(to)
                {
                    case 1: 
                        printf("conversion: %lf\n",val/(1000*100));
                        break;
                    case 2:
                        printf("Conversion: %lf\n",val/100);
                        break;
                    case 3: 
                        printf("conversion: %lf\n",val);
                        break;
                    case 4:
                        printf("Conversion: %lf\n",val*10);
                        break;
                }
                break;

                case 4:
                    printf("1.km\n");
                    printf("2.m\n");
                    printf("3.cm\n");
                    printf("4.mm\n");
                    printf("Convert to: ");
                    scanf("%d",&to);
                switch(to)
                {
                    case 1: 
                        printf("conversion: %lf\n",val/(1000*100*10));
                        break;
                    case 2:
                        printf("Conversion: %lf\n",val/(100*10));
                        break;
                    case 3: 
                        printf("conversion: %lf\n",val/(10));
                        break;
                    case 4:
                        printf("Conversion: %lf\n",val);
                        break;
                }
                break;
        }
        printf("Continue press 1\tExit press 0: ");
        scanf("%d",&cont);
    }while(cont!=0);

    return 0;
}