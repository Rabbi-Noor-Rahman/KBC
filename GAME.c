#include<stdio.h>
int main()
{
    int i,n,a,p=0;
    printf("\n\nHELLO USER !\n\n");
    printf("WELCOME TO THE KNOWLEDGE GAME\n\n");
    printf("THIS IS YOUR FIRST QUESTION\n\n");
    printf("\t\n{{ NOTE: IN THIS GAME YOU HAVE ONE LIFE LINE IF YOUR ANS WRONG YOU WILL LOSS AND \t\nGAME WILL BE OVER !!!}}\t\n\n\n");
    for(i=1;i<2;i++)
    {
        if(i=1)

           {
            printf("\n\nHOW MANY YEARS DID THE HUNDRED YEARS WAR LAST?\n\n");
            printf("1. 115\n\n");
            printf("2. 114\n\n");
            printf("3. 113\n\n");
            printf("4. 112\n\n");

            scanf("%d",&a);
            if(a==1){ p++;
            printf("\YOUR ANS WAS RIGHT\t\n\nNEXT QUESTION\n\n");}
            else
            break;
           }


           {
               printf("\n\nBANGLADESH HAVE HOW MANY DISTRICTS?\n\n");
               printf("1. 64\n\n");
               printf("2. 54\n\n");
               printf("3. 53\n\n");
               printf("4. 62\n\n");
               scanf("%d",&a);
               if(a==1)
               {
                   p++;

               printf("\nYOUR ANS WAS RIGHT\t\n\nNEXT QUESTION\n\n");}
               else
               break;
            }



            {
               printf("\n\nWHAT IS THE CAPITAL CITY OF AUSTRALIA?\n\n");
               printf("1. CANNBERA\n\n");
               printf("2. CANBERI\n\n");
               printf("3. CANTERI\n\n");
               printf("4. CANLERI\n\n");
               scanf("%d",&a);
               if(a==1){p++;
               printf("\YOUR ANS WAS RIGHT\t\n\nNEXT QUESTION\n\n");}
               else
               break;
            }



            {
               printf("\n\nWHAT IS THE WORLD MOST COLDEST PLACE ?\n\n");
               printf("1. WASHINGTONGDC\n\n");
               printf("2. VOSTOK, ANTARCTICA,\n\n");
               printf("3. MUMBAI,INDIA\n\n");
               printf("4. CAMBERRI,AUSTRALIA\n\n");
               scanf("%d",&a);
               if(a==2){p++;
               printf("\YOUR ANS WAS RIGHT\t\n\nNEXT QUESTION\n\n");}
               else
               break;
            }

            {
               printf("\n\nWHICH IS THE OLDEST CONTINUALLY-INHABITED PLACES ON EARTH?\n\n");
               printf("1. DHAKA,BANGLADESH\n\n");
               printf("2. BANARAS,INDIA\n\n");
               printf("3. BIHAR,INDIA\n\n");
               printf("4. SYLET,BANGLADESH\n\n");
               scanf("%d",&a);
               if(a==2){p++;
               printf("\nYOUR ANS WAS RIGHT\t\n\nNEXT QUESTION\t\n\n");}
               else
               break;
            }

            {
               printf("\n\nHOW HIGH IS A BAKETBALL HOOP?\n\n");
               printf("1. 11\n\n");
               printf("2. 22\n\n");
               printf("3. 33\n\n");
               printf("4. 44\n\n");
               scanf("%d",&a);
               if(a==1){p++;
               printf("\nYOUR ANS WAS RIGHT\t\n\nNEXT QUESTION\n\n");}
               else
               break;
            }

            {
               printf("\n\nWHO WAS THE FIRST ACTOR TO REFUSE AN OSCAR?\n\n");
               printf("1. JACKY CHAIN\n\n");
               printf("2. ANIL KAPOOR\n\n");
               printf("3. GEORGE C. SCOTT\n\n");
               printf("4. ANGELINA JOLLY\n\n");
               scanf("%d",&a);
               if(a==3){p++;
               printf("\nYOUR ANS WAS RIGHT\t\n\nNEXT QUESTION\n\n");}
               else
               break;
            }

            {
               printf("\n\nIN COMPUTING WHAT IS Random Access Memory SHORT FORM?\n\n");
               printf("1. RAK\n\n");
               printf("2. RAN\n\n");
               printf("3. ROM\n\n");
               printf("4. RAM\n\n");
               scanf("%d",&a);
               if(a==4){p++;
               printf("\nYOUR ANS WAS RIGHT\t\n\nNEXT QUESTION\n\n");}
               else
               break;
            }

            {
               printf("\n\nHOW HIGH IS A BAKETBALL HOOP\n\n");
               printf("1. 11 FEET\n\n");
               printf("2. 20 FEET\n\n");
               printf("3. 22 FEET\n\n");
               printf("4. 33 FEET\n\n");
               scanf("%d",&a);
               if(a==2){p++;
               printf("\nYOUR ANS WAS RIGHT\t\n\nNEXT QUESTION\n\n");}
               else
               break;
            }

            {
               printf("\n\nWhat do the dots on a pair of dice add up to?\n\n");
               printf("1. 41\n\n");
               printf("2. 42\n\n");
               printf("3. 43\n\n");
               printf("4. 44\n\n");
               scanf("%d",&a);
               if(a==3){p++;
               printf("\nYOUR ANS WAS RIGHT\t\n\nNEST QUESTION\n\n");}
               else
               break;
            }

            {
               printf("\n\nHOW MANY EPISODES OF FAWLTY TOWERS WERE MADE?\n\n");
               printf("1. 136\n\n");
               printf("2. 236\n\n");
               printf("3. 166\n\n");
               printf("4. 266\n\n");
               scanf("%d",&a);
               if(a==1)
                {  p++;
               printf("\nYOUR ANS WAS RIGHT\t\n\nCONGRATULATION YOU HAVE SUCCESSFULLY ANS ALL THE QUESTION\t\n\n\n\n\t\t\t\t**************\n\n");}
               else
               break;
            }

             break;

            }
            if(p==11)
                printf("\t\t\n\n\n****THANKS FOR PLAYING*****\n\n");
            else
            {printf("\t\t\tYOUR ANS WAS WRONG\t\n\n\n\n" );
            printf("\t\t-----------------------------------------------\n\n\n");
            printf("\t\t\t\tGAME OVER\n\n\n");
            printf("\t\t-----------------------------------------------\n\n\n");}

   }


