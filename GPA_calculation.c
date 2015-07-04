/*GPA Calculator System*/

#include<stdio.h>	/*Standard Library, Input/Output, header file*/
#include<string.h>	/*String-Handling Library, provides function for 
                      string-manipulation*/

void main(void)		/*function main begins program execution*/
{					/*Segment starts*/
	
	/*Variable Declaration*/
	int counter,registered_subject,semester;
	double credit_hours,grade_points,points,total_credit_hours,total_points,GPA;
	char student_name[50],student_ID[10],subject_code[9],grade[3];

	/*Initialization Phase*/
	points=0.00;				/*Initialize points to 0.00*/
	total_credit_hours=0.00;	/*Initialize total of credit hours to 0.00*/
	total_points=0.00;			/*Initialize total points to 0.00*/
	GPA=0.00;					/*Initialize GPA to 0.00*/
	counter=1;					/*Initialize loop counter to 1*/

	/*Display a welcome message*/
	printf("\n*******WeLcoMe To NuRuL's, aJiB's, & ShaFix's gRaDinG SysTeM*******\n\n");	
	
	printf("Please enter your name      : ");	/*Prompt for student's name input*/
	gets(student_name);							/*Read student's name from user*/
	
	printf("Please enter your ID number : ");	/*Prompt for ID number input*/
	gets(student_ID);							/*Read ID number from user*/
	
	printf("\n");								/*Print a new line*/
	printf("Which semester are you in?    ");	/*Ask the user for which semester to be input the data*/
	scanf("%d",&semester);						/*Read the semester number from user*/
	
	printf("\n");								/*Print a new line*/
	/*Prompt for number of registered subjects input*/
	printf("How many subject have you registered for this semester? : ");	
	/*Read the number of registered subjects from user*/
	scanf("%d",&registered_subject);										
	
	/*Processing phase using counter-controlled loop and if...else selection structure*/
	while(counter<=registered_subject)					/*The number of loop depends on 
		                                                  the number of registered subject */
	{	/*Begins while loop*/		
		printf("\n");									/*Print a new line*/
		printf("Enter the code for this subject : ");	/*Prompt for subject code input*/
		scanf("%s",&subject_code);						/*Read subject code from user*/
		
		printf("Enter credit hours for the subject : ");/*Prompt for credit hour input*/
		scanf("%lf",&credit_hours);						/*Read the credit hour from user*/

		printf("Enter grade or status : ");				/*Prompt for grade or status input for the subject*/
		scanf("%s",&grade);								/*Read for subject grade or status from the user*/
	
		/*strcmp is a string-comparison function use to compare strings.The comparison process 
		  will be made character by character.This function will returns 0 if the two strings 
		  are equal, a negative value if the first string is less than the second string, and 
		  a positive value if the first string is greater than the second string.*/
		
		/*The if...else selection structure begin here. It includes the strcmp function that will 
		  compare the variable grade which will read the input from the user with a specified string.*/
		
		/*If the user entered string "A"*/
		if(strcmp(grade,"A")==0)		/*This function will compare the grade input with the string "A"
			                              and check whether they are equal to execute the statement*/
			grade_points=4.00;			/*Initialize grade points value to 4.00*/
		
		/*If the user entered string "A-"*/
		else if(strcmp(grade,"A-")==0)	/*This function will compare the grade input with the string "A-"
										  and check whether they are equal to execute the statement*/
			grade_points=3.67;			/*Initialize grade points value to 3.67*/
		
		/*If the user entered string "B+"*/
		else if(strcmp(grade,"B+")==0)  /*This function will compare the grade input with the string "B+"
										  and check whether they are equal to execute the statement*/
			grade_points=3.33;			/*Initialize grade points value to 3.33*/

		/*If the user entered string "B"*/
		else if(strcmp(grade,"B")==0)	/*This function will compare the grade input with the string "B"
										  and check whether they are equal to execute the statement*/
			grade_points=3.00;			/*Initialize grade points value to 3.00*/

		/*If the user entered string "B-"*/
		else if(strcmp(grade,"B-")==0)	/*This function will compare the grade input with the string "B-"
										  and check whether they are equal to execute the statement*/
			grade_points=2.67;			/*Initialize grade points value to 2.67*/
		
		/*If the user entered string "C+"*/
		else if(strcmp(grade,"C+")==0)	/*This function will compare the grade input with the string "C+"
										  and check whether they are equal to execute the statement*/
			grade_points=2.33;			/*Initialize grade points value to 2.33*/

		/*If the user entered string "C"*/
		else if(strcmp(grade,"C")==0)	/*This function will compare the grade input with the string "C"
										  and check whether they are equal to execute the statement*/
			grade_points=2.00;			/*Initialize grade points value to 2.00*/

		/*If the user entered string "C-"*/
		else if(strcmp(grade,"C-")==0)	/*This function will compare the grade input with the string "C-"
										  and check whether they are equal to execute the statement*/
			grade_points=1.67;			/*Initialize grade points value to 1.67*/

		/*If the user entered string "D+"*/
		else if(strcmp(grade,"D+")==0)	/*This function will compare the grade input with the string "D+"
										  and check whether they are equal to execute the statement*/
			grade_points=1.33;			/*Initialize grade points value to 1.33*/

		/*If the user entered string "D"*/
		else if(strcmp(grade,"D")==0)	/*This function will compare the grade input with the string "D"
										  and check whether they are equal to execute the statement*/
			grade_points=1.00;			/*Initialize grade points value to 1.00*/

		/*If the user entered string "E"*/
		else if(strcmp(grade,"E")==0)	/*This function will compare the grade input with the string "E"
										  and check whether they are equal to execute the statement*/
			grade_points=0.00;			/*Initialize grade points value to 0.00*/

		/*If the user entered string "BS"*/
		else if(strcmp(grade,"BS")==0)	/*This function will compare the grade input with the string "BS"
										  and check whether they are equal to execute the statement*/
		{	
			printf("Incomplete\n");		/*Display the message "Incomplete"*/
			grade_points=0.00;			/*Initialize grade points value to 0.00*/
			/*Deduct or minus the credit hour value read from user input*/
			credit_hours=credit_hours-credit_hours;
		}
		/*If the user entered string "PK"*/
		else if(strcmp(grade,"PK")==0)	/*This function will compare the grade input with the string "PK"
										  and check whether they are equal to execute the statement*/
		{	
			printf("Credit Transfer\n");/*Display the message "Credit Transfer"*/
			grade_points=0.00;			/*Initialize grade points value to 0.00*/
			/*Deduct or minus the credit hour value read from user input*/
			credit_hours=credit_hours-credit_hours;
		}
		/*If the user entered string "LU"*/
		else if(strcmp(grade,"LU")==0)	/*This function will compare the grade input with the string "LU"
										  and check whether they are equal to execute the statement*/
		{	
			printf("Pass\n");			/*Display the message "Pass"*/
			grade_points=0.00;			/*Initialize grade points value to 0.00*/
			/*Deduct or minus the credit hour value read from user input*/
			credit_hours=credit_hours-credit_hours;
		}
		/*If the user entered string "GA"*/
		else if(strcmp(grade,"GA")==0)	/*This function will compare the grade input with the string "GA"
										  and check whether they are equal to execute the statement*/
		{	
			printf("Fail\n");			/*Display the message "Fail"*/
			grade_points=0.00;			/*Initialize grade points value to 0.00*/
			/*Deduct or minus the credit hour value read from user input*/
			credit_hours=credit_hours-credit_hours;
		}
		/*If the user entered string "TD"*/
		else if(strcmp(grade,"TD")==0)	/*This function will compare the grade input with the string "TD"
										  and check whether they are equal to execute the statement*/
		{	
			printf("Withdraw\n");		/*Display the message "Withdraw"*/
			grade_points=0.00;			/*Initialize grade points value to 0.00*/
			/*Deduct or minus the credit hour value read from user input*/
			credit_hours=credit_hours-credit_hours;
		}
		/*If the user entered string "AU"*/
		else if(strcmp(grade,"AU")==0)	/*This function will compare the grade input with the string "AU"
										  and check whether they are equal to execute the statement*/
		{	
			printf("Audit\n");			/*Display the message "Audit"*/
			grade_points=0.00;			/*Initialize grade points value to 0.00*/
			/*Deduct or minus the credit hour value read from user input*/
			credit_hours=credit_hours-credit_hours;
		}
		/*If all the conditions above not satisfied, it will execute the condition below"*/
		else
		{
			/*Prompt to the user that the input is invalid"*/
			printf("Invalid Input. Please enter grade or status in capital letters only.\n\n");
			/*Initialize grade points value to 0.00*/
			grade_points=0.00;					
			/*Deduct or minus the credit hour value read from user input*/
			credit_hours=credit_hours-credit_hours;
		}
		/*Calculate the points by multiplying the grade points with the credit hours*/
		points=grade_points*credit_hours;
		/*Add credit hours to total credit hours*/
		total_credit_hours=total_credit_hours+credit_hours;
		/*Add points to total points*/
		total_points=total_points+points;

		counter++;	/*Increment counter*/
	}/*End while*/
	/*Termination phase*/
	
	/*Calculate the GPA by dividing the total points to total credit hours*/
	GPA=total_points/total_credit_hours;
	printf("\n\n");							   /*Insert two new lines*/
	printf("Your GPA is %.2lf\n\n",GPA);       /*Display GPA with two digits of precision*/	

}	/*End function main*/