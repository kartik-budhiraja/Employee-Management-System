/* -------------------------------------------
Name:Kartik Budhiraja
Date:30-11-2017
----------------------------------------------
Employee Management System
---------------------------------------------- */
// this file includes all the logic of functions included
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


#include "contacts.h"



void getName(struct Name *name) {                                       //definition of function which will ask the user to enter values for name
	char tester;
	printf("Please enter the contact's first name: ");
	scanf("%30s", name->firstName);                            //accepting values for name
	printf("Do you want to enter a middle initial(s)? (y or n): ");                      //prompts user to tell whether to enter this value or not
	scanf(" %c", &tester);
	if (tester == 'y' || tester == 'Y') {
		printf("Please enter the contact's middle initial(s): ");
		scanf("%6s", name->middleInitial);
	}
	printf("Please enter the contact's last name: ");
	scanf("%35s", name->lastName);
}



void getAddress(struct Address *address) {                                 //definition of function which will ask the user to enter values for address
	char tester;
	printf("Please enter the contact's street number: ");            //accepting values for address
	scanf("%d", &address->streetnumber);                             //put & everytime you scanf integer whether its a pointer
	printf("Please enter the contact's street name: ");
	scanf("%40s", address->street);
	printf("Do you want to enter an appartment number? (y or n): ");             //prompts user to tell whether to enter this value or not
	scanf(" %c", &tester);
	if (tester == 'y' || tester == 'Y') {
		printf("Please enter the contact's appartment number: ");
		scanf("%d", &address->apartmentNumber);
	}
	printf("Please enter the contact's postal code: ");
	scanf(" %7[^\n]s", address->postalcode);
	printf("Please enter the contact's city: ");
	scanf("%40s", address->city);
}






void getNumbers(struct Numbers *number) {                                  //definition of function which will ask the user to enter values for contact
	char tester;
	printf("Do you want to enter a cell phone number? (y or n): ");        //accpeting values for numbers
	scanf(" %c", &tester);
	if (tester == 'y' || tester == 'Y') {
		printf("Please enter the contact's cell phone number: ");
		scanf("%20s", number->cell);
	}
	printf("Do you want to enter a home phone number? (y or n): ");          //prompts user to tell whether to enter this value or not
	scanf(" %c", &tester);
	if (tester == 'y' || tester == 'Y') {
		printf("Please enter the contact's home phone number: ");
		scanf("%20s", number->home);
	}
	printf("Do you want to enter a business phone number? (y or n): ");             //prompts user to tell whether to enter this value or not
	scanf(" %c", &tester);
	if (tester == 'y' || tester == 'Y') {
		printf("Please enter the contact's business phone number: ");
		scanf("%20s", number->business);
	}
}