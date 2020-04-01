#include <stdio.h> 


	int i,z,j,n; //variable declaration

	int BT[10],p_no[10],bill[10]; //BT=brust time ,p_no processno

	float cost;

void billfn() //bill generation

{		 

printf( "STUDENT_NO\t\tTOTAL GIFTS PURCHASED\t\tBILL\n\n"); 

	 for (i = 0; i < n; i++) 

		 { 

	 	printf("STUDENT NO. = %d \t\t" ,p_no[i]);

		 printf("%d \t\t\t",BT[i]);

		 bill[i]= cost * BT[i]; //calculating cost 
	 	printf("%d \t\t\t",bill[i]); 

	 printf("\n");

	 }

}

void get() //list of gifts taken by students (entered value by user)

{

printf("\n\n");
printf("\n\n      ***ENTERED DATA***      \n\n");

	 printf( "\nSTUDENT NO.\t\tNO.OF GIFTS PURCHASED \n\n"); 
	 for (i = 0; i < n; i++)

	 { 

		printf("STUDENT NO. = %d \t\t" ,p_no[i]); //process no
        printf("%d \t\t\t",BT[i]); //brust time
        printf("\n\n");

	 } 

	}

void sorting() //arrangement of students according to no of gifts chosen 

{ 

	printf("\n      ***ORDER OF BILLED STUDENTS***   \n\n\n");

	 for(i=0;i<n;i++)

{

	for(j=i+1;j<n;++j)

	{

	if(BT[i]<BT[j]) //student with max no of gifts is given priority

	{

		 z=BT[i]; //swapping the values 
         BT[i]=BT[j];
         BT[j]=z;
         z=p_no[i]; //z is temporary variabl
         p_no[i]=p_no[j]; //swapping the process no's
         p_no[j]=z;

}
}


} }

int main() 

{ 

	 printf("ENTER THE NO OF STUDENTS WHO PURCHASE GIFT :- "); // process number initialization

scanf("%d",&n);

printf("ENTER THE COST OF ONE GIFT :- ");

scanf("%f",&cost);

printf("\n          ***ENTER THE NUMBER OF GIFTS CORRESPONDING TO EACH STUDENT***          \n");

for(i=0;i<n;i++)

{

printf("\nSTUDENT_NO[%d] \n",i+1);

printf("ENTER THE NUMBER OF GIFTS PURCHASED : ");//user input data

scanf("%d",&BT[i]);

p_no[i]=i+1; //its process number 

}

get();


sorting();


billfn();

}




