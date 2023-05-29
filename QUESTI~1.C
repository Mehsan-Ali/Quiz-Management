#include<stdio.h>
#include<conio.h>

	void main()
	{
	int usra,usrb,usrc,usrd,usre,usr1,usr2,usr3,a,b,c,d,rollno,score=0,scm=0;
	int qoq,noq,i;
	char qct3[34],qzq[200],qzq1[200],qzq2[200],qzq3[200],qzq4[200],qzq5[100],opa1[30],opb1[30],opc1[30],opd1[30],opa[30],opb[30],opc[30],opd[30];
	char q[30],name[20],qct[100],qct1[20],qct2[30],qct4[30],qct5[30],opa2[30],opb2[30],opc2[30],opd2[30],opa3[30],opb3[30],opc3[30],opd3[30],opa4[30],opb4[30],opc4[30],opd4[30],opa5[30],opb5[30],opc5[30],opd5[30];
	mainmenue:
	clrscr();
	printf("--------------------------------------------------------------------------------\n");
	printf("\t\t\t Question Management System\t\t\n");
	printf("--------------------------------------------------------------------------------\n");
	printf("\t\t\t\t  |Welcome|\t\t\n\n\n\n");
	printf("\t1. Computer Science\n");
	printf("\t2. Science\n");
	printf("\t3. Pakistan Studies\n");
	printf("\t4. English\n");
	printf("\t5. Exit\n");
	printf("\n\n\tEnter : ");
	scanf("%d",&usra);

	//// SELECTING SUBJECT WHICH QUIZ HE/SHE WANT TO DO IT.
	switch(usra)
		{
		case 1:
		computersci:
		clrscr();

		printf("\n\t|-------------------------------|\n");
		printf("\n\t|WELCOME IN COMPUTER SCIENCE|\n");
		printf("\n\t|-------------------------------|\n");
		printf("\n\t 1. C PROGRAMMING");
		printf("\n\t 2. BACK");
		printf("\n\t 3. EXIT");
		printf("\n\n\tENTER: ");
		scanf("%d",&usrb);
		clrscr();
		// SELECTING LANGUAGE IN COMPUTER SCIENCE WHICH QUIZ HE/SHE WANT TO DO IT
			switch (usrb)
			{
			case 1:
			clrscr();
			printf("\n\t|-------------------------------|\n");
			printf("\n\t|WELCOME IN C LANGUAGE|\n");
			printf("\n\t|-------------------------------|\n");
			printf("\n\t 1. Quiz");
			printf("\n\t 2. Mid Term");
			printf("\n\t 3. Final Term");
			printf("\n\t 4. MAIN MENU");
			printf("\n\t 5. BACK");
			printf("\n\t 6. EXIT");
			printf("\n\n\tENTER: ");
			scanf("%d",&usr1);
			/// SELECTING MID TERM, FINAL TERM OR QUIZ WHICH U WANT TO ATTEND
			clrscr();
			printf("Enter Number of Question You want to Add : ");
			scanf("%d",&qoq);
			printf("Each question Marks : ");
			scanf("%d",&noq);
			for(i=0 ; i<qoq ; i++)
				{
				switch(i)
					{

					case 0:
					clrscr();
					printf("1. ");
					gets(qzq);
					gets(qzq);

					printf("\n\t--------Options--------\n");
					printf("1. ");
					gets(opa);
					printf("2. ");
					gets(opb);
					printf("3. ");
					gets(opc);
					printf("4. ");
					gets(opd);
					printf("\t------|Enter Correct Option|-----\n\tHere :");
					gets(qct);
					getch();
					break;

					case 1:


					clrscr();
					printf("2. ");
					gets(qzq1);
					getch();
					printf("\n\t--------Options--------\n");
					printf("1. ");
					gets(opa1);
					printf("2. ");
					gets(opb1);
					printf("3. ");
					gets(opc1);
					printf("4. ");
					gets(opd1);
					printf("\t------|Enter Correct Option|-----\n\tHere :");
					gets(qct1);
					getch();
					break;

					case 2:

					clrscr();
					printf("3. ");
					gets(qzq2);
					getch();
					printf("\n\t-------Options-------\n");
					printf("1. ");
					gets(opa2);
					printf("2. ");
					gets(opb2);
					printf("3. ");
					gets(opc2);
					printf("4. ");
					gets(opd2);
					printf("\t------|Enter Correct Option|-----\n\tHere :");
					gets(qct2);
					getch();

					break;

					case 3:

					clrscr();
					printf("4. ");
					gets(qzq3);
					getch();
					printf("\n\t--------Options--------\n");
					printf("1. ");
					gets(opa3);
					printf("2. ");
					gets(opb3);
					printf("3. ");
					gets(opc3);
					printf("4. ");
					gets(opd3);
					printf("\t------|Enter Correct Option|-----\n\tHere :");
					gets(qct3);
					getch();
					break;

					case 4:
					clrscr();
					printf("5. ");
					gets(qzq4);
					printf("\n\t--------Options--------\n");
					printf("1. ");
					gets(opa4);
					printf("2. ");
					gets(opb4);
					printf("3. ");
					gets(opc4);
					printf("4. ");
					gets(opd4);
					printf("\t------|Enter Correct Option|-----\n\tHere :");
					gets(qct4);
					getch();
					break;

					case 5:
					clrscr();
					printf("5. ");
					gets(qzq5);
					printf("\n\t--------Options--------\n");
					printf("1. ");
					gets(opa5);
					printf("2. ");
					gets(opb5);

					printf("3. ");
					gets(opc5);
					printf("4. ");
					gets(opd5);
					printf("\t------|Enter Correct Option|-----\n\tHere :");
					gets(qct5);
					getch();
					break;


					default:
					break;
					}
				    }
				 clrscr();
				printf("\t\t\Student Name: ");
				scanf("%s",&name);
				printf("\t\tRoll no: CSC-22F-");
				scanf("%d",&rollno);
				getch();

		for (i=0 ;i<qoq ;i++)
			{
				switch(i)
				{
				case 0:
				clrscr();
				printf("\n|--------------|");
				printf("Question No. 1|");
				printf("|--------------|");
				printf("\n%s",qzq);
				printf("\n\n\t1. %s\n\t2. %s\n\t3. %s\n\t4. %s\n",opa,opb,opc,opd);
				gets(q);
				gets(q);
				if(q==qct)

					{

					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"True\".");
					getch();
					clrscr();

					}
				else
					{
					score =  score + noq;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				getch();
				break;

				case 1:
				clrscr();
				printf("\n|--------------|");
				printf("Question No. 2|");
				printf("|--------------|");
				printf("\n%s",qzq1);
				printf("\n\n\t1. %s\n\t2. %s\n\t3. %s\n\t4. %s\n",opa1,opb1,opc1,opd1);
				gets(q);
				gets(q);
				if(q==qct)
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"True\".");
					getch();
					clrscr();

					}
				else
					{
					score =  score + noq;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}

				getch();
				break;

				case 2:
				clrscr();
				printf("\n|--------------|");
				printf("Question No. 3|");
				printf("|--------------|");
				printf("\n%s",qzq2);
				printf("\n\n\t1. %s\n\t2. %s\n\t3. %s\n\t4. %s\n",opa2,opb2,opc2,opd2);
				gets(q);
				gets(q);
				if(q==qct)

					{

					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"True\".");
					getch();
					clrscr();

					}
				else
					{
					score =  score + noq;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();

					}

				getch();
				break;

				case 3:
				clrscr();
				printf("\n|--------------|");
				printf("Question No. 4|");
				printf("|--------------|");
				printf("\n%s",qzq3);
				printf("\n\n\t1. %s\n\t2. %s\n\t3. %s\n\t4. %s\n",opa3,opb3,opc3,opd3);
				gets(q);
				if(q==qct)
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"True\".");
					getch();
					clrscr();
					}
				else
					{
					score =  score + noq;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				getch();
				break;


				case 4:
				clrscr();
				printf("\n|--------------|");
				printf("Question No. 5|");
				printf("|--------------|");
				printf("\n%s",qzq4);
				printf("\n\n\t1. %s\n\t2. %s\n\t3. %s\n\t4. %s\n",opa4,opb4,opc4,opd4);
				gets(q);
				if(q==qct)
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"True\".");
					getch();
					clrscr();
					}
				else
					{
					score =  score + noq;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				getch();

				break;


				case 5:
				clrscr();
				printf("\n|--------------|");
				printf("Question No. 6|");
				printf("|--------------|");
				printf("\n%s",qzq5);
				printf("\n\n\t1. %s\n\t2. %s\n\t3. %s\n\t4. %s\n",opa5,opb5,opc5,opd5);
				gets(q);
				if(q==qct)
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"True\".");
					getch();
					clrscr();
					}
				else
					{
					score =  score + noq;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}

				getch();
				break;


				default:
				break;
				}
			}
			clrscr();
			printf("\t\t-------YOUR SCORE OUT OF %d-------\n\n\n",noq*qoq);
			printf("\t\tName : %s \n\n \t\tRoll No: CSC-22F-0%d \n\n\t\tScore : %d ",name,rollno,score);
			getch();
			clrscr();
			printf("\t---------What You Want---------\n");
			printf("\t\t1. Main Menue\n");
			printf("\t\t2. Exit\n");
			printf("\t\tEnter : ");
			scanf("%d",&usr1);
			switch(usr1)
				{
				case 1:
				clrscr();
				goto mainmenue;
				break;

				case 2:
				clrscr();
				return 0;
				break;

				default:
				break;
				}
			 getch();



				//User Taking Question Showing


				switch (usr1)
				{
				/// Starting Quzi Qustions
			   /*	case 1:
				clrscr();
				printf("\t\t\Student Name: ");
				scanf("%s",&name);
				printf("\t\tRoll no: CSC-22F-");
				scanf("%d",&rollno);
				printf("\n|--------------|");
				printf("Question No. 1|");
				printf("|--------------|");
				printf("\n\n What is the another name of language C++ ? \n");
				printf("\n\n\t1. PHP\n\t2. JAVA\n\t3. OOPS\n\t4. C");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
					if(a==3)
					{
					score = score + 1;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"OOP\".");
					getch();
					clrscr();
					}
				printf("\n\n The prototype of a function can be used to? \n");
				printf("\n\n\t1. Define a function\n\t2. Declare a function\n\t3.  Erase a function\n\t4.  None of the above");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				      if(a==2)

					{
					score = score + 1;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"Declare a function\".");
					getch();
					clrscr();
					}
				printf("\n\n How do you insert COMMENTS in C code? \n");
				printf("\n\n\t1. //This is a comment\n\t2. *This is a comment\n\t3.  --This is a comment\n\t4.  #This is a comment");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				      if(a==1)

					{
					score = score + 1;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"//This is a comment\".");
					getch();
					clrscr();
					}
				printf("\n\n What is the built in library function to adjust the allocated dynamic memory size? \n");
				printf("\n\n\t1. malloc\n\t2. calloc\n\t3.  realloc\n\t4.   resize");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				      if(a==3)

					{
					score = score + 1;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"realloc\".");
					getch();
					clrscr();
					}
				printf("\n\n  What value strcmp() function returns when two strings are the same? \n");
				printf("\n\n\t1. 0\n\t2. 2\n\t3.  1\n\t4.  Error");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				      if(a==1)

					{
					score = score + 1;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"0\".");
					getch();
					clrscr();
					}
				printf("\n\n When a variable is created in C, a memory address is assigned to the variable? \n");
				printf("\n\n\t1. False\n\t2. True\n\t3.  None of them\n\t4.  Both of them");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				      if(a==2)

					{
					score = score + 1;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"True\".");
					getch();
					clrscr();
					}
				printf("\n|--------------|");
				printf("Question No. 7|");
				printf("|--------------|");
				printf("\n\n How can you create a variable with the numeric value 5? \n");
				printf("\n\n\t1. int num = 5;\n\t2. num = 5;\n\t3.  val num = 5;\n\t4.  num = 5 int;");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				      if(a==1)

					{
					score = score + 1;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"int num = 5;  \".");
					getch();
					clrscr();
					}
				printf("\n|--------------|");
				printf("Question No. 8|");
				printf("|--------------|");
				printf("\n\n How can you create a variable with the floating number 2.8? \n");
				printf("\n\n\t1. num = 2.8 double;\n\t2. num = 2.8 float;\n\t3.  float num = 2.8;  \n\t4.  val num = 2.8;");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				      if(a==3)

					{
					score = score + 1;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"float num = 2.8;  \".");
					getch();
					clrscr();
					}
				printf("\n|--------------|");
				printf("Question No. 9|");
				printf("|--------------|");
				printf("\n\n Which operator is used to add together two values? \n");
				printf("\n\n\t1. The + sign  \n\t2. The & signt\n\t3.  The * sign\n\t4.  The ADD keyword");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				      if(a==1)

					{
					score = score + 1;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"The + sign \".");
					getch();
					clrscr();
					}
				printf("\n|--------------|");
				printf("Question No. 10|");
				printf("|--------------|");
				printf("\n\n Which function is often used to output values and print text? \n");
				printf("\n\n\t1. write()\n\t2. printword()\n\t3.  printf()  \n\t4.  output()");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				      if(a==3)

					{
					score = score + 1;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"printf()\".");
					getch();
					clrscr();
					}
			printf("\t\t-------YOUR SCORE OUT OF 10-------\n\n\n");
			printf("\t\tName : %s \n\n \t\tRoll No: CSC-22F-0%d \n\n\t\tScore : %d ",name,rollno,score);
		     */	getch();

			clrscr();
			printf("\t--------WHAT YOU WANT--------\n");
			printf("\n\t1) MAIN MENUE.\n");
			printf("\t2) EXIT.\n");
			printf(" ");
			scanf("%d",&b);
				switch(b)
				{
				case 1:
				goto mainmenue;
				getch();
				break;

				case 2:
				return 0;
				break;

				default:
				printf("\n\t|------------|\n");
				printf("\n\t|WRONGE INPUT|\n");
				printf("\t|------------|\n");
				break;
				}

				break;


				break;

				case 2:
				clrscr();
				clrscr();
				printf("\t\t\Student Name: ");
				scanf("%s",&name);
				printf("\t\tRoll no: CSC-22F-");
				scanf("%d",&rollno);
				printf("\n|--------------|");
				printf("Question No. 1|");
				printf("|--------------|");
				printf("\n\n Which of the following statement about functions of false? \n");
				printf("\n\n\t1. A function can call itself)\n\t2. A function can call another function\n\t3. Constants can appear in the formal argument list\n\t4.  More than one function is allowed in a program unit");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				      if(a==3)

					{
					score = score + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"Constants can appear in the formal argument list\".");
					getch();
					clrscr();
					}
				printf("\n|--------------|");
				printf("Question No. 2|");
				printf("|--------------|");
				printf("\n\n The Turbo C implementation of C Language supports? \n");
				printf("\n\n\t1.  High level file I/O\n\t2. System level file I/O\n\t3.  Both a and b\n\t4.  Executable files only");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				      if(a==3)

					{
					score = score + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"Both a and b\".");
					getch();
					clrscr();
					}
				printf("\n|--------------|");
				printf("Question No. 3|");
				printf("|--------------|");
				printf("\n\n What is the maximum resolution supported by VGA adapter? \n");
				printf("\n\n\t1. 450 x 300\n\t2. 640 x 200\n\t3. 640 x 480\n\t4. 1024 x 768");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				      if(a==3)

					{
					score = score + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"640 x 480\".");
					getch();
					clrscr();
					}
				printf("\n|--------------|");
				printf("Question No. 4|");
				printf("|--------------|");
				printf("\n\n The address of a variable can be obtained using _____ operator? \n");
				printf("\n\n\t1. *\n\t2. &\n\t3. ?\n\t4.  ;");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				      if(a==2)

					{
					score = score + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"&\".");
					getch();
					clrscr();
					}
				printf("\n|--------------|");
				printf("Question No. 5|");
				printf("|--------------|");
				printf("\n\n If one or more structure are other structures, then the structure is known as? \n");
				printf("\n\n\t1. Nested structure\n\t2. Structured structure\n\t3.  Invalid structure\n\t4.  Self referential structure");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				      if(a==1)

					{
					score = score + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"Nested structure\".");
					getch();
					clrscr();
					}
				printf("\n|--------------|");
				printf("Question No. 6|");
				printf("|--------------|");
				printf("\n\n The C language allow arguments to be passed? \n");
				printf("\n\n\t1. Only call by value\n\t2. Only call by reference\n\t3.  Both call by value as well as call by reference\n\t4.  None of the above");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				      if(a==3)

					{
					score = score + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"Both call by value as well as call by reference\".");
					getch();
					clrscr();
					}
				printf("\n|--------------|");
				printf("Question No. 7|");
				printf("|--------------|");
				printf("\n\n Scope of the variable refers to? \n");
				printf("\n\n\t1. Duration for which the variable retains a given value during program execution\n\t2.  Part of a program in which the variable can be recognized\n\t3.  Value of the variable\n\t4.  Data type of the variable");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				      if(a==2)

					{
					score = score + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \" Part of a program in which the variable can be recognized\".");
					getch();
					clrscr();
					}
				printf("\n|--------------|");
				printf("Question No. 8|");
				printf("|--------------|");
				printf("\n\n A bit field is a? \n");
				printf("\n\n\t1. One or more adjacent bits within a word\n\t2. Member of a structure can be passed as an argument\n\t3.  Pointer variable in a structure\n\t4.  None of above");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				      if(a==1)

					{
					score = score + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"One or more adjacent bits within a word\".");
					getch();
					clrscr();
					}
				printf("\n|--------------|");
				printf("Question No. 9|");
				printf("|--------------|");
				printf("\n\n Which of the following header file must be included in your property if you want to use graphics property? \n");
				printf("\n\n\t1. screen.h\n\t2. graphics.h\n\t3.  graph.h\n\t4.  stdio.h");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				      if(a==2)

					{
					score = score + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"graphics.h\".");
					getch();
					clrscr();
					}
				printf("\n|--------------|");
				printf("Question No. 10|");
				printf("|--------------|");
				printf("\n\n Every string must be terminated by? \n");
				printf("\n\n\t1. Linefeed character\n\t2. Null character\n\t3.  Newline character\n\t4.  Carriage return character");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				      if(a==2)

					{
					score = score + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"Null character\".");
					getch();
					clrscr();
					}
				printf("\n|--------------|");
				printf("Question No. 11|");
				printf("|--------------|");
				printf("\n\n Almost every C program begins with the statement? \n");
				printf("\n\n\t1. # include <stdio.h>\n\t2. Print f( )\n\t3. SCAN( )\n\t4.  Main( )");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				      if(a==1)

					{
					score = score + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"# include <stdio.h>\".");
					getch();
					clrscr();
					}
				printf("\n|--------------|");
				printf("Question No. 12|");
				printf("|--------------|");
				printf("\n\n The two operators && and || are? \n");
				printf("\n\n\t1. Relational operators\n\t2. Equality operators\n\t3.  Arithmetic operators\n\t4.  Logical operators");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				      if(a==4)

					{
					score = score + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"Logical operators\".");
					getch();
					clrscr();
					}
				printf("\n|--------------|");
				printf("Question No. 13|");
				printf("|--------------|");
				printf("\n\n A variable that holds the memory address of another object is called? \n");
				printf("\n\n\t1. Memory variable\n\t2. Constant\n\t3.  Pointer\n\t4.  Integer");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				      if(a==3)

					{
					score = score + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"Pointer\".");
					getch();
					clrscr();
					}
				printf("\n|--------------|");
				printf("Question No. 14|");
				printf("|--------------|");
				printf("\n\n Enumeration is a? \n");
				printf("\n\n\t1.  Set of legal values possible for a variable\n\t2. List of operators\n\t3.  List of strings\n\t4.  Set of numbers");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				      if(a==1)

					{
					score = score + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \" Set of legal values possible for a variable\".");
					getch();
					clrscr();
					}
				printf("\n|--------------|");
				printf("Question No. 15|");
				printf("|--------------|");
				printf("\n\n In C, square brackets [ ] are used in? \n");
				printf("\n\n\t1. Statements\n\t2. Functions\n\t3.  Arrays\n\t4.  Pointer");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				      if(a==3)

					{
					score = score + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"Arrays\".");
					getch();
					clrscr();
					}
				printf("\n|--------------|");
				printf("Question No. 16|");
				printf("|--------------|");
				printf("\n\n Main( ) is an example of? \n");
				printf("\n\n\t1. Header\n\t2. Statement\n\t3.  User defined function\n\t4.  Library function");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				      if(a==3)

					{
					score = score + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"User defined function\".");
					getch();
					clrscr();
					}
				printf("\n|--------------|");
				printf("Question No. 17|");
				printf("|--------------|");
				printf("\n\n By default, any real number in ‘C’ is treated as? \n");
				printf("\n\n\t1. depends upon memory model that you are using\n\t2.  a long double\n\t3.  a double\n\t4.  a float");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				      if(a==3)

					{
					score = score + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"a double\".");
					getch();
					clrscr();
					}
				printf("\n|--------------|");
				printf("Question No. 18|");
				printf("|--------------|");
				printf("\n\n Which of the following operators in ‘C’ programming language takes only integer operands? \n");
				printf("\n\n\t1. +\n\t2. *\n\t3. /\n\t4.  %");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				      if(a==4)

					{
					score = score + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"%\".");
					getch();
					clrscr();
					}
				printf("\n|--------------|");
				printf("Question No. 19|");
				printf("|--------------|");
				printf("\n\n An identifier in C? \n");
				printf("\n\n\t1. can obtain both upper case and lower case\n\t2. is made up of letters numerals and the underscore\n\t3.  is a name of thing such as variable and function\n\t4.  all of these");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				      if(a==4)

					{
					score = score + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"all of these\".");
					getch();
					clrscr();
					}
				printf("\n|--------------|");
				printf("Question No. 20|");
				printf("|--------------|");
				printf("\n\n Which of the following is a storage class specification in C? \n");
				printf("\n\n\t1. static\n\t2. automatic\n\t3.  external\n\t4.  all of these");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				      if(a==4)

					{
					score = score + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"all of these\".");
					getch();
					clrscr();
					}

			printf("\t\t-------YOUR SCORE OUT OF 20-------\n\n\n");
			printf("\t\tName : %s \n\n \t\tRoll No: CSC-22F-0%d \n\n\t\tScore : %d ",name,rollno,score);
			getch();

			clrscr();
			printf("\t--------WHAT YOU WANT--------\n");
			printf("\n\t1) MAIN MENUE.\n");
			printf("\t2) EXIT.\n");
			printf(" ");
			scanf("%d",&b);
				switch(b)
				{
				case 1:
				goto mainmenue;
				getch();
				break;

				case 2:
				return 0;
				break;

				default:
				printf("\n\t|------------|\n");
				printf("\n\t|WRONGE INPUT|\n");
				printf("\t|------------|\n");
				break;
				}



				break;

				case 3:
				clrscr();

				printf("\t\t\Student Name: ");
				scanf("%s",&name);
				printf("\t\tRoll no: CSC-22F-");
				scanf("%d",&rollno);
				printf("\n|--------------|");
				printf("Question No. 1|");
				printf("|--------------|");
				printf("\n\n The method of checking the pseudo codes is called ___? \n");
				printf("\n\n\t1. Sequencing\n\t2. Walk through\n\t3.  Branching\n\t4.  Iteration");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				      if(a==2)

					{
					score = score + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"Walk through\".");
					getch();
					clrscr();
					}
				printf("\n|--------------|");
				printf("Question No. 2|");
				printf("|--------------|");
				printf("\n\n Keywords cannot be used as ____? \n");
				printf("\n\n\t1. Variables\n\t2. Variables or constant names\n\t3.  Constant names\n\t4.  None of the above");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				      if(a==4)

					{
					score = score + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"Variables or constant names\".");
					getch();
					clrscr();
					}
				printf("\n|--------------|");
				printf("Question No. 3|");
				printf("|--------------|");
				printf("\n\n Which of the following are called white space characters? \n");
				printf("\n\n\t1. The blank space\n\t2.  New line character\n\t3.  Blank space & new line character\n\t4.  None of the above");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				      if(a==3)

					{
					score = score + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"Blank space & new line character\".");
					getch();
					clrscr();
					}
				printf("\n|--------------|");
				printf("Question No. 4|");
				printf("|--------------|");
				printf("\n\n ____ are declared within the body of a function? \n");
				printf("\n\n\t1.  Variables\n\t2.  Local variables\n\t3.  Main functions\n\t4.  Arrays");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				      if(a==2)

					{
					score = score + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"Local variables\".");
					getch();
					clrscr();
					}
				printf("\n|--------------|");
				printf("Question No. 5|");
				printf("|--------------|");
				printf("\n\n ____ is an effective tool for programming scientific, mathematical and engineering computations? \n");
				printf("\n\n\t1. Parameter\n\t2. Main function\n\t3.  Recursion\n\t4.  Local variable");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				      if(a==3)

					{
					score = score + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"Recursion\".");
					getch();
					clrscr();
					}
				printf("\n|--------------|");
				printf("Question No. 6|");
				printf("|--------------|");
				printf("\n\n The functions that are defined according to our requirements are called ____? \n");
				printf("\n\n\t1. Good functions\n\t2. Modules\n\t3.  User defined functions\n\t4.  Library functions");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				      if(a==3)

					{
					score = score + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"User defined functions\".");
					getch();
					clrscr();
					}
				printf("\n|--------------|");
				printf("Question No. 7|");
				printf("|--------------|");
				printf("\n\n In the for loop structure, the clauses namely ___ are optional? \n");
				printf("\n\n\t1. Assign and logic\n\t2. Assign and alter\n\t3.  Logic and alter\n\t4.  Assign, logic and alter");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				      if(a==4)

					{
					score = score + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"Assign, logic and alter\".");
					getch();
					clrscr();
					}
				printf("\n|--------------|");
				printf("Question No. 8|");
				printf("|--------------|");
				printf("\n\n Subscripted variable is any type such as? \n");
				printf("\n\n\t1. Int\n\t2. Float\n\t3.  Int, float or char\n\t4.  Char");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				      if(a==3)

					{
					score = score + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"Int, float or char\".");
					getch();
					clrscr();
					}
				printf("\n|--------------|");
				printf("Question No. 9|");
				printf("|--------------|");
				printf("\n\n In which of the following it is convenient to group related data items as one entry? \n");
				printf("\n\n\t1. Array\n\t2. Matrix\n\t3.  Token\n\t4.  Determinant");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				      if(a==4)

					{
					score = score + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"Array\".");
					getch();
					clrscr();
					}
				printf("\n|--------------|");
				printf("Question No. 10|");
				printf("|--------------|");
				printf("\n\n The formatting character should be preceded by a ____ symbol? \n");
				printf("\n\n\t1. +\n\t2. /\n\t3.  %\n\t4.  -");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				      if(a==3)

					{
					score = score + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"%\".");
					getch();
					clrscr();
					}
				printf("\n|--------------|");
				printf("Question No. 11|");
				printf("|--------------|");
				printf("\n\n An unary operator! represents? \n");
				printf("\n\n\t1. Unary minus\n\t2. Logical not operator\n\t3.  Decrement operator\n\t4.  Increment operator");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				      if(a==2)

					{
					score = score + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"Logical not operator\".");
					getch();
					clrscr();
					}
				printf("\n|--------------|");
				printf("Question No. 12|");
				printf("|--------------|");
				printf("\n\n The single character input/output functions are? \n");
				printf("\n\n\t1. scan f ( ) and print f ( )\n\t2.  get char ( ) and print f ( )\n\t3.  scan f ( ) and put char ( )\n\t4.  get char ( ) and put char ( )");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				      if(a==4)

					{
					score = score + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"get char ( ) and put char ( )\".");
					getch();
					clrscr();
					}
				printf("\n|--------------|");
				printf("Question No. 13|");
				printf("|--------------|");
				printf("\n\n The general form of the condition expression is? \n");
				printf("\n\n\t1. Expression ? expression 2 : expression 3\n\t2. Expression ? expression 2 : expression 3\n\t3.  Expression 2? expression 3? Expression 1\n\t4.  None of these");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				      if(a==1)

					{
					score = score + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"Expression ? expression 2 : expression 3\".");
					getch();
					clrscr();
					}
				printf("\n|--------------|");
				printf("Question No. 14|");
				printf("|--------------|");
				printf("\n\n The break statement is used to exit from a? \n");
				printf("\n\n\t1. Do loop\n\t2. For loop\n\t3.  Switch statement\n\t4.  All of these ");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				      if(a==4)

					{
					score = score + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"All of these\".");
					getch();
					clrscr();
					}
				printf("\n|--------------|");
				printf("Question No. 15|");
				printf("|--------------|");
				printf("\n\n Which is not necessary when using bar codes in supermarkets?? \n");
				printf("\n\n\t1. Price on the shelf\n\t2. Price on the goods\n\t3.  Point-of sale (POS) terminal\n\t4.  Check digit on the bar code");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				      if(a==1)

					{
					score = score + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"Price on the shelf\".");
					getch();
					clrscr();
					}
				printf("\n|--------------|");
				printf("Question No. 16|");
				printf("|--------------|");
				printf("\n\n By using ____ the speed of the process can be increased? \n");
				printf("\n\n\t1. Integer\n\t2. Unsigned integer\n\t3.  Short integer\n\t4.  Long integer");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				      if(a==3)

					{
					score = score + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"Short integer\".");
					getch();
					clrscr();
					}
				printf("\n|--------------|");
				printf("Question No. 17|");
				printf("|--------------|");
				printf("\n\n A variable is an algebraic expression that temporarily assumes the properties of a constant is called? \n");
				printf("\n\n\t1. Function\n\t2. Dummy parameter\n\t3.  Parameter\n\t4.  Operator");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				      if(a==4)

					{
					score = score + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"Parameter\".");
					getch();
					clrscr();
					}
				printf("\n|--------------|");
				printf("Question No. 18|");
				printf("|--------------|");
				printf("\n\n A function can return? \n");
				printf("\n\n\t1. Two values\n\t2. No value\n\t3.  Only one value\n\t4.  Many values");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				      if(a==3)

					{
					score = score + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"Many values\".");
					getch();
					clrscr();
					}
				printf("\n|--------------|");
				printf("Question No. 19|");
				printf("|--------------|");
				printf("\n\n ____ have no meaning outside the body of a function? \n");
				printf("\n\n\t1. Variables\n\t2. Main functions\n\t3.  Global variables\n\t4.  Local variables");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				      if(a==4)

					{
					score = score + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"Local variables\".");
					getch();
					clrscr();
					}
				printf("\n|--------------|");
				printf("Question No. 20|");
				printf("|--------------|");
				printf("\n\n The most popular loop for array manipulation is the ___ loop? \n");
				printf("\n\n\t1. for\n\t2. while\n\t3.  do while\n\t4.  any");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				      if(a==1)

					{
					score = score + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"for\".");
					getch();
					clrscr();
					}
				printf("\n|--------------|");
				printf("Question No. 21|");
				printf("|--------------|");
				printf("\n\n Each element in a structure has a? \n");
				printf("\n\n\t1. Unique variable\n\t2. Unique name\n\t3.  Name\n\t4.  Space");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				      if(a==2)

					{
					score = score + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"Unique name\".");
					getch();
					clrscr();
					}
				printf("\n|--------------|");
				printf("Question No. 22|");
				printf("|--------------|");
				printf("\n\n For two-dimensional arrays data are usually entered? \n");
				printf("\n\n\t1. Array wise\n\t2. Element wise\n\t3.  Row-wise\n\t4.  Column-wise");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				      if(a==3)

					{
					score = score + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"Row-wise\".");
					getch();
					clrscr();
					}
				printf("\n|--------------|");
				printf("Question No. 23|");
				printf("|--------------|");
				printf("\n\n The __ is a program that links the object code of the program with the library function code that is necessary for the program to run? \n");
				printf("\n\n\t1. C linker\n\t2. Compiler\n\t3.  C compiler\n\t4.  Editing");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				      if(a==1)

					{
					score = score + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"C linker\".");
					getch();
					clrscr();
					}
				printf("\n|--------------|");
				printf("Question No. 24|");
				printf("|--------------|");
				printf("\n\n Which of the following statement is used to skip a part of the loop? \n");
				printf("\n\n\t1. Break\n\t2. Continue\n\t3.  Both\n\t4.  None of the above");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				      if(a==2)

					{
					score = score + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"Continue\".");
					getch();
					clrscr();
					}
				printf("\n|--------------|");
				printf("Question No. 25|");
				printf("|--------------|");
				printf("\n\n The method in which a problem has been divided into many smaller problems is called ___? \n");
				printf("\n\n\t1. Problem approach\n\t2. Top Down approach\n\t3.  New approach\n\t4.  None of these");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				      if(a==2)

					{
					score = score + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"Top Down approach\".");
					getch();
					clrscr();
					}

			printf("\t\t-------YOUR SCORE OUT OF 40-------\n\n\n");
			printf("\t\tName : %s \n\n \t\tRoll No: CSC-22F-0%d \n\n\t\tScore : %d ",name,rollno,score);
			getch();

			clrscr();
			printf("\t--------WHAT YOU WANT--------\n");
			printf("\n\t1) MAIN MENUE.\n");
			printf("\t2) EXIT.\n");
			printf(" ");
			scanf("%d",&b);
				switch(b)
				{
				case 1:
				goto mainmenue;
				getch();
				break;

				case 2:
				return 0;
				break;

				default:
				printf("\n\t|------------|\n");
				printf("\n\t|WRONGE INPUT|\n");
				printf("\t|------------|\n");
				break;
				}
				break;


				break;

				case 4:
				clrscr();
				goto mainmenue;
				break;

				case 5:
				clrscr();
				goto computersci;
				break;

				case 6:
				clrscr();
				return 0;
				break;

				default:
				printf("\n\t|------------|\n");
				printf("\n\t|WRONGE INPUT|\n");
				printf("\t|------------|\n");
				break;
				}


			case 2:
			clrscr();
			goto mainmenue;
			break;

			case 3:
			clrscr();
			return 0;
			break;

			default:
			printf("\n\t|------------|\n");
			printf("\n\t|WRONGE INPUT|\n");
			printf("\t|------------|\n");
			break;
			}

		case 2:
		sci:
		clrscr();
		printf("\n\t|-------------------------------|\n");
		printf("\n\t|WELCOME IN SCIENCE SECTION|\n");
		printf("\n\t|-------------------------------|\n");
		printf("\n\t 1. PHYSICS");
		printf("\n\t 2. BACK");
		printf("\n\t 3. EXIT");
		printf("\n\n\tENTER: ");
		scanf("%d",&usrc);
			switch(usrc)
			{
			case 1:
			clrscr();
			printf("\n\t|-------------------------------|\n");
			printf("\n\t|WELCOME IN PHYSICS|\n");
			printf("\n\t|-------------------------------|\n");
			printf("\n\t 1. Quiz");
			printf("\n\t 2. Mid Term");
			printf("\n\t 3. Final Term");
			printf("\n\t 4. MAIN MENU");
			printf("\n\t 5. BACK");
			printf("\n\t 6. EXIT");
			printf("\n\n\tENTER: ");
			scanf("%d",&usr3);
			clrscr();
			printf("Enter Number of Question You want to Add : ");
			scanf("%d",&qoq);
			printf("Each question Marks : ");
			scanf("%d",&noq);

				switch(usr3)
				{
				case 1:
				clrscr();
				printf("\t\t\Student Name: ");
				scanf("%s",&name);
				printf("\t\tRoll No: CSC-22F-");
				scanf("%d",&rollno);
				printf("\n|--------------|");
				printf("|Question No. 1|");
				printf("|--------------|");
				printf("\n\n Select the critical angle for glass \n");
				printf("\n\n\t1. 44\n\t2. 49\n\t3. 43 Slece\n\t4. 42");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				      if(a==4)
						{
						scm = scm + 1;
						printf("CORRECT ANSWER.");
						getch();
						clrscr();
						}
					else
						{
						printf("WRONG ANSWER");
						printf("\nCORRECT ANSWER IS \"42\".");
						getch();
						clrscr();
						}

				clrscr();
				printf("\n|--------------|");
				printf("|Question No. 2|");
				printf("|--------------|");
				printf("\n\n How can we easily minimize the error in transmission of power through optic fiber?	\n");
				printf("\n\n\t1. Graded index fiber\n\t2. Single mode step index fiber\n\t3. Multimode index fiber\n\t4. Copper wire");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				      if(a==1)
						{
						scm = scm + 1;
						printf("CORRECT ANSWER.");
						getch();
						clrscr();
						}
					else
						{
						printf("WRONG ANSWER");
						printf("\nCORRECT ANSWER IS \"Graded index fiber\".");
						getch();
						clrscr();
						}


				clrscr();
				printf("\n|--------------|");
				printf("|Question No. 3|");
				printf("|--------------|");
				printf("\n\n Michelson invented which formula to calculate the speed of light ? \n");
				printf("\n\n\t1. C = 5/7fd\n\t2. C = 11fd\n\t3. C = 2fd\n\t4. C = 16fd");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				      if(a==4)
						{
						scm = scm + 1;
						printf("CORRECT ANSWER.");
						getch();
						clrscr();
						}
					else
						{
						printf("WRONG ANSWER");
						printf("\nCORRECT ANSWER IS \"C = 16fd\".");
						getch();
						clrscr();
						}

				clrscr();
				printf("\n|--------------|");
				printf("|Question No. 4|");
				printf("|--------------|");
				printf("\n\n What are the Thermions ? \n");
				printf("\n\n\t1. photons\n\t2. neutrons\n\t3. protons\n\t4. electrons");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				      if(a==4)
						{
						scm = scm + 1;
						printf("CORRECT ANSWER.");
						getch();
						clrscr();
						}
					else
						{
						printf("WRONG ANSWER");
						printf("\nCORRECT ANSWER IS \"electrons\".");
						getch();
						clrscr();
						}
				clrscr();
				printf("\n|--------------|");
				printf("|Question No. 5|");
				printf("|--------------|");
				printf("\n\n  What does the diameter of lens call ?\n");
				printf("\n\n\t1. Focal length \n\t2. none of these\n\t3. Principal of axis\n\t4. Radius of Curvature");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				      if(a==3)
						{
						scm = scm + 1;
						printf("CORRECT ANSWER.");
						getch();
						clrscr();
						}
					else
						{
						printf("WRONG ANSWER");
						printf("\nCORRECT ANSWER IS \"Principal of axis\".");
						getch();
						clrscr();
						}

				clrscr();
				printf("\n|--------------|");
				printf("|Question No. 6|");
				printf("|--------------|");
				printf("\n\n For the common adjustment, length of astronomical telescope is ?  \n");
				printf("\n\n\t1. fe*fo\n\t2. fe/fo\n\t3. fo+fe\n\t4. fe-fo");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				      if(a==3)
						{
						scm = scm + 1;
						printf("CORRECT ANSWER.");
						getch();
						clrscr();
						}
					else
						{
						printf("WRONG ANSWER");
						printf("\nCORRECT ANSWER IS \"fo+fe\".");
						getch();
						clrscr();
						}

				clrscr();

				printf("\n|--------------|");
				printf("|Question No. 7|");
				printf("|--------------|");
				printf("\n\n  Select the unit of power of lens. \n");
				printf("\n\n\t1. watt\n\t2. joule\n\t3. diopter\n\t4. ampere");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				      if(a==3)
						{
						scm = scm + 1;
						printf("CORRECT ANSWER.");
						getch();
						clrscr();
						}
					else
						{
						printf("WRONG ANSWER");
						printf("\nCORRECT ANSWER IS \"diopter\".");
						getch();
						clrscr();
						}

				clrscr();
				printf("\n|--------------|");
				printf("|Question No. 8|");
				printf("|--------------|");
				printf("\n\n When does the convex lens act as a diverging lens ? \n");
				printf("\n\n\t1. when object is placed beyond C\n\t2. when object is with in C\n\t3. when object is with in f\n\t4. when object is with in C & when the object is with in");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				      if(a==4)
						{
						scm = scm + 1;
						printf("CORRECT ANSWER.");
						getch();
						clrscr();
						}
					else
						{
						printf("WRONG ANSWER");
						printf("\nCORRECT ANSWER IS \"when object is with in C & when the object is with in\".");
						getch();
						clrscr();
						}


				clrscr();

				printf("\n|--------------|");
				printf("|Question No. 9|");
				printf("|--------------|");
				printf("\n\n Select the power of conca \n");
				printf("\n\n\t1.virtual \n\t2.- \n\t3. +\n\t4. real");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				      if(a==2)
						{
						scm = scm + 1;
						printf("CORRECT ANSWER.");
						getch();
						clrscr();
						}
					else
						{
						printf("WRONG ANSWER");
						printf("\nCORRECT ANSWER IS \"-\".");
						getch();
						clrscr();
						}

				clrscr();
				printf("\n|--------------|");
				printf("|Question No. 10|");
				printf("|--------------|");
				printf("\n\n How does an electron move in the orbit ? \n");
				printf("\n\n\t1. In a standing wave motion\n\t2. In a simple Harmonic motion\n\t3. In a vibratory motion\n\t4. In a simple motion");
				printf("\n\nEnter Only 	1 option here:  ");
				scanf("%d",&a);
				      if(a==1)
						{
						scm = scm + 1;
						printf("CORRECT ANSWER.");
						getch();
						clrscr();
						}
					else
						{
						printf("WRONG ANSWER");
						printf("\nCORRECT ANSWER IS \"In a standing wave motion\".");
						getch();
						clrscr();
						}

			printf("\t\t-------YOUR SCORE OUT OF 10-------\n\n\n");
			printf("\t\tName : %s \n\n \t\tRoll No: CSC-22F-0%d \n\n\t\tScore : %d ",name,rollno,scm);
			getch();

			clrscr();
			printf("\t--------WHAT YOU WANT--------\n");
			printf("\n\t1) MAIN MENUE.\n");
			printf("\t2) EXIT.\n");
			printf(" ");
			scanf("%d",&b);
				switch(b)
				{
				case 1:
				goto mainmenue;
				getch();
				break;

				case 2:
				return 0;
				break;

				default:
				printf("\n\t|------------|\n");
				printf("\n\t|WRONGE INPUT|\n");
				printf("\t|------------|\n");
				break;
				}


				break;

				case 2:
				clrscr();
				printf("Null");
				return 0;
				break;

				/////Final term Physics
				case 3:
				clrscr();
				printf("\t\t\Student Name: ");
				scanf("%s",&name);
				printf("\t\tRoll No: CSC-22F-");
				scanf("%d",&rollno);
				printf("\n|--------------|");
				printf("|Question No. 1|");
				printf("|--------------|");
				printf("\n\n Penetrating power of X-Rays based on their ?\n");
				printf("\n\n\t1. Frequency\n\t2. None of these\n\t3. Source\n\t4. Voltage");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&d);
				      if(d==1)
						{
						scm = scm + 2;
						printf("CORRECT ANSWER.");
						getch();
						clrscr();
						}
					else
						{
						printf("WRONG ANSWER");
						printf("\nCORRECT ANSWER IS \"Frequency\".");
						getch();
						clrscr();
						}

				clrscr();
				printf("\n|--------------|");
				printf("|Question No. 2|");
				printf("|--------------|");
				printf("\n\n Michelson used which instruement to calculate the speed of light ?\n");
				printf("\n\n\t1. galvanometer\n\t2. Spectrometer\n\t3. Function\n\t4. None of these");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&d);
				      if(d==2)
						{
						scm = scm + 2;
						printf("CORRECT ANSWER.");
						getch();
						clrscr();
						}
					else
						{
						printf("WRONG ANSWER");
						printf("\nCORRECT ANSWER IS \"Spectrometer\".");
						getch();
						clrscr();
						}
				clrscr();
				printf("\n|--------------|");
				printf("|Question No. 3|");
				printf("|--------------|");
				printf("\n\n Select the Function of the collimator in spectrometer.\n");
				printf("\n\n\t1. to filter the light rays\n\t2. no any function\n\t3. to genreta parallel beams of light\n\t4. far to make them");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&d);
				      if(d==3)
						{
						scm = scm + 2;
						printf("CORRECT ANSWER.");
						getch();
						clrscr();
						}
					else
						{
						printf("WRONG ANSWER");
						printf("\nCORRECT ANSWER IS \"to genreta parallel beams of light\".");
						getch();
						clrscr();
						}
				clrscr();
				printf("\n|--------------|");
				printf("|Question No. 4|");
				printf("|--------------|");
				printf("\n\n The emitted proton from crystal shows __________ in Davisson Germer.\n");
				printf("\n\n\t1. Property of particle\n\t2. Property of wave\n\t3. Property of light\n\t4. Property of Quantum");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&d);
				      if(d==2)
						{
						scm = scm + 2;
						printf("CORRECT ANSWER.");
						getch();
						clrscr();
						}
					else
						{
						printf("WRONG ANSWER");
						printf("\nCORRECT ANSWER IS \"Property of wave\".");
						getch();
						clrscr();
						}
				clrscr();
				printf("\n|--------------|");
				printf("|Question No. 5|");
				printf("|--------------|");
				printf("\n\n What does the Compton effect prove ?\n");
				printf("\n\n\t1. Theory of light by photon\n\t2. wave nature of light\n\t3. undetermined nature of light\n\t4. Dual nature of light");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&d);
				      if(d==1)
						{
						scm = scm + 2;
						printf("CORRECT ANSWER.");
						getch();
						clrscr();
						}
					else
						{
						printf("WRONG ANSWER");
						printf("\nCORRECT ANSWER IS \"Theory of light by Photon\".");
						getch();
						clrscr();
						}
				clrscr();
				printf("\n|--------------|");
				printf("|Question No. 6|");
				printf("|--------------|");
				printf("\n\n _____ is revealed if the diffraction grating is put in the path of light beam. \n");
				printf("\n\n\t1. property of wave\n\t2. Property of quantum\n\t3. Property Of particle \n\t4. Property of light");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&d);
				      if(d==1)
						{
						scm = scm + 2;
						printf("CORRECT ANSWER.");
						getch();
						clrscr();
						}
					else
						{
						printf("WRONG ANSWER");
						printf("\nCORRECT ANSWER IS \"Property of wave\".");
						getch();
						clrscr();
						}
				clrscr();
				printf("\n|--------------|");
				printf("|Question No. 7|");
				printf("|--------------|");
				printf("\n\n Select the Diopter power of a concave lens of 10cm focal length .	\n");
				printf("\n\n\t1. 5 diopter\n\t2. 10 diopter\n\t3. 1/10 diopter\n\t4.1/5 diopter ");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&d);
				      if(d==2)
						{
						scm = scm + 2;
						printf("CORRECT ANSWER.");
						getch();
						clrscr();
						}
					else
						{
						printf("WRONG ANSWER");
						printf("\nCORRECT ANSWER IS \"10 diopter\".");
						getch();
						clrscr();
						}

				clrscr();
				printf("\n|--------------|");
				printf("|Question No. 8|");
				printf("|--------------|");
				printf("\n\n When does the magnifying power of a simple microscope increases ?\n");
				printf("\n\n\t1. with the decrease in the focal length\n\t2. None of these\n\t3. with the increase in the focal length\n\t4. Least distance");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&d);
				      if(d==1)
						{
						scm = scm + 2;
						printf("CORRECT ANSWER.");
						getch();
						clrscr();
						}
					else
						{
						printf("WRONG ANSWER");
						printf("\nCORRECT ANSWER IS \"with the decrease in the focal length\".");
						getch();
						clrscr();
						}
				clrscr();
				printf("\n|--------------|");
				printf("|Question No. 9|");
				printf("|--------------|");
				printf("\n\n Select the lens which intersect a beam of parallel rays to a point.\n");
				printf("\n\n\t1. Plano convex lens\n\t2. Plano concave lens\n\t3. Convex lens\n\t4. Concave lens");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&d);
				      if(d==3)
						{
						scm = scm + 2;
						printf("CORRECT ANSWER.");
						getch();
						clrscr();
						}
					else
						{
						printf("WRONG ANSWER");
						printf("\nCORRECT ANSWER IS \"Convex lens\".");
						getch();
						clrscr();
						}
				clrscr();
				printf("\n|--------------|");
				printf("|Question No. 10|");
				printf("|--------------|");
				printf("\n\n how can a three dimensional image is produced ?\n");
				printf("\n\n\t1. compound microscope\n\t2. Scanning electron\n\t3. Electron microscope\n\t4. None of these");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&d);
				      if(d==2)
						{
						scm = scm + 2;
						printf("CORRECT ANSWER.");
						getch();
						clrscr();
						}
					else
						{
						printf("WRONG ANSWER");
						printf("\nCORRECT ANSWER IS \"Scanning electron\".");
						getch();
						clrscr();
						}
				clrscr();
				printf("\n|--------------|");
				printf("|Question No. 11|");
				printf("|--------------|");
				printf("\n\n who proposed the name of photon for quantum of light\n");
				printf("\n\n\t1. Newton\n\t2. Thomson\n\t3. Plank\n\t4. albert einstein");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&d);
				      if(d==4)
						{
						scm = scm + 2;
						printf("CORRECT ANSWER.");
						getch();
						clrscr();
						}
					else
						{
						printf("WRONG ANSWER");
						printf("\nCORRECT ANSWER IS \"Albert einstein\".");
						getch();
						clrscr();
						}
				clrscr();
				printf("\n|--------------|");
				printf("|Question No. 12|");
				printf("|--------------|");
				printf("\n\n If a wave length of proton is 900nm then it acts like a particle of mass ?\n");
				printf("\n\n\t1.None of these \n\t2. 2.46*10-36kg\n\t3. 8.53*10-69kg\n\t4. 2.83*10-34kg ");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&d);
				      if(d==2)
						{
						scm = scm + 2;
						printf("CORRECT ANSWER.");
						getch();
						clrscr();
						}
					else
						{
						printf("WRONG ANSWER");
						printf("\nCORRECT ANSWER IS \"2.46*10-36kg\".");
						getch();
						clrscr();
						}
				printf("\n|--------------|");
				printf("|Question No. 13|");
				printf("|--------------|");
				printf("\n\n The unreliability in the position and momentum is due to its ?\n");
				printf("\n\n\t1. Property of radiation and matter\n\t2. emissin of the definite wavelength\n\t3. two dimensional motion\n\t4. High voltage");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&d);
				      if(d==1)
						{
						scm = scm + 2;
						printf("CORRECT ANSWER.");
						getch();
						clrscr();
						}
					else
						{
						printf("WRONG ANSWER");
						printf("\nCORRECT ANSWER IS \"Property of radiation and matter\".");
						getch();
						clrscr();
						}
				clrscr();
				printf("\n|--------------|");
				printf("|Question No. 14|");
				printf("|--------------|");
				printf("\n\n What does the davison-German experiment represent ? \n");
				printf("\n\n\t1. Interference\n\t2. Diffraction of light\n\t3. Refraction\n\t4. diffraction of electron");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&d);
				      if(d==4)
						{
						scm = scm + 2;
						printf("CORRECT ANSWER.");
						getch();
						clrscr();
						}
					else
						{
						printf("WRONG ANSWER");
						printf("\nCORRECT ANSWER IS \"Diffraction of electron\".");
						getch();
						clrscr();
						}
				clrscr();
				printf("\n|--------------|");
				printf("|Question No. 15|");
				printf("|--------------|");
				printf("\n\n Select the toatal number of series in hydrogen spectrum\n");
				printf("\n\n\t1. 2\n\t2. 3\n\t3. 4\n\t4. 5");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&d);
				      if(d==4)
						{
						scm = scm + 2;
						printf("CORRECT ANSWER.");
						getch();
						clrscr();
						}
					else
						{
						printf("WRONG ANSWER");
						printf("\nCORRECT ANSWER IS \"5\".");
						getch();
						clrscr();
						}
				clrscr();
				printf("\n|--------------|");
				printf("|Question No. 16|");
				printf("|--------------|");
				printf("\n\n What is known as the turning eddect of force ?\n");
				printf("\n\n\t1. none of these\n\t2. Moment\n\t3. Momentum\n\t4. power");
				printf("\n\nEnter Only 1 option here: ");
				scanf("%d",&d);
				      if(d==2)
						{
						scm = scm + 2;
						printf("CORRECT ANSWER.");
						getch();
						clrscr();
						}
					else
						{
						printf("WRONG ANSWER");
						printf("\nCORRECT ANSWER IS \"Moment\".");
						getch();
						clrscr();
						}
				clrscr();
				printf("\n|--------------|");
				printf("|Question No. 17|");
				printf("|--------------|");
				printf("\n\n Select the following that is not a derived quantity.\n");
				printf("\n\n\t1. Density\n\t2. Area\n\t3. None of these \n\t4. Volume ");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&d);
				      if(d==3)
						{
						scm = scm + 2;
						printf("CORRECT ANSWER.");
						getch();
						clrscr();
						}
					else
						{
						printf("WRONG ANSWER");
						printf("\nCORRECT ANSWER IS \"None of these\".");
						getch();
						clrscr();
						}
				clrscr();
				printf("\n|--------------|");
				printf("|Question No. 18|");
				printf("|--------------|");
				printf("\n\n Select the medium that sends signals form source to the destination.\n");
				printf("\n\n\t1. Transmission channel\n\t2. Reciever\n\t3. Transmitter\n\t4. emiiter");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&d);
				      if(d==1)
						{
						scm = scm + 2;
						printf("CORRECT ANSWER.");
						getch();
						clrscr();
						}
					else
						{
						printf("WRONG ANSWER");
						printf("\nCORRECT ANSWER IS \"Transmission channel\".");
						getch();
						clrscr();
						}

				clrscr();
				printf("\n|--------------|");
				printf("|Question No. 19|");
				printf("|--------------|");
				printf("\n\n Select the range of the projectile at the angles of 60 and 30 dgree.\n");
				printf("\n\n\t1. equal to 30\n\t2.None of these \n\t3. Just equal to each other\n\t4.equal to 60 degree ");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&d);
				      if(d==3)
						{
						scm = scm + 2;
						printf("CORRECT ANSWER.");
						getch();
						clrscr();
						}
					else
						{
						printf("WRONG ANSWER");
						printf("\nCORRECT ANSWER IS \"Just equal to each other\".");
						getch();
						clrscr();
						}
				clrscr();
				printf("\n|--------------|");
				printf("|Question No. 20|");
				printf("|--------------|");
				printf("\n\n select the distance covered after starting from the rest during the time t.\n");
				printf("\n\n\t1. at2/2\n\t2. at 4/2\n\t3. at2\n\t4. at 2/4");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&d);
				      if(d==1)
						{
						scm = scm + 2;
						printf("CORRECT ANSWER.");
						getch();
						clrscr();
						}
					else
						{
						printf("WRONG ANSWER");
						printf("\nCORRECT ANSWER IS \"at2/2\".");
						getch();
						clrscr();
						}
				clrscr();
				printf("\n|--------------|");
				printf("|Question No. 21|");
				printf("|--------------|");
				printf("\n\n Select the name of the process in which all heat supplied is converted into work done.\n");
				printf("\n\n\t1. Isochoric\n\t2. Isothermal\n\t3. isobaric\n\t4. All of these");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&d);
				      if(d==2)
						{
						scm = scm + 2;
						printf("CORRECT ANSWER.");
						getch();
						clrscr();
						}
					else
						{
						printf("WRONG ANSWER");
						printf("\nCORRECT ANSWER IS \"isothermal\".");
						getch();
						clrscr();
						}
				clrscr();
				printf("\n|--------------|");
				printf("|Question No. 22|");
				printf("|--------------|");
				printf("\n\n Select the name of SI unit that has the symbol of cl.\n");
				printf("\n\n\t1. Watt\n\t2. Ampere\n\t3. Joule\n\t4. Candela");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&d);
				      if(d==4)
						{
						scm = scm + 2;
						printf("CORRECT ANSWER.");
						getch();
						clrscr();
						}
					else
						{
						printf("WRONG ANSWER");
						printf("\nCORRECT ANSWER IS \"Candela\".");
						getch();
						clrscr();
						}
				clrscr();
				printf("\n|--------------|");
				printf("|Question No. 23|");
				printf("|--------------|");
				printf("\n\n Select the name of SI unit that has the symbol of cl.\n");
				printf("\n\n\t1. Watt\n\t2. Ampere\n\t3. Joule\n\t4. Candela");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&d);
				      if(d==4)
						{
						scm = scm + 2;
						printf("CORRECT ANSWER.");
						getch();
						clrscr();
						}
					else
						{
						printf("WRONG ANSWER");
						printf("\nCORRECT ANSWER IS \"Candela\".");
						getch();
						clrscr();
						}
				clrscr();
				printf("\n|--------------|");
				printf("|Question No. 24|");
				printf("|--------------|");
				printf("\n\n Select the following that is not a fonor impurity.\n");
				printf("\n\n\t1. phosphorus\n\t2. arsenic\n\t3. aluminium\n\t4. anitmony");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&d);
				      if(d==3)
						{
						scm = scm + 2;
						printf("CORRECT ANSWER.");
						getch();
						clrscr();
						}
					else
						{
						printf("WRONG ANSWER");
						printf("\nCORRECT ANSWER IS \"aluminium\".");
						getch();
						clrscr();
						}
				clrscr();
				printf("\n|--------------|");
				printf("|Question No. 25|");
				printf("|--------------|");
				printf("\n\n select gthe name of the best instrument that is used for to tedt the internal diameter of test tube.\n");
				printf("\n\n\t1.Screw gauge \n\t2. Vernier Calliper\n\t3. None of these\n\t4. Both");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&d);
				      if(d==2)
						{
						scm = scm + 2;
						printf("CORRECT ANSWER.");
						getch();
						clrscr();
						}
					else
						{
						printf("WRONG ANSWER");
						printf("\nCORRECT ANSWER IS \"Vernier Calliper\".");
						getch();
						clrscr();
						}

			printf("\t\t-------YOUR SCORE OUT OF 50-------\n\n\n");
			printf("\t\tName : %s \n\n \t\tRoll No: CSC-22F-0%d \n\n\t\tScore : %d ",name,rollno,scm);
			getch();

			clrscr();
			printf("\t--------WHAT YOU WANT--------\n");
			printf("\n\t1) MAIN MENUE.\n");
			printf("\t2) EXIT.\n");
			printf(" ");
			scanf("%d",&b);
				switch(b)
				{
				case 1:
				goto mainmenue;
				getch();
				break;

				case 2:
				return 0;
				break;

				default:
				printf("\n\t|------------|\n");
				printf("\n\t|WRONGE INPUT|\n");
				printf("\t|------------|\n");
				break;
				}

				break;

				case 4:
				clrscr();
				goto mainmenue;
				break;

				case 5:
				clrscr();
				goto sci;
				break;

				case 6:
				clrscr();
				return 0;
				break;

				default:
				printf("\n\t|------------|\n");
				printf("\n\t|WRONGE INPUT|\n");
				printf("\t|------------|\n");
				break;
				}
			case 2:
			clrscr();
			goto mainmenue;
			break;

			case 3:
			clrscr();
			return 0;
			break;

			default:
			printf("\n\t|------------|\n");
			printf("\n\t|WRONGE INPUT|\n");
			printf("\t|------------|\n");
			break;
			}
		case 3:
		clrscr();
		printf("\n\t|-------------------------------|\n");
		printf("\n\t|WELCOME IN PAKISTAN STUDIES SECTION|\n");
		printf("\n\t|-------------------------------|\n");
		printf("\n\t 1. QUIZ");
		printf("\n\t 2. MID TERM");
		printf("\n\t 3. FINAL TERM");
		printf("\n\t 4. MAIN MENUE");
		printf("\n\t 5. EXIT");
		printf("\n\n\tENTER: ");
		scanf("%d",&usrd);

			switch(usrd)
			{
			/// Quiz Pak studies
			case 1:
			clrscr();

			printf("\t\t\Student Name: ");
			scanf("%s",&name);
			printf("\t\tRoll No: CSC-22F-");
			scanf("%d",&rollno);
			printf("\n|--------------|");
			printf("|Question No. 1|");
			printf("|--------------|");
			printf("\n\n Who was the 1st President of the Constitution Assembly of Pakistan ? \n");
			printf("\n\n\t1. Moulvi Tameez-ud-Din \n\t2. Sardar Abdur Rab Nishtar \n\t3. Quaid-e-Azam\n\t4. Liaquat Ali Khan");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&a);
			      if(a==3)
					{
					scm = scm + 1;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"Quaid-e-Azam\".");
					getch();
					clrscr();
					}
			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 2|");
			printf("|--------------|");
			printf("\n\n After how many years did Pakistan got its first constitution ?\n");
			printf("\n\n\t1. 11 years\n\t2. 5 years\n\t3. 9 years\n\t4. 7 years");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&a);
			      if(a==3)
					{
					scm = scm + 1;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"7 years\".");
					getch();
					clrscr();
					}

			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 3|");
			printf("|--------------|");
			printf("\n\n What document was firstly drafted to give pace to constitution making process ?\n");
			printf("\n\n\t1. Pakistan Act\n\t2. Objective Resolution\n\t3. Independence Act\n\t4. Representative Act");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&a);
			      if(a==2)
					{
					scm = scm + 1;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"Objective Resolution\".");
					getch();
					clrscr();
					}

			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 4|");
			printf("|--------------|");
			printf("\n\n When the Constituent Assembly passed the Objective Resolution ?\n");
			printf("\n\n\t1. 12th March 1949 \n\t2. 9th June 1949\n\t3. 15th Aug 1949\n\t4. 14th Feb 1949");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&a);
			      if(a==3)
					{
					scm = scm + 1;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"12th March 1949\".");
					getch();
					clrscr();
					}

			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 5|");
			printf("|--------------|");
			printf("\n\n When Mohammad Ali ogra presented Bogra Formula in the assembly ?\n");
			printf("\n\n\t1. Oct 1953 \n\t2. April 1953\n\t3. Jan 1953\n\t4. Sept 1953");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&a);
			      if(a==1)
					{
					scm = scm + 1;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"Oct 1953\".");
					getch();
					clrscr();
					}

			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 6|");
			printf("|--------------|");
			printf("\n\n Who was Muhammad Ali Bogra ?\n");
			printf("\n\n\t1. Foreign Minister\n\t2. law Minister\n\t3. Prime Minister\n\t4. Parliament Minister");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&a);
			      if(a==3)
					{
					scm = scm + 1;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"Prime Minister\".");
					getch();
					clrscr();
					}

			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 7|");
			printf("|--------------|");
			printf("\n\n What is the another name of Mohammad Ali Bogra Formula ?\n");
			printf("\n\n\t1. New Law of Pakistan\n\t2. Pakistan Report\n\t3. Third Report\n\t4. Constitutional Formula");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&a);
			      if(a==4)
					{
					scm = scm + 1;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"Constitutional Formula\".");
					getch();
					clrscr();
					}

			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 8|");
			printf("|--------------|");
			printf("\n\n When 1st Constitution of Pakistan was enforced ?\n");
			printf("\n\n\t1. 25th Dec 1956\n\t2. 8th June 1956\n\t3. 23rd March 1956\n\t4. 14th Aug 1956");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&a);
			      if(a==4)
					{
					scm = scm + 1;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"23rd March 1956\".");
					getch();
					clrscr();
					}

			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 9|");
			printf("|--------------|");
			printf("\n\n Who was the Prime Minister of Pakistan during enforcement of first constitution ?\n");
			printf("\n\n\t1. Mohammad Ali Bogra\n\t2. Ibrahim Ismail Chundrigar\n\t3. Khwaja Nazim Uddin\n\t4. Choudhry Mohammad Ali");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&a);
			      if(a==4)
					{
					scm = scm + 1;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"Choudhry Mohammad Ali\".");
					getch();
					clrscr();
					}
			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 10|");
			printf("|--------------|");
			printf("\n\n What official name was given to Pakistan in 1956 constitution ?\n");
			printf("\n\n\t1. Islamic Republic of Pakistan\n\t2. United States of Pakistan\n\t3. republic of Pakistan\n\t4. Islamic Pakistan");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&a);
			      if(a==1)
					{
					scm = scm + 1;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"Islamic Republic of Pakistan\".");
					getch();
					clrscr();
					}


			printf("\t\t-------YOUR SCORE OUT OF 10-------\n\n\n");
			printf("\t\tName : %s \n\n \t\tRoll No: CSC-22F-0%d \n\n\t\tScore : %d ",name,rollno,scm);
			getch();

			clrscr();
			printf("\t--------WHAT YOU WANT--------\n");
			printf("\n\t1) MAIN MENUE.\n");
			printf("\t2) EXIT.\n");
			printf(" ");
			scanf("%d",&b);
				switch(b)
				{
				case 1:
				goto mainmenue;
				getch();
				break;

				case 2:
				return 0;
				break;

				default:
				printf("\n\t|------------|\n");
				printf("\n\t|WRONGE INPUT|\n");
				printf("\t|------------|\n");
				break;
				}

			break;
			/////Mid term
			case 2:
			clrscr();
			printf("\t\t\Student Name: ");
			scanf("%s",&name);
			printf("\t\tRoll No: CSC-22F-");
			scanf("%d",&rollno);
			printf("\n|--------------|");
			printf("|Question No. 1|");
			printf("|--------------|");
			printf("\n\n What age was prescribed for President in 1956 constitution ? \n");
			printf("\n\n\t1. 55 years\n\t2. 45 years\n\t3. 40 years\n\t4. 50 years");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&a);
			if(a==3)
					{
					score = score + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
			else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"40 years\".");
					getch();
					clrscr();
					}

			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 2|");
			printf("|--------------|");
			printf("\n\n In respect of religion what term was set for President and Prime Minister in 1956 constitution ? \n");
			printf("\n\n\t1. He must not be Christian\n\t2. He must be a Muslim\n\t3. He must not be Hindu\n\t4. He may be a Muslim");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&a);
			if(a==2)
					{
					score = score + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
			else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"He must be a Muslim\".");
					getch();
					clrscr();
					}

			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 3|");
			printf("|--------------|");
			printf("\n\n What was the official language declared in 1956 constitution ? \n");
			printf("\n\n\t1. Bengali\n\t2. Both Urdu & Bengali\n\t3. Hindi\n\t4. Urdu");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&a);
			if(a==2)
					{
					score = score + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
			else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"Both Urdu & Bengali\".");
					getch();
					clrscr();
					}

			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 4|");
			printf("|--------------|");
			printf("\n\n Who abrogated 1956 constitution ? \n");
			printf("\n\n\t1. Tikka Khan\n\t2. Ayub Khan\n\t3. Yahya Khan\n\t4. Iskander Mirza ");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&a);
			if(a==4)
					{
					score = score + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
			else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"Iskander Mirza\".");
					getch();
					clrscr();
					}

			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 5|");
			printf("|--------------|");
			printf("\n\n When Ayub Khan enforced new constitution in Pakistan ?\n");
			printf("\n\n\t1. June 1958\n\t2. May 1958\n\t3. October 1958 \n\t4. December 1958");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&a);
			if(a==3)
					{
					score = score + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
			else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"October 1958\".");
					getch();
					clrscr();
					}

			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 6|");
			printf("|--------------|");
			printf("\n\n When Ayub Khan enforced new constitution in Pakistan ?\n");
			printf("\n\n\t1. 13th March 1962\n\t2. 9th Jan 1962\n\t3. 8th June 1962\n\t4. 6th Feb 1962");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&a);
			if(a==3)
					{
					score = score + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
			else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"8th June 1962\".");
					getch();
					clrscr();
					}

			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 7|");
			printf("|--------------|");
			printf("\n\n  Which kind of system of Government was introduced by the 1962 constitution ?\n");
			printf("\n\n\t1. Autonomous\n\t2. President\n\t3. Bicameral\n\t4. Confederate");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&a);
			if(a==2)
					{
					score = score + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
			else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"President\".");
					getch();
					clrscr();
					}

			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 8|");
			printf("|--------------|");
			printf("\n\n  When the constitution of 1962 was abrogated ?\n");
			printf("\n\n\t1. 14th April 1969\n\t2. 4th April 1969\n\t3. 29th March 1969\n\t4. 20th March 1969");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&a);
			if(a==4)
					{
					score = score + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
			else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"20th March 1969\".");
					getch();
					clrscr();
					}

			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 9|");
			printf("|--------------|");
			printf("\n\n  Who abrogated 1962 constitution and became CMLA ?\n");
			printf("\n\n\t1. Gen Mansoor Khan\n\t2. Gen Tikka Khan\n\t3. Gen Ahsan Khan\n\t4.Gen Yahya Khan ");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&a);
			if(a==4)
					{
					score = score + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
			else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"Gen Yahya Khan\".");
					getch();
					clrscr();
					}

			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 10|");
			printf("|--------------|");
			printf("\n\n When Mr. Z.A.Bhutto launched a new constitution in the country ? \n");
			printf("\n\n\t1. 17th Aug 1973\n\t2. 21st Aug 1973\n\t3. 11th Aug 1973\n\t4. 14th Aug 1973");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&a);
			if(a==4)
					{
					score = score + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
			else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"14th Aug 1973\".");
					getch();
					clrscr();
					}

			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 11|");
			printf("|--------------|");
			printf("\n\n Which kind of system of Government was introduced in 1973 constitution ? \n");
			printf("\n\n\t1. Autonomous\n\t2. Parliamentary\n\t3. Basic Democracy\n\t4. Presidential");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&a);
			if(a==2)
					{
					score = score + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
			else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"Parliamentary\".");
					getch();
					clrscr();
					}

			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 12|");
			printf("|--------------|");
			printf("\n\n Who elects the president according to 1973 constitution ? \n");
			printf("\n\n\t1. Both of them\n\t2. National Assembly\n\t3. Senate\n\t4. None of them");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&a);
			if(a==1)
					{
					score = score + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
			else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"Both of them\".");
					getch();
					clrscr();
					}

			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 13|");
			printf("|--------------|");
			printf("\n\n According to 1973 constitution who elects Prime Minister \n");
			printf("\n\n\t1. Provincial Assemblies\n\t2. President\n\t3. National Assebly\n\t4. Senate");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&a);
			if(a==3)
					{
					score = score + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
			else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"National Assembly\".");
					getch();
					clrscr();
					}

			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 14|");
			printf("|--------------|");
			printf("\n\n In which constitution Bicameral Legislature was provided for the first time ? \n");
			printf("\n\n\t1. 1956\n\t2. 1973\n\t3. 1949\n\t4. 1962");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&a);
			if(a==2)
					{
					score = score + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
			else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"1973\".");
					getch();
					clrscr();
					}

			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 15|");
			printf("|--------------|");
			printf("\n\n In constitution of 1973 what age is specified for a person to contest for the Election to national Assembly ? \n");
			printf("\n\n\t1. 20 years\n\t2. 25 years\n\t3. 18 years\n\t4. 30 years");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&a);
			if(a==2)
					{
					score = score + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
			else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"25 years\".");
					getch();
					clrscr();
					}

			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 16|");
			printf("|--------------|");
			printf("\n\n In constitution 1973 what number od seats in Senate was set ? \n");
			printf("\n\n\t1. 115 Seats\n\t2. 100 Seats\n\t3. 120 Seats\n\t4. 110 Seats");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&a);
			if(a==2)
					{
					score = score + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
			else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"100 Seats\".");
					getch();
					clrscr();
					}

			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 17|");
			printf("|--------------|");
			printf("\n\n  According to 1973 constitution what is the term of the office of President ?\n");
			printf("\n\n\t1. 4 years\n\t2. 6 years\n\t3. 5 years\n\t4. 3 years");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&a);
			if(a==3)
					{
					score = score + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
			else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"5 years\".");
					getch();
					clrscr();
					}

			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 18|");
			printf("|--------------|");
			printf("\n\n Article 558(2b) of constitution 1973 is about \n");
			printf("\n\n\t1. Power of Ptresident to dissolve National Assembly \n\t2. Power of President to dismiss Army Chief\n\t3. Power of Ptresident to dissolve Senate\n\t4. Power of Ptresident to dissolve Provincial Assemblies ");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&a);
			if(a==1)
					{
					score = score + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
			else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"Power of Ptresident to dissolve National Assembly\".");
					getch();
					clrscr();
					}

			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 19|");
			printf("|--------------|");
			printf("\n\n  How many articles were there in the constitution of 1956 ?\n");
			printf("\n\n\t1. 254\n\t2. 259\n\t3. 234\n\t4. 200");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&a);
			if(a==3)
					{
					score = score + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
			else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"234\".");
					getch();
					clrscr();
					}

			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 20|");
			printf("|--------------|");
			printf("\n\n How many articles were there in 1962 constitution ? \n");
			printf("\n\n\t1. 275\n\t2. 225\n\t3. 250\n\t4. 290");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&a);
			if(a==3)
					{
					score = score + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
			else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"250\".");
					getch();
					clrscr();
					}

			printf("\t\t-------YOUR SCORE OUT OF 20-------\n\n\n");
			printf("\t\tName : %s \n\n \t\tRoll No: CSC-22F-0%d \n\n\t\tScore : %d",name,rollno,score);
			getch();

			clrscr();
			printf("\t--------WHAT YOU WANT--------\n");
			printf("\n\t1) MAIN MENUE.\n");
			printf("\t2) EXIT.\n");
			printf(" ");
			scanf("%d",&b);
				switch(b)
				{
				case 1:
				goto mainmenue;
				getch();
				break;

				case 2:
				return 0;
				break;

				default:
				printf("\n\t|------------|\n");
				printf("\n\t|WRONGE INPUT|\n");
				printf("\t|------------|\n");
				break;
				}

			break;
		  ///////////Final Term Question Pak Studies
			case 3:
			clrscr();
			printf("\t\t\Student Name: ");
			scanf("%s",&name);
			printf("\t\tRoll No: CSC-22F-");
			scanf("%d",&rollno);
			printf("\n|--------------|");
			printf("|Question No. 1|");
			printf("|--------------|");
			printf("\n\n In constitution 1973 who were declared non Muslims ? \n");
			printf("\n\n\t1. Qadiyanis\n\t2. Christians\n\t3. Hindus\n\t4. Jews");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&d);
			      if(d==1)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"Qadiyanis\".");
					getch();
					clrscr();
					}
			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 2|");
			printf("|--------------|");
			printf("\n\n When did fatima Jinnah joined All India Muslim League ?\n");
			printf("\n\n\t1. 1939\n\t2. 1927\n\t3. 1947\n\t4. 1949");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&d);
			      if(d==1)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"1939\".");
					getch();
					clrscr();
					}
			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 3|");
			printf("|--------------|");
			printf("\n\n Pakistan's National Flag was prepared by _________ ? \n");
			printf("\n\n\t1. Abdur-Rehman Chugtai\n\t2. Liaquat Ali\n\t3. Choudhary Rehmat Ali\n\t4. Ameer-ud-din Qadwai");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&d);
			      if(d==4)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"Ameer-ud-din Qadwai\".");
					getch();
					clrscr();
					}
			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 4|");
			printf("|--------------|");
			printf("\n\n Pakistan 1st coin was issued on ? \n");
			printf("\n\n\t1. 3rd June 1948\n\t2. 6th Jun 1949\n\t3.non of these \n\t4. 3rd Jan 1948");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&d);
			      if(d==4)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"3rd Jan 1948\".");
					getch();
					clrscr();
					}
			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 5|");
			printf("|--------------|");
			printf("\n\n Where the biggest Salt Mine located in Pakistan ? \n");
			printf("\n\n\t1. Mangora\n\t2. Jhelum\n\t3. Sawat\n\t4. none of these");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&d);
			      if(d==2)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"Jhelum\".");
					getch();
					clrscr();
					}
			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 6|");
			printf("|--------------|");
			printf("\n\n The longest river in Pakistan is ? \n");
			printf("\n\n\t1. River Ravi\n\t2. River Cheenab\n\t3. River Sindh\n\t4. River Ravi");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&d);
			      if(d==3)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"River Sindh\".");
					getch();
					clrscr();
					}
			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 7|");
			printf("|--------------|");
			printf("\n\n Which is the national flower of Pakistan \n");
			printf("\n\n\t1. Lilly\n\t2. Rose\n\t3. Jasmine\n\t4. Tulip");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&d);
			      if(d==3)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"Jasmine\".");
					getch();
					clrscr();
					}
			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 8|");
			printf("|--------------|");
			printf("\n\n Who started the Faraizi Movement ?\n");
			printf("\n\n\t1. Haji Shariat Ullah\n\t2. Allama Muhammmad Iqbal\n\t3. Maulana Muhammad Ali Jauhar\n\t4. Sir Agha Khan");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&d);
			      if(d==1)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"Haji Shariat Ullah\".");
					getch();
					clrscr();
					}

			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 9|");
			printf("|--------------|");
			printf("\n\n The Kashaf-ul-Mahjub  was written by ?\n");
			printf("\n\n\t1. Maulana Zakaullah\n\t2. Maulana Shibli Nomani\n\t3. Maulana Altaf Hussain Hali\n\t4. Hazrat Data Gunj Buksh (R.A)");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&d);
			      if(d==4)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"Hazrat Data Gunj Baksh (R.A)\".");
					getch();
					clrscr();
					}
			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 10|");
			printf("|--------------|");
			printf("\n\n Who reviewed the famous book The Indian Musalmans in 1872 ? \n");
			printf("\n\n\t1. Sir Syed Ahmed Khan\n\t2. Sir William Wilson Hunter\n\t3. M Delwar Hussain\n\t4. John King Fair Bank");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&d);
			      if(d==1)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"Sir Syed Ahmned Khan\".");
					getch();
					clrscr();
					}
			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 11|");
			printf("|--------------|");
			printf("\n\n Government of India Act 1858 was passed on ? \n");
			printf("\n\n\t1. 2nd Aug 1858\n\t2. 18th July 1858\n\t3. 24th Oct 1858\n\t4. 3rd June 1858");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&d);
			      if(d==1)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"2nd Aug 1858\".");
					getch();
					clrscr();
					}
			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 12|");
			printf("|--------------|");
			printf("\n\n The book Khutbat e Ahmadia is written by ?\n");
			printf("\n\n\t1. Dr Safdar Mahmood\n\t2. Abdul Haram Shara\n\t3. Sir Syed Amir Ali\n\t4. Sir Syed Ahmed Khan");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&d);
			      if(d==4)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"Sir Syed Ahmed Khan\".");
					getch();
					clrscr();
					}
			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 13|");
			printf("|--------------|");
			printf("\n\n Indian Independence Act was enforced on ?\n");
			printf("\n\n\t1. 13th Aug 1947\n\t2. 14th Aug 1947\n\t3. 15th Aug 1947\n\t4. 16th Aug 1947");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&d);
			      if(d==3)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"15th Aug 1947\".");
					getch();
					clrscr();
					}
			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 14|");
			printf("|--------------|");
			printf("\n\n Allam Muhammad Iqbal delivered his famous Allahabad Address in ? \n");
			printf("\n\n\t1. 1929\n\t2. 1930\n\t3. 1931\n\t4. 1932");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&d);
			      if(d==2)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"1930\".");
					getch();
					clrscr();
					}
			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 15|");
			printf("|--------------|");
			printf("\n\n  At the time of Independence which community was in majority in the state of Kashmir ?\n");
			printf("\n\n\t1. Muslim\n\t2. Hindu\n\t3. sikh\n\t4. Christian");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&d);
			      if(d==1)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"Muslim\".");
					getch();
					clrscr();
					}
			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 16|");
			printf("|--------------|");
			printf("\n\n Which state was attacked by India on 11th Sep 1948 ?\n");
			printf("\n\n\t1. State of Hyderabad Daccan\n\t2. State of Jammu and Kashmir\n\t3. State of Manavadar\n\t4. State of Junagarh ");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&d);
			      if(d==1)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"State of Hyderabad\".");
					getch();
					clrscr();
					}
			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 17|");
			printf("|--------------|");
			printf("\n\n In which year the Kashmiris started their freedom movement against Dogra rule before the partition of the sub-continent ?\n");
			printf("\n\n\t1. 1940\n\t2. 1930\n\t3. 1920\n\t4. 1928");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&d);
			      if(d==2)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"1930\".");
					getch();
					clrscr();
					}
			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 18|");
			printf("|--------------|");
			printf("\n\n In which of the following cities Indian National Congress was found ?\n");
			printf("\n\n\t1. Delhi\n\t2. Bombay\n\t3. Kanpur\n\t4. Allahabad");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&d);
			      if(d==2)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"Bombay\".");
					getch();
					clrscr();
					}

			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 19|");
			printf("|--------------|");
			printf("\n\n In which of the following cities All India Muslim League was found ? \n");
			printf("\n\n\t1. Delhi\n\t2. Lahore\n\t3. Allahabad\n\t4. Dhaka");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&d);
			      if(d==4)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"Dhaka\".");
					getch();
					clrscr();
					}
			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 20|");
			printf("|--------------|");
			printf("\n\n In which year Syed jamal-u-din Afghani died ? \n");
			printf("\n\n\t1. 1892\n\t2. 1897\n\t3. 1896\n\t4. 1895");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&d);
			      if(d==2)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"1897\".");
					getch();
					clrscr();
					}
			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 21|");
			printf("|--------------|");
			printf("\n\n  Which pass connects Pakistan with Afghanitan ?\n");
			printf("\n\n\t1. Khunjerab PAss\n\t2. Tochi Pass\n\t3. Khyber PAss\n\t4. Gomal Pass");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&d);
			      if(d==3)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"Khyber Pass\".");
					getch();
					clrscr();
					}
			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 22|");
			printf("|--------------|");
			printf("\n\n Which mountain range is located in Sindh Province \n");
			printf("\n\n\t1. Himalaya\n\t2. Karakoram Range\n\t3. Kirthar Range\n\t4. salt Range");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&d);
			      if(d==3)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"Kirthar Range\".");
					getch();
					clrscr();
					}
			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 23|");
			printf("|--------------|");
			printf("\n\n The highest peak of salt range is ? \n");
			printf("\n\n\t1. Skaser\n\t2. Nanga Parbat\n\t3. Malka Parbat\n\t4. Everest ");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&d);
			      if(d==1)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"Skaser\".");
					getch();
					clrscr();
					}
			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 24|");
			printf("|--------------|");
			printf("\n\n  Pakistan conducted nuclear tests on May 28 1998 at ?\n");
			printf("\n\n\t1. Kohe-e-Sufaid\n\t2. Chaghi Hills\n\t3. Tobah kakar\n\t4. Raskoh");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&d);
			      if(d==2)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"Chaghi Hills\".");
					getch();
					clrscr();
					}
			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 25|");
			printf("|--------------|");
			printf("\n\n What is the total area of Punjab Province ? \n");
			printf("\n\n\t1. 74,521 km\n\t2. 40,914 Km\n\t3. 347,190 Sq Km\n\t4. 205,344 Sq Km");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&d);
			      if(d==4)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"205,344 km\".");
					getch();
					clrscr();
					}

			printf("\t\t-------YOUR SCORE OUT OF 50-------\n\n\n");
			printf("\t\tName : %s \n\n \t\tRoll No: CSC-22F-0%d \n\n\t\tScore : %d ",name,rollno,scm);
			getch();

			clrscr();
			printf("\t--------WHAT YOU WANT--------\n");
			printf("\n\t1) MAIN MENUE.\n");
			printf("\t2) EXIT.\n");
			printf(" ");
			scanf("%d",&b);
				switch(b)
				{
				case 1:
				goto mainmenue;
				getch();
				break;

				case 2:
				return 0;
				break;

				default:
				printf("\n\t|------------|\n");
				printf("\n\t|WRONGE INPUT|\n");
				printf("\t|------------|\n");
				break;
				}

			break;

			case 4:
			clrscr();
			goto mainmenue;
			break;

			case 5:
			clrscr();
			return 0;
			break;

			default:
			printf("\n\t|------------|\n");
			printf("\n\t|WRONGE INPUT|\n");
			printf("\t|------------|\n");
			break;
			}

		case 4:
		clrscr();
		printf("\n\t|-------------------------------|\n");
		printf("\n\t|WELCOME IN ENGLISH LANGUAGE|\n");
		printf("\n\t|-------------------------------|\n");
		printf("\n\t 1. Quiz");
		printf("\n\t 2. Mid Term");
		printf("\n\t 3. Final Term");
		printf("\n\t 4. MAIN MENU");
		printf("\n\t 5. EXIT");
		printf("\n\n\tENTER: ");
		scanf("%d",&usre);

		    switch(usre)
		    {
				case 1:

				clrscr();
				printf("\t\t\Student Name: ");
				scanf("%s",&name);
				printf("\t\tRoll no: CSC-22F-");
				scanf("%d",&rollno);
				printf("\n|--------------|");
				printf("|Question No. 1|");
				printf("|--------------|");
				printf("\n\n What is the synonym of circuitous ? \n");
				printf("\n\n\t1. Cyclic\n\t2. Weak\n\t3. Strong\n\t4. Non of these");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				if(a==1)
					{
					score = score + 1;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"Cyclic\".");
					getch();
					clrscr();
					}

				clrscr();

				printf("\n|--------------|");
				printf("|Question No. 2|");
				printf("|--------------|");
				printf("\n\n What is the synonym of ARROGANT ? \n");
				printf("\n\n\t1. Progressive\n\t2. Humble\n\t3. Non of these\n\t4. Conceited");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				if(a==4)
					{
					score = score + 1;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"Conceited\".");
					getch();
					clrscr();
					}
				clrscr();

				printf("\n|--------------|");
				printf("|Question No. 3|");
				printf("|--------------|");
				printf("\n\n What is the synonym of Emaciated ? \n");
				printf("\n\n\t1. fat\n\t2. Very fat\n\t3. Very thin\n\t4. thin");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				if(a==3)
					{
					score = score + 1;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"Very thin\".");
					getch();
					clrscr();
					}
				clrscr();

				printf("\n|--------------|");
				printf("|Question No. 5|");
				printf("|--------------|");
				printf("\n\n  Select the meaning of \"Rule of thumb\". \n");
				printf("\n\n\t1. a rough estimate\n\t2. an easy choice\n\t3. To use something frequently\n\t4. To be fair something frequently");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				if(a==1)
					{
					score = score + 1;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"a rough estimate\".");
					getch();
					clrscr();
					}
				clrscr();

				printf("\n|--------------|");
				printf("|Question No. 6|");
				printf("|--------------|");
				printf("\n\n \"Wow\" can be used as an example for ? \n");
				printf("\n\n\t1. Noun\n\t2. Adverb\n\t3. Interjection\n\t4. Adjective");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				if(a==3)
					{
					score = score + 1;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"Interjection\".");
					getch();
					clrscr();
					}
				clrscr();

				printf("\n|--------------|");
				printf("|Question No. 7|");
				printf("|--------------|");
				printf("\n\n  Ali looks very upset, maybe he took the criticism  ______  heart. \n");
				printf("\n\n\t1. of \n\t2. about\n\t3. to\n\t4. in");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				if(a==3)
					{
					score = score + 1;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"to\".");
					getch();
					clrscr();
					}
				clrscr();

				printf("\n|--------------|");
				printf("|Question No. 8|");
				printf("|--------------|");
				printf("\n\n Select the  synonym of \"Bibulous\". \n");
				printf("\n\n\t1. Bozzy and Sottish\n\t2. Putrid & Grimy\n\t3. Grimy\n\t4. Huge");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				if(a==1	)
					{
					score = score + 1;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"Boozy & Sottish\".");
					getch();
					clrscr();
					}
				clrscr();

				printf("\n|--------------|");
				printf("|Question No. 9|");
				printf("|--------------|");
				printf("\n\n Isolation is mostly similar to what ? \n");
				printf("\n\n\t1. Disease\n\t2. Soluble\n\t3. Solitude\n\t4. Catching");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				if(a==3)
					{
					score = score + 1;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"Solitude\".");
					getch();
					clrscr();
					}

				clrscr();

				printf("\n|--------------|");
				printf("|Question No. 10|");
				printf("|--------------|");
				printf("\n\n  Select the meaning of \"Carte Blanche\". \n");
				printf("\n\n\t1. Full discretionary powers\n\t2. None of these\n\t3. Stationary wheel\n\t4. Circumstantial");
				printf("\n\nEnter Only 1 option here:  ");
				scanf("%d",&a);
				if(a==1)
					{
					score = score + 1;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"Full discretionary powers\".");
					getch();
					clrscr();
					}

			printf("\t\t-------YOUR SCORE OUT OF 10-------\n\n\n");
			printf("\t\tName : %s \n\n \t\t Roll No : CSC-22f-0%d \n\n\t\tScore : %d",name,rollno,score);
			getch();


			printf("\t--------WHAT YOU WANT--------\n");
			printf("\n\t1) MAIN MENUE.\n");
			printf("\t2) EXIT.\n");
			printf(" ");
			scanf("%d",&b);
				switch(b)
				{
				case 1:
				goto mainmenue;
				getch();
				break;

				case 2:
				return 0;
				break;

				default:
				printf("\n\t|------------|\n");
				printf("\n\t|WRONGE INPUT|\n");
				printf("\t|------------|\n");
				break;
				}
			break;

			 //Mid Term English
			case 2:

			clrscr();
			printf("\t\t\Student Name: ");
			scanf("%s",&name);
			printf("\t\tRoll No: CSC-22F-");
			scanf("%d",&rollno);
			printf("\n|--------------|");
			printf("|Question No. 1|");
			printf("|--------------|");
			printf("\n\n Select the following that is same in meaning to \"SOPORIFIC\". \n");
			printf("\n\n\t1. Delinquent\n\t2. Hypnotic\n\t3. Meteoric\n\t4. Sadistic");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&c);
			      if(c==2)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"Hypnotic\".");
					getch();
					clrscr();
					}
			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 2|");
			printf("|--------------|");
			printf("\n\n Select the right meaning of idiom \"Beat about the bush\". \n");
			printf("\n\n\t1. To have a dispute with someone\n\t2. To make noise\n\t3. To help someone\n\t4. To avoid the main topic");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&c);
			      if(c==4)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"To avoid the main topic\".");
					getch();
					clrscr();
					}
			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 3|");
			printf("|--------------|");
			printf("\n\n She was alarmed _______ his death. \n");
			printf("\n\n\t1. by\n\t2. at\n\t3. of\n\t4. to");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&c);
			      if(c==2)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"at\".");
					getch();
					clrscr();
					}

			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 4|");
			printf("|--------------|");
			printf("\n\n They ____ in Karachi. \n");
			printf("\n\n\t1. is living\n\t2. lives\n\t3. live\n\t4. living");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&c);
			      if(c==3)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"live\".");
					getch();
					clrscr();
					}

			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 5|");
			printf("|--------------|");
			printf("\n\n This building is not properly safe and must be _______ down. \n");
			printf("\n\n\t1. pulled\n\t2. pull\n\t3. pulls\n\t4. pulling");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&c);
			      if(c==1)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"pulled\".");
					getch();
					clrscr();
					}

			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 6|");
			printf("|--------------|");
			printf("\n\n There was a barber's shop ______ the hospital. \n");
			printf("\n\n\t1. over\n\t2. by\n\t3. away\n\t4. from");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&c);
			      if(c==2)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"by\".");
					getch();
					clrscr();
					}

			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 7|");
			printf("|--------------|");
			printf("\n\n Mr John is acquainted _____ my father.\n");
			printf("\n\n\t1. with\n\t2. to\n\t3. for\n\t4. of");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&c);
			      if(c==1)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"with\".");
					getch();
					clrscr();
					}

			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 8|");
			printf("|--------------|");
			printf("\n\n If we go to shopping mall _______ you like to come with us ? \n");
			printf("\n\n\t1. Are\n\t2. Am\n\t3. Should\n\t4. Would");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&c);
			      if(c==4)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"Would\".");
					getch();
					clrscr();
					}


			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 9|");
			printf("|--------------|");
			printf("\n\n Select the synonym of \"Zest\".\n");
			printf("\n\n\t1. Enthusiasm\n\t2. Clever\n\t3. Bold\n\t4. Weak");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&c);
			      if(c==1)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"Enthusiasm\".");
					getch();
					clrscr();
					}

			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 10|");
			printf("|--------------|");
			printf("\n\n He resigned ______ allegations that he was involved in drug trafficking.\n");
			printf("\n\n\t1. with\n\t2. under\n\t3. for\n\t4. over");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&c);
			      if(c==4)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"over\".");
					getch();
					clrscr();
					}


			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 11|");
			printf("|--------------|");
			printf("\n\n She is very _________ to meet you. \n");
			printf("\n\n\t1. to delight\n\t2. delight\n\t3. delighting\n\t4. delighted");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&c);
			      if(c==4)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"delighted\".");
					getch();
					clrscr();
					}
			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 12|");
			printf("|--------------|");
			printf("\n\n Kidn : Cruel:_____:______.\n");
			printf("\n\n\t1. Bright: Shining\n\t2. Day: Night\n\t3. Rough: Good\n\t4. Black: Dark");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&c);
			      if(c==2)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"Day: Night\".");
					getch();
					clrscr();
					}


			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 13|");
			printf("|--------------|");
			printf("\n\n He committed suicide out ______ despair .\n");
			printf("\n\n\t1. at\n\t2. on\n\t3. of\n\t4. to");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&c);
			      if(c==3)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"of\".");
					getch();
					clrscr();
					}

			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 14|");
			printf("|--------------|");
			printf("\n\n Special reporters are being sent to countries ___________ Afghanistan .\n");
			printf("\n\n\t1. through\n\t2. off\n\t3. like\n\t4. as");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&c);
			      if(c==3)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"like\".");
					getch();
					clrscr();
					}

			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 15|");
			printf("|--------------|");
			printf("\n\n They have expressed concern _________ the sea-based nuclear missiles .\n");
			printf("\n\n\t1. about\n\t2. upon\n\t3. for\n\t4. towards");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&c);
			      if(c==1)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"about\".");
					getch();
					clrscr();
					}
			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 16|");
			printf("|--------------|");
			printf("\n\n I would like to move _________ marketing.\n");
			printf("\n\n\t1. through\n\t2. in\n\t3. at\n\t4. into");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&c);
			      if(c==4)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"into\".");
					getch();
					clrscr();
					}
			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 17|");
			printf("|--------------|");
			printf("\n\n They were throwing stones over the wall _______ soldiers. \n");
			printf("\n\n\t1. at\n\t2. over\n\t3. up\n\t4. on");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&c);
			      if(c==1)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"at\".");
					getch();
					clrscr();
					}
			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 18|");
			printf("|--------------|");
			printf("\n\n They had to do something ________ their family's unhappiness\n");
			printf("\n\n\t1. about\n\t2. for\n\t3. of\n\t4. to");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&c);
			      if(c==1)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"about\".");
					getch();
					clrscr();
					}
			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 19|");
			printf("|--------------|");
			printf("\n\n I wish I lived _________ London.\n");
			printf("\n\n\t1. with\n\t2. at\n\t3. in\n\t4. by");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&c);
			      if(c==4)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"by\".");
					getch();
					clrscr();
					}
			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 20|");
			printf("|--------------|");
			printf("\n\n She traveled _______ difficult circumstances.\n");
			printf("\n\n\t1. before\n\t2. of\n\t3. to\n\t4. under");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&c);
			      if(c==4)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"before\".");
					getch();
					clrscr();
					}

			printf("\t\t-------YOUR SCORE OUT OF 40-------\n\n\n");
			printf("\t\tName : %s \n\n \t\tRoll no: CSC-22F- %d \n\n \t\tScore : %d ",name,rollno,scm);
			getch();

			clrscr();
			printf("\t--------WHAT YOU WANT--------\n");
			printf("\n\t1) MAIN MENUE.\n");
			printf("\t2) EXIT.\n");
			printf(" ");
			scanf("%d",&b);
				switch(b)
				{
				case 1:
				goto mainmenue;
				getch();
				break;

				case 2:
				return 0;
				break;

				default:
				printf("\n\t|------------|\n");
				printf("\n\t|WRONGE INPUT|\n");
				printf("\t|------------|\n");
				break;
				}

			break;
			 ///Final Term Questions.
			case 3:

			clrscr();
			printf("\t\t\Student Name: ");
			scanf("%s",&name);
			printf("\t\tRoll No: CSC-22F-");
			scanf("%d",&rollno);
			printf("\n|--------------|");
			printf("|Question No. 1|");
			printf("|--------------|");
			printf("\n\n He ran _____ her into the courtyard. \n");
			printf("\n\n\t1. over\n\t2. at\n\t3. after\n\t4. before");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&d);
			      if(d==3)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"after\".");
					getch();
					clrscr();
					}

			clrscr();
			printf("\n|--------------|");
			printf("|Question No. 2|");
			printf("|--------------|");
			printf("\n\n She will appear _____ the magistrate. \n");
			printf("\n\n\t1. of\n\t2. to\n\t3. before\n\t4. In front of");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&d);
			      if(d==3)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"before\".");
					getch();
					clrscr();
					}

			clrscr();

			printf("\n|--------------|");
			printf("|Question No. 3|");
			printf("|--------------|");
			printf("\n\n Equal pay for men and women is guaranteed ___________ English law. \n");
			printf("\n\n\t1. of\n\t2. in\n\t3. at\n\t4. under");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&d);
			      if(d==4)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"under\".");
					getch();
					clrscr();
					}

			clrscr();

			printf("\n|--------------|");
			printf("|Question No. 4|");
			printf("|--------------|");
			printf("\n\n Its grant is to be cut _____ more than 40 %. \n");
			printf("\n\n\t1. of\n\t2. by\n\t3. at\n\t4. for");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&d);
			      if(d==2)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"by\".");
					getch();
					clrscr();
					}

			clrscr();

			printf("\n|--------------|");
			printf("|Question No. 5|");
			printf("|--------------|");
			printf("\n\n The woman later died ______ her injuries. \n");
			printf("\n\n\t1. of\n\t2. for\n\t3. on\n\t4. to");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&d);
			      if(d==1)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"of\".");
					getch();
					clrscr();
					}
			clrscr();

			printf("\n|--------------|");
			printf("|Question No. 6|");
			printf("|--------------|");
			printf("\n\n Its grant is to be cut _____ more than 40 %. \n");
			printf("\n\n\t1. of\n\t2. by\n\t3. at\n\t4. for");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&d);
			      if(d==2)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"by\".");
					getch();
					clrscr();
					}

			clrscr();

			printf("\n|--------------|");
			printf("|Question No. 7|");
			printf("|--------------|");
			printf("\n\n He was driving ______ a lane. \n");
			printf("\n\n\t1. along\n\t2. at\n\t3. on\n\t4. for");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&d);
			      if(d==1)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"along\".");
					getch();
					clrscr();
					}
			clrscr();

			printf("\n|--------------|");
			printf("|Question No. 8|");
			printf("|--------------|");
			printf("\n\n About a million people watched the biggest parade _______ the Queen's coronation in 1953. \n");
			printf("\n\n\t1. then\n\t2. till\n\t3. since\n\t4. ever");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&d);
			      if(d==3)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"since\".");
					getch();
					clrscr();
					}

			clrscr();

			printf("\n|--------------|");
			printf("|Question No. 9|");
			printf("|--------------|");
			printf("\n\n The president should use his influence ______ the cabinet. \n");
			printf("\n\n\t1. on\n\t2. to\n\t3. at\n\t4. over");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&d);
			      if(d==4)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"by\".");
					getch();
					clrscr();
					}

			clrscr();

			printf("\n|--------------|");
			printf("|Question No. 10|");
			printf("|--------------|");
			printf("\n\n The air traffic system was ________ breaking point. \n");
			printf("\n\n\t1. like\n\t2. near\n\t3. on\n\t4. about");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&d);
			      if(d==2)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"near\".");
					getch();
					clrscr();
					}


			clrscr();

			printf("\n|--------------|");
			printf("|Question No. 11|");
			printf("|--------------|");
			printf("\n\n He was wiping sweat _____ his face. \n");
			printf("\n\n\t1. from\n\t2. out\n\t3. off\n\t4. by");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&d);
			      if(d==3)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"off\".");
					getch();
					clrscr();
					}


			clrscr();

			printf("\n|--------------|");
			printf("|Question No. 12|");
			printf("|--------------|");
			printf("\n\n He glanced ______ the corridor. \n");
			printf("\n\n\t1. over\n\t2. across\n\t3. along\n\t4. through");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&d);
			      if(d==3)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"along\".");
					getch();
					clrscr();
					}


			clrscr();

			printf("\n|--------------|");
			printf("|Question No. 13|");
			printf("|--------------|");
			printf("\n\n He was ill ______ eating the meal. \n");
			printf("\n\n\t1. since\n\t2. by\n\t3. of\n\t4. after");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&d);
			      if(d==4)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"after\".");
					getch();
					clrscr();
					}

			clrscr();

			printf("\n|--------------|");
			printf("|Question No. 14|");
			printf("|--------------|");
			printf("\n\n The local administration has also come in for criticism _______ allegations of corruption. \n");
			printf("\n\n\t1. for\n\t2. with\n\t3. of\n\t4. over");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&d);
			      if(d==4)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"over\".");
					getch();
					clrscr();
					}

			clrscr();

			printf("\n|--------------|");
			printf("|Question No. 15|");
			printf("|--------------|");
			printf("\n\n There is tendency _______ inflation. \n");
			printf("\n\n\t1. towards\n\t2. for\n\t3. of\n\t4. to");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&d);
			      if(d==1)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"towards\".");
					getch();
					clrscr();
					}

			clrscr();

			printf("\n|--------------|");
			printf("|Question No. 16|");
			printf("|--------------|");
			printf("\n\n My mother took me firmly ______ the hand. \n");
			printf("\n\n\t1. by\n\t2. up\n\t3. to\n\t4. at");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&d);
			      if(d==1)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"by\".");
					getch();
					clrscr();
					}

			clrscr();

			printf("\n|--------------|");
			printf("|Question No. 17|");
			printf("|--------------|");
			printf("\n\n Children who are weak ______ arithmetic need more home task. \n");
			printf("\n\n\t1. at\n\t2. of\n\t3. by\n\t4. in");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&d);
			      if(d==1)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"at\".");
					getch();
					clrscr();
					}

			clrscr();

			printf("\n|--------------|");
			printf("|Question No. 18|");
			printf("|--------------|");
			printf("\n\n This street was named ___ the mayor of the town.\n");
			printf("\n\n\t1. of\n\t2. after\n\t3. for\n\t4. as");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&d);
			      if(d==2)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"after\".");
					getch();
					clrscr();
					}

			clrscr();

			printf("\n|--------------|");
			printf("|Question No. 19|");
			printf("|--------------|");
			printf("\n\n I am just a little giral ________ Little Rock. \n");
			printf("\n\n\t1. along\n\t2. from\n\t3. with\n\t4. off");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&d);
			      if(d==2)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"from\".");
					getch();
					clrscr();
					}

			clrscr();

			printf("\n|--------------|");
			printf("|Question No. 20|");
			printf("|--------------|");
			printf("\n\n Chinese Premier paid a visit to Pakistan ____ the invitation of his Pakistani counterpart. \n");
			printf("\n\n\t1. of\n\t2. to\n\t3. at\n\t4. on");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&d);
			      if(d==4)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"on\".");
					getch();
					clrscr();
					}

			clrscr();

			printf("\n|--------------|");
			printf("|Question No. 21|");
			printf("|--------------|");
			printf("\n\n This money will be reserved ______ charitable purposes. \n");
			printf("\n\n\t1. in\n\t2. for\n\t3. on\n\t4. to");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&d);
			      if(d==2)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"for\".");
					getch();
					clrscr();
					}

			clrscr();

			printf("\n|--------------|");
			printf("|Question No. 22|");
			printf("|--------------|");
			printf("\n\n They walked ____ the steps. \n");
			printf("\n\n\t1. down\n\t2. along\n\t3. of\n\t4. under");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&d);
			      if(d==1)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"down\".");
					getch();
					clrscr();
					}

			clrscr();

			printf("\n|--------------|");
			printf("|Question No. 23|");
			printf("|--------------|");
			printf("\n\n I spent alot of time _______ this project. \n");
			printf("\n\n\t1. over\n\t2. on\n\t3. for\n\t4. at");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&d);
			      if(d==2)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"on\".");
					getch();
					clrscr();
					}

			clrscr();

			printf("\n|--------------|");
			printf("|Question No. 24|");
			printf("|--------------|");
			printf("\n\n I hope you reach the airport ______ time for the later flight. \n");
			printf("\n\n\t1. in\n\t2. on\n\t3. from\n\t4. at");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&d);
			      if(d==1)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"in\".");
					getch();
					clrscr();
					}

			clrscr();

			printf("\n|--------------|");
			printf("|Question No. 25|");
			printf("|--------------|");
			printf("\n\n We trust _____ God. \n");
			printf("\n\n\t1. to\n\t2. on\n\t3. at\n\t4. in");
			printf("\n\nEnter Only 1 option here:  ");
			scanf("%d",&d);
			      if(d==4)
					{
					scm = scm + 2;
					printf("CORRECT ANSWER.");
					getch();
					clrscr();
					}
				else
					{
					printf("WRONG ANSWER");
					printf("\nCORRECT ANSWER IS \"in\".");
					getch();
					clrscr();
					}

			printf("\t\t-------YOUR SCORE OUT OF 50-------\n\n\n");
			printf("\t\tName : %s \n\n \t\tRoll no: CSC-22F-0%d \n\n \t\tScore : %d ",name,rollno,scm);
			getch();

			clrscr();
			printf("\t--------WHAT YOU WANT--------\n");
			printf("\n\t1) MAIN MENUE.\n");
			printf("\t2) EXIT.\n");
			printf(" ");
			scanf("%d",&b);
				switch(b)
				{
				case 1:
				goto mainmenue;
				getch();
				break;

				case 2:
				return 0;
				break;

				default:
				printf("\n\t|------------|\n");
				printf("\n\t|WRONGE INPUT|\n");
				printf("\t|------------|\n");
				break;
				}

			break;

			case 4:
			clrscr();
			goto mainmenue;
			break;

			case 5:
			clrscr();
			return 0;
			break;

			default:
			printf("\n\t|------------|\n");
			printf("\n\t|WRONGE INPUT|\n");
			printf("\t|------------|\n");
			break;
		      }

		case 5:
		return 0;
		break;

		default:
		printf("\n\t|------------|\n");
		printf("\n\t|WRONGE INPUT|\n");
		printf("\t|------------|\n");
		break;
		}

		getch();
		}