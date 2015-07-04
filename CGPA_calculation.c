/*CGPA Calculator System*/

#include<stdio.h>	/*Standard Library, Input/Output, header file*/
#include<string.h>	/*String-Handling Library, provides function for 
                      string-manipulation*/

/*Function declaration*/
void menu(void);						/*Declare function menu() with no parameter*/
double zero_points(void);				/*Declare function zero_points() with no parameter*/
void display_CGPA(double);				/*Declare function display_CGPA() with one parameter*/
double calculate_GPA(double,double);	/*Declare function calculate_GPA with two parameters*/

void main(void)		/*function main begins program execution*/
{					/*Segment starts*/
	
	/*Variable Declaration*/
	int subject_counter,registered_subject[20],semester[10],a,b,c,p,q;
	double credit_hours,grade_points,points,total_credit_hours,total_points,GPA,grade_points_repeated_subject;
	double CGPA,sum_points,sum_credit_hours;
	char subject_code[20][30][9],grade[20][30][3],answer,answer2;

	do{					/*Begins do...while for student loop*/

		fflush(stdin);	/*This function is to clear all the input stream*/

		menu();			/*Call function menu()*/
		
		sum_points=0.0;				/*Initialize sum points to 0.00*/
		sum_credit_hours=0.0;		/*Initialize sum credit hours to 0.00*/
		CGPA=0.00;					/*Initialize CGPA to 0.00*/
		a=0;
		c=0;

		do{				/*Begins do...while for semester loop*/	

			points=0.00;				/*Initialize points to 0.00*/
			total_credit_hours=0.00;	/*Initialize total of credit hours to 0.00*/
			total_points=0.00;			/*Initialize total points to 0.00*/
			GPA=0.00;					/*Initialize GPA to 0.00*/
			subject_counter=0;			/*Initialize loop counter to 0*/
			b=0;

			printf("\nSemester	 :	");	/*Prompt for semester input for the subject*/
			scanf("%d", &semester);				/*Read the semester from user*/
							
			/*Prompt for number of registered subjects input*/
			printf("\nHow many subject have you registered for this semester? : ");	
			
			/*Read the number of registered subjects from user*/
			scanf("%d",&registered_subject[c]);										
			
			/*Processing phase using counter-controlled loop and if...else selection structure*/
			while(subject_counter<registered_subject[c])		/*Begins while loop*/				                                                
			{
				printf("\n");						/*Print a new line*/
				printf("Subject Code     : \t");	/*Prompt for subject code input*/
				scanf("%s",&subject_code[a][b]);	/*Read subject code from user*/
				
				printf("Credit Hour      : \t");	/*Prompt for credit hour input*/
				scanf("%lf",&credit_hours);			/*Read the credit hour from user*/

				printf("Grade or Status  : \t");	/*Prompt for grade or status input for the subject*/
				scanf("%s",&grade[a][b]);			/*Read for subject grade or status from the user*/
			
				/*strcmp is a string-comparison function use to compare strings.The comparison process 
				  will be made character by character.This function will returns 0 if the two strings 
				  are equal, a negative value if the first string is less than the second string, and 
				  a positive value if the first string is greater than the second string.*/
				
				/*The if...else selection structure begin here. It includes the strcmp function that will 
				  compare the variable grade which will read the input from the user with a specified string.*/
				
				/*If the user entered string "A"*/
				if(strcmp(grade[a][b],"A")==0)		/*This function will compare the grade input with the string "A"
												  and check whether they are equal to execute the statement*/
					grade_points=4.00;			/*Initialize grade points value to 4.00*/
				
				/*If the user entered string "A-"*/
				else if(strcmp(grade[a][b],"A-")==0)	/*This function will compare the grade input with the string "A-"
												  and check whether they are equal to execute the statement*/
					grade_points=3.67;			/*Initialize grade points value to 3.67*/
				
				/*If the user entered string "B+"*/
				else if(strcmp(grade[a][b],"B+")==0)  /*This function will compare the grade input with the string "B+"
												  and check whether they are equal to execute the statement*/
					grade_points=3.33;			/*Initialize grade points value to 3.33*/

				/*If the user entered string "B"*/
				else if(strcmp(grade[a][b],"B")==0)	/*This function will compare the grade input with the string "B"
												  and check whether they are equal to execute the statement*/
					grade_points=3.00;			/*Initialize grade points value to 3.00*/

				/*If the user entered string "B-"*/
				else if(strcmp(grade[a][b],"B-")==0)	/*This function will compare the grade input with the string "B-"
												  and check whether they are equal to execute the statement*/
					grade_points=2.67;			/*Initialize grade points value to 2.67*/
				
				/*If the user entered string "C+"*/
				else if(strcmp(grade[a][b],"C+")==0)	/*This function will compare the grade input with the string "C+"
												  and check whether they are equal to execute the statement*/
					grade_points=2.33;			/*Initialize grade points value to 2.33*/

				/*If the user entered string "C"*/
				else if(strcmp(grade[a][b],"C")==0)	/*This function will compare the grade input with the string "C"
												  and check whether they are equal to execute the statement*/
					grade_points=2.00;			/*Initialize grade points value to 2.00*/

				/*If the user entered string "C-"*/
				else if(strcmp(grade[a][b],"C-")==0)	/*This function will compare the grade input with the string "C-"
												  and check whether they are equal to execute the statement*/
					grade_points=1.67;			/*Initialize grade points value to 1.67*/

				/*If the user entered string "D+"*/
				else if(strcmp(grade[a][b],"D+")==0)	/*This function will compare the grade input with the string "D+"
												  and check whether they are equal to execute the statement*/
					grade_points=1.33;			/*Initialize grade points value to 1.33*/

				/*If the user entered string "D"*/
				else if(strcmp(grade[a][b],"D")==0)	/*This function will compare the grade input with the string "D"
												  and check whether they are equal to execute the statement*/
					grade_points=1.00;			/*Initialize grade points value to 1.00*/

				/*If the user entered string "E"*/
				else if(strcmp(grade[a][b],"E")==0)	/*This function will compare the grade input with the string "E"
												  and check whether they are equal to execute the statement*/
					grade_points=0.00;			/*Initialize grade points value to 0.00*/

				/*If the user entered string "BS"*/
				else if(strcmp(grade[a][b],"BS")==0)	/*This function will compare the grade input with the string "BS"
												  and check whether they are equal to execute the statement*/
				{	
					printf("\t\t\tIncomplete\n");		/*Display the message "Incomplete"*/

					/*Call function zero_points() and return a value to variable grade_points*/
					grade_points=zero_points();
					
					credit_hours=0.0;			/*Initialize credit hours value to 0.00*/
				}
				/*If the user entered string "PK"*/
				else if(strcmp(grade[a][b],"PK")==0)	/*This function will compare the grade input with the string "PK"
												  and check whether they are equal to execute the statement*/
				{	
					printf("\t\t\tCredit Transfer\n");/*Display the message "Credit Transfer"*/

					/*Call function zero_points() and return a value to variable grade_points*/
					grade_points=zero_points();
					
					credit_hours=0.0;			/*Initialize credit hours value to 0.00*/
				}
				/*If the user entered string "LU"*/
				else if(strcmp(grade[a][b],"LU")==0)	/*This function will compare the grade input with the string "LU"
												  and check whether they are equal to execute the statement*/
				{	
					printf("\t\t\tPass\n");			/*Display the message "Pass"*/

					/*Call function zero_points() and return a value to variable grade_points*/
					grade_points=zero_points();
					
					credit_hours=0.0;			/*Initialize credit hours value to 0.00*/
				}
				/*If the user entered string "GA"*/
				else if(strcmp(grade[a][b],"GA")==0)	/*This function will compare the grade input with the string "GA"
												  and check whether they are equal to execute the statement*/
				{	
					printf("\t\t\tFail\n");			/*Display the message "Fail"*/

					/*Call function zero_points() and return a value to variable grade_points*/
					grade_points=zero_points();
					
					credit_hours=0.0;			/*Initialize credit hours value to 0.00*/
				}
				/*If the user entered string "TD"*/
				else if(strcmp(grade[a][b],"TD")==0)	/*This function will compare the grade input with the string "TD"
												  and check whether they are equal to execute the statement*/
				{	
					printf("\t\t\tWithdraw\n");		/*Display the message "Withdraw"*/
					
					/*Call function zero_points() and return a value to variable grade_points*/
					grade_points=zero_points();
					
					credit_hours=0.0;			/*Initialize credit hours value to 0.00*/
				}
				/*If the user entered string "AU"*/
				else if(strcmp(grade[a][b],"AU")==0)	/*This function will compare the grade input with the string "AU"
												  and check whether they are equal to execute the statement*/
				{	
					printf("\t\t\tAudit\n");			/*Display the message "Audit"*/
					
					/*Call function zero_points() and return a value to variable grade_points*/
					grade_points=zero_points();
					
					credit_hours=0.0;			/*Initialize credit hours value to 0.00*/
				}
				/*If all the conditions above not satisfied, it will execute the condition below"*/
				else
				{
					/*Prompt to the user that the input is invalid"*/
					printf("Invalid Input. Please enter grade or status in capital letters only.\n\n");
					
					/*Call function zero_points() and return a value to variable grade_points*/
					grade_points=zero_points();	
					
					credit_hours=0.0;			/*Initialize credit hours value to 0.00*/
				}

//check for repeat subject
				for(p=0;p<=c;p++)
				{
					for(q=0;q<=registered_subject[c];q++)
					{
						if(strcmp(subject_code[a][b],subject_code[p][q])==0)
						{	
							if(strcmp(grade[a][b],grade[p][q])!=0)
							{
								if(strcmp(grade[p][q],"A")==0)			/*This function will compare the grade input with the string "A"
																		  and check whether they are equal to execute the statement*/
								grade_points_repeated_subject=4.00;		/*Initialize grade points value to 4.00*/
							
								/*If the user entered string "A-"*/
								else if(strcmp(grade[p][q],"A-")==0)	/*This function will compare the grade input with the string "A-"
																		  and check whether they are equal to execute the statement*/
								grade_points_repeated_subject=3.67;		/*Initialize grade points value to 3.67*/
								
								/*If the user entered string "B+"*/
								else if(strcmp(grade[p][q],"B+")==0)    /*This function will compare the grade input with the string "B+"
																		  and check whether they are equal to execute the statement*/
								grade_points_repeated_subject=3.33;		/*Initialize grade points value to 3.33*/

								/*If the user entered string "B"*/
								else if(strcmp(grade[p][q],"B")==0)	    /*This function will compare the grade input with the string "B"
																	      and check whether they are equal to execute the statement*/
								grade_points_repeated_subject=3.00;		/*Initialize grade points value to 3.00*/

								/*If the user entered string "B-"*/
								else if(strcmp(grade[p][q],"B-")==0)	/*This function will compare the grade input with the string "B-"
																          and check whether they are equal to execute the statement*/
								grade_points_repeated_subject=2.67;		/*Initialize grade points value to 2.67*/
								
								/*If the user entered string "C+"*/
								else if(strcmp(grade[p][q],"C+")==0)	/*This function will compare the grade input with the string "C+"
																          and check whether they are equal to execute the statement*/
								grade_points_repeated_subject=2.33;		/*Initialize grade points value to 2.33*/

								/*If the user entered string "C"*/
								else if(strcmp(grade[p][q],"C")==0)	    /*This function will compare the grade input with the string "C"
																          and check whether they are equal to execute the statement*/
								grade_points_repeated_subject=2.00;		/*Initialize grade points value to 2.00*/

								/*If the user entered string "C-"*/
								else if(strcmp(grade[p][q],"C-")==0)	/*This function will compare the grade input with the string "C-"
																          and check whether they are equal to execute the statement*/
								grade_points_repeated_subject=1.67;		/*Initialize grade points value to 1.67*/

								/*If the user entered string "D+"*/
								else if(strcmp(grade[p][q],"D+")==0)	/*This function will compare the grade input with the string "D+"
																          and check whether they are equal to execute the statement*/
								grade_points_repeated_subject=1.33;		/*Initialize grade points value to 1.33*/

								/*If the user entered string "D"*/
								else if(strcmp(grade[p][q],"D")==0)	    /*This function will compare the grade input with the string "D"
																          and check whether they are equal to execute the statement*/
								grade_points_repeated_subject=1.00;		/*Initialize grade points value to 1.00*/

								/*If the user entered string "E"*/
								else if(strcmp(grade[p][q],"E")==0)	    /*This function will compare the grade input with the string "E"
																          and check whether they are equal to execute the statement*/
								grade_points_repeated_subject=0.00;		/*Initialize grade points value to 0.00*/

								/*If the user entered string "BS"*/
								else if(strcmp(grade[p][q],"BS")==0)	/*This function will compare the grade input with the string "BS"
																          and check whether they are equal to execute the statement*/
								{	
									printf("\t\t\tIncomplete\n");		/*Display the message "Incomplete"*/
									
									/*Call function zero_points() and return a value to variable grade_points*/
									grade_points_repeated_subject=zero_points();
									
									credit_hours=0.0;					/*Initialize credit hours value to 0.00*/
								}
								/*If the user entered string "PK"*/
								else if(strcmp(grade[p][q],"PK")==0)	/*This function will compare the grade input with the string "PK"
																  and check whether they are equal to execute the statement*/
								{	
									printf("\t\t\tCredit Transfer\n");	/*Display the message "Credit Transfer"*/
									
									/*Call function zero_points() and return a value to variable grade_points*/
									grade_points_repeated_subject=zero_points();
									
									credit_hours=0.0;					/*Initialize credit hours value to 0.00*/
								}
								/*If the user entered string "LU"*/
								else if(strcmp(grade[p][q],"LU")==0)	/*This function will compare the grade input with the string "LU"
																  and check whether they are equal to execute the statement*/
								{	
									printf("\t\t\tPass\n");				/*Display the message "Pass"*/
									
									/*Call function zero_points() and return a value to variable grade_points*/
									grade_points_repeated_subject=zero_points();
									
									credit_hours=0.0;					/*Initialize credit hours value to 0.00*/
								}
								/*If the user entered string "GA"*/
								else if(strcmp(grade[p][q],"GA")==0)	/*This function will compare the grade input with the string "GA"
																		  and check whether they are equal to execute the statement*/
								{	
									printf("\t\t\tFail\n");				/*Display the message "Fail"*/
									
									/*Call function zero_points() and return a value to variable grade_points*/
									grade_points_repeated_subject=zero_points();
									
									credit_hours=0.0;					/*Initialize credit hours value to 0.00*/
								}
								/*If the user entered string "TD"*/
								else if(strcmp(grade[p][q],"TD")==0)	/*This function will compare the grade input with the string "TD"
																          and check whether they are equal to execute the statement*/
								{	
									printf("\t\t\tWithdraw\n");			/*Display the message "Withdraw"*/
									
									/*Call function zero_points() and return a value to variable grade_points*/
									grade_points_repeated_subject=zero_points();
									
									credit_hours=0.0;			/*Initialize credit hours value to 0.00*/
								}
								/*If the user entered string "AU"*/
								else if(strcmp(grade[p][q],"AU")==0)	/*This function will compare the grade input with the string "AU"
																  and check whether they are equal to execute the statement*/
								{	
									printf("\t\t\tAudit\n");			/*Display the message "Audit"*/
									
									/*Call function zero_points() and return a value to variable grade_points*/
									grade_points_repeated_subject=zero_points();
									
									credit_hours=0.0;			        /*Initialize credit hours value to 0.00*/
								}

								/*Calculate the points by multiplying the grade points with the credit hours*/
								points=grade_points*credit_hours;
								/*Add credit hours to total credit hours*/
								total_credit_hours=total_credit_hours+credit_hours;
								/*Add points to total points*/
								total_points=total_points+points;
								sum_points-=grade_points_repeated_subject*credit_hours;
								sum_credit_hours-=credit_hours;
							
}
							else
							{
								/*Calculate the points by multiplying the grade points with the credit hours*/
								points=grade_points*credit_hours;
								/*Add credit hours to total credit hours*/
								total_credit_hours=total_credit_hours+credit_hours;
								/*Add points to total points*/
								total_points=total_points+points;
								
							}

						q=registered_subject[c]+1;
						p=c+1;				//statement to stop the loop
						
						}												
					}
				}
			
				subject_counter++;				/*Increment subject counter by 1*/
				b++;
			}
			/*Call function calculate_GPA with two parameters which are total_points and total_credit_hours
			  and return the value to variable GPA*/
			
			GPA=calculate_GPA(total_points,total_credit_hours);								  
			printf("\nGPA \t\t :\t%.2lf\n\n",GPA);				/*Display GPA*/

			sum_points=sum_points+total_points;	/*Add total_points to sum_points*/
												/*Add total_credit_hours to sum_credit_hours*/
			sum_credit_hours=sum_credit_hours+total_credit_hours;

			/*Ask user weather want to continue for another semester or not*/
			printf("\nContinue for another semester? Y/N ");
			scanf("%s",&answer);				/*Read the answer from user*/
			c++;
			a++;
		
		}while(answer=='Y'||answer=='y');	/*End do...while for semester loop*/

		/*Calculate CGPA by multiplying the sum_points with the sum_credit_hours*/
		CGPA=sum_points/sum_credit_hours;	
		/*Call function display_CGPA with one parameter which is CGPA*/
		display_CGPA(CGPA);					

		/*Ask user weather want to continue for another student or not*/
		printf("\nContinue for another student? Y/N ");
		scanf("%s",&answer2);				/*Read the answer from user*/
		printf("\n");						/*Print a new line*/

	}while(answer2=='Y'||answer2=='y');	/*End do...while for student loop*/
}	/*End of function main*/

/*This function receive no input parameter and return nothing*/
void menu(void)
{
	/*Declaration of local variable*/
	char student_name[50],student_ID[10];
	
	/*Print a welcome message*/
	printf("\n\n**************WeLcoMe To NuRuL's, aJiB's, & ShaFix's gRaDinG SysTeM*************\n\n");	
	/*Prompt for student name*/
	printf("Name \t\t : \t");
	/*Read the student name from user*/
	gets(student_name);	
	/*Prompt for ID number*/
	printf("ID \t\t : \t");
	/*Read for student ID*/
	gets(student_ID);
}	/*End function*/

/*This function receive no input parameter and return a value*/
double zero_points(void)
{
	return 0.00;	/*return the value 0.00*/
}	/*End function*/

/*This function one input parameter and return nothing*/
void display_CGPA(double final_result)
{
	/*Display final_result*/
	printf("\nCGPA \t\t : \t%.2lf\n\n",final_result);
}	/*End function*/

/*This function receive two input parameters and return a value*/
double calculate_GPA(double x,double y)
{
	double result;
	result=x/y;			/*Calculate result by dividing x to y*/
	return result;		/*Store the value in result*/
}

