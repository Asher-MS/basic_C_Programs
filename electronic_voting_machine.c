/*An electronic voting machine program made using c language*/
#include <stdlib.h>
#include<stdio.h>
#include<string.h>



void printMessageCenter(const char *message)
{
 int len =0;
    int pos = 0;
    //calculate how many space need to print
    len = (78 - strlen(message))/2;
    printf("\t\t\t");
    for(pos =0 ; pos < len ; pos++)
    {
        //print space
        printf(" ");
    }
    //print message
    printf("%s",message);
}


void headMessage(const char *message)
{
    system("clear");
    printf("\t\t\t###########################################################################");
    printf("\n\t\t\t############                                                   ############");
    printf("\n\t\t\t############                Voting Machine                     ############");
    printf("\n\t\t\t############                                                   ############");
    printf("\n\t\t\t###########################################################################");
    printf("\n\t\t\t---------------------------------------------------------------------------\n");
    printMessageCenter(message);
    printf("\n\t\t\t----------------------------------------------------------------------------");
}


    
void main()
{
headMessage("Welcome to the Election");                          
int n,n1,n3,n4,n5,maxi,sum,pos,flag,k=0,co=0,br=0;
char filename[10];
char st[100][100],vote[100][100];
char sy[100],cp[20],t[100];
int count[100]={0};char n2,a;
printf("          ..................... WELCOME TO CLAIM YOUR RIGHT TO VOTE ......................\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n\n\n");
headMessage("CANDIDATES");
printf("\nEnter the number of candidates participating in the election :\n");//entering candidate details
scanf("%d",&n5);
int i = 0,j;
while(i<n5)
{
    int temp=0;
    printf("\n\n\n");
    printf("==========for %dst candidate=========\n",i+1);
    printf("\n\n");
    printf("Enter the Name of the candidate : \n");
    scanf("%s",st[i]);
    printf("\nEnter the Symbol of the candidate :\n");
    scanf(" %c",&a);
    for(j = 0; j<i; j++)
    {
    	if(sy[j] == a)
    	{
    		printf("\n\aThe symbol is already taken.\n\n");
    		printf("Please re-enter the details of the candidate.\n");
    		temp = 1;
    		break;
		}
	}
	if (temp == 0)
	{
		sy[i] = a;
		i++;

	}

}
printf("\n\n\n");
printf("Enter 1 to vote or any other key to exit the poll :\n");
scanf("%d",&n1);
if(n1!=1)
    exit(1);
while(n1==1)
{printf("\n\n\n");printf("\n\n\n");
    printf("Press enter to continue....\n");
    
    char *date =  malloc(sizeof(char) * 8);
    headMessage("VOTER DETAILS");
	printf("\nEnter your voter ID\n");
	scanf("%s",date);
    strcpy(vote[k],date);
    k++;

    if(strcmp(t,date)==0)
        co=-1;

    for(i=0;i<k+1;i++)
    {
        if(strcmp(date,vote[i])==0)
            co++;
    }
    if(co==1)
        flag=0;
    else
        flag=1;
        co=0;
if(flag==0)
{


    FILE *fp = fopen("voters.csv", "r");

    if (!fp) {
        printf("Can't open file\n");
       
    }



    char buf[1024];
	int field_count = 0;

	int entries = 0;
	fgets(buf, 1024, fp);//Skip heading row
	char *field = strtok(buf, ",");
	while(fgets(buf, 1024, fp))
	{	field_count = 0;
        field = strtok(buf, ",");
		if(strcmp(field,date) == 0)
		{
			while(field){
		  		if (field_count == 0) {
		            printf("\nVOTER ID:\t");
		        }
		        if (field_count == 1) {
		            printf("NAME:\t");
		        }
		        if (field_count == 2) {
		            printf("AGE:\t");
		        }

			    printf("%s\n", field);
		        field = strtok(NULL, ",");

				field_count++;
			}
        	printf("\n");
		}
	}

    fclose(fp);


printf("\n\n\n");printf("\n\n\n");
printf("Press any key to continue......\n");

printf("Cast your vote by selecting the symbol of your representative\n");
        headMessage("CASTING THE VOTE");
        printf("\n");printf("\n");printf("\n");
        printf("Enter the symbol of your Representative :\n");
        for(i=0;i<n5;i++)
        {

            printf("%d.  %s (%c)\n",i+1,st[i],sy[i]);
        }
            int fl=0;
            scanf(" %c",&n2);
            for(i=0;i<n5;i++)
            {

            if(n2==sy[i])
                {fl=1;
                break;
                }
            else
                fl=0;
            }

            if(fl==1)

            {


            for(i=0;i<n5;i++)
            {

            if(n2==sy[i])
                count[i]++;


            }

            printf("\aThank You ! Your vote has been casted.\n");printf("\n\n\n");printf("\n\n\n");
            printf("Press any key to continue\n");
            }
            else{

                strcpy(t,date);
                printf("\n\n\n");
                printf("\aWrong symbol is entered. Enter the correct symbol\n");
                printf("The details are to be re-entered.\n");
                printf("\n\n\n");
                printf("Press any key to continue\n");
                
                continue;
            }

headMessage("MENU");

while(n1==1)

{
    printf("\n");printf("\n");printf("\n");

    printf("Enter your choice \n1.  Results\n2.  Difference between the votes of any two candidates\n3.  Finish your voting\n4.  EXIT the Poll\n  ");
    scanf("%d",&n);

        if(n==1)
        {
            headMessage("Results");
            printf("\n\n\n");
            printf("The Result according to votes casted so far is as follows : \n");
            printf("\n");printf("\n");printf("\n");
            for(i=0;i<n5;i++)
            {

            printf(" %s( %c):  %d\n",st[i],sy[i],count[i]);
            }
        }
         else if(n==2)
         {
             headMessage("Difference");
             printf("\n\n\n");
             for(i=0;i<n5;i++)
        {

            printf("%d.  %s (%c)\n",i+1,st[i],sy[i]);
        }
             printf("Enter the serial nos. of whose vote count differences are to be known : \n");

             scanf("%d%d",&n3,&n4);
             if(count[n3-1]==count[n4-1])
                printf("It's a Tie between both the candidates'\n");
             printf("\n\n\n");
             printf("The difference between %s and %s is %d",st[n3-1],st[n4-1],count[n3-1]-count[n4-1]);
         }
         else if(n==3)
         {
           break;
         }
         else if(n>4)
         {


            printf("\aWRONG OPTION ENTERED TRY AGAIN");
         }
         else
            n1=0;

}
}


else
    printf("\a\a\a\a\aError!!!! You already casted your vote ");printf("\n\n\n");
    printf("press any key to continue\n");
}
headMessage(" FINAL RESULTS");
for(i=0; i<n5; i++)
    {

    	printf("\nCandidate : %s",st[i]);

    	
    	printf("\t Symbol : %c",sy[i]);
    	

	printf("\t Votes : %d\n",count[i]);
 


	}}
