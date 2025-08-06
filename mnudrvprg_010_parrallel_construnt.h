#include<stdio.h>
#include<stdlib.h>

int fn_mnudrvprg_010_parrallel_construnt() {
	
	int choice;
	while (1)
	{
		printf("#################\n");
		printf("List of choice\n");
		printf("0: Exit\t 1. Hellow world serial program output \t 2. Hello world parallel program output\n");
		printf("#################\n");
		printf("Enter your choice\n");
		scanf_s("%d", &choice);

		switch (choice)
		{

		case 0: {
			printf("You opted to exit program\n");
			exit(0);
		}

		case 1: {
			printf("This is output of hello world serial program\n");
			fn_helloworld_srl();
			break;
		}
		case 2: {
			printf("This is output of hello world parallel program\n");
			fn_helloworld_prl();
			break;
		}

		default: {
			printf("Opted Wrong choice");
			break;
		}
		}
	}
	return 0;
}

// cant find the use of while properly.