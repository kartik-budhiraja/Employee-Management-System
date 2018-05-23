/* -------------------------------------------
Name:Kartik Budhiraja
Student number:120592175
Email:kbudhiraja@myseneca.ca
Section:SVV
Date:30-11-2017
----------------------------------------------
Assignment: 1
Milestone:  4
---------------------------------------------- */
// this includes all the logic of functions included
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// This source file needs to "know about" the structures you declared
// in the header file before referring to those new types:
// HINT: put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
// #include your contacts header file on the next line:
#include "contacts.h"


// Get and store from standard input the values for Name
// Put your code here that defines the Contact getName function:
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


// Get and store from standard input the values for Address
// Put your code here that defines the Contact getAddress function:
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




// Get and store from standard input the values for Numbers
// Put your code here that defines the Contact getNumbers function:

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