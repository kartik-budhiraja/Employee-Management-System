/* -------------------------------------------
Name:Kartik Budhiraja
Date:30-11-2017
----------------------------------------------
Employee Management System
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS
#define _NO_CRT_STDIO_INLINE

#include <stdio.h>
#include "contacts.h"                     //includes the header file which contains the definitions of all the structures

int main(void)
{
	// Declare variables here:
	struct Name fullName = { "","","" };                           //Creating an object and Initializing each member to empty string
	struct Address fullAddress = { 0,"\0",0,"\0","\0" };                 //Creating an object and Initializing each member to empty string or zero
	struct Numbers allNumbers = { "","","" };                       
	
	struct Contact contact;
	contact.name = fullName;                  //making all the initial values to empty string by making the object equal to the object with empty string values 
	contact.address = fullAddress;          
	contact.number = allNumbers;	         
	// Display the title
	printf("Contact Management System\n");                        
	printf("-------------------------\n");

	// Call the Contact function getName to store the values for the Name member
	getName(&contact.name);                                          //calling the function from contacts.c which will accept the values and save it to contact.name

	// Call the Contact function getAddress to store the values for the Address member
	getAddress(&contact.address);                                    //calling the function from contacts.c which will accept the values and save it to contact.address

	// Call the Contact function getNumbers to store the values for the Numbers member
	getNumbers(&contact.number);                                    //calling the function from contacts.c which will accept the values and save it to contact.number

	// Display Contact summary details
	printf("\nContact Details\n");
	printf("---------------\n");
	printf("Name Details\n");
	printf("First name: %s\n", contact.name.firstName);                      //display all the values of name through object of struct contact
	printf("Middle initial(s): %s\n", contact.name.middleInitial);
	printf("Last name: %s\n", contact.name.lastName);
	printf("\n");
	printf("Address Details\n");
	printf("Street number: %d\n", contact.address.streetnumber);                  //display all the values of address through object of struct contact
	printf("Street name: %s\n", contact.address.street);
	printf("Apartment: %d\n", contact.address.apartmentNumber);
	printf("Postal code: %s\n", contact.address.postalcode);
	printf("City: %s\n", contact.address.city);
	printf("\nPhone Numbers:\n");                                                   //display all the values of number through object of struct contact
	printf("Cell phone number: %s\n", contact.number.cell);
	printf("Home phone number: %s\n", contact.number.home);
	printf("Business phone number: %s\n", contact.number.business);
	printf("\n");

	// Display Completion Message
	printf("Structure test for Contact using functions done!\n");

	return 0;
}

/*  SAMPLE OUTPUT:

Contact Management System
-------------------------
Please enter the contact's first name: Wilma
Do you want to enter a middle initial(s)? (y or n): y
Please enter the contact's middle initial(s): Dino
Please enter the contact's last name: Flintstone
Please enter the contact's street number: 100
Please enter the contact's street name: Bedrock
Do you want to enter an apartment number? (y or n): y
Please enter the contact's apartment number: 14
Please enter the contact's postal code: Z8Z 7R7
Please enter the contact's city: Markham
Do you want to enter a cell phone number? (y or n): Y
Please enter the contact's cell phone number: 647-505-5555
Do you want to enter a home phone number? (y or n): Y
Please enter the contact's home phone number: 905-222-3333
Do you want to enter a business phone number? (y or n): Y
Please enter the contact's business phone number: 416-491-5050

Contact Details
---------------
Name Details
First name: Wilma
Middle initial(s): Dino
Last name: Flintstone

Address Details
Street number: 100
Street name: Bedrock
Apartment: 14
Postal code: Z8Z 7R7
City: Markham

Phone Numbers:
Cell phone number: 647-505-5555
Home phone number: 905-222-3333
Business phone number: 416-491-5050

Structure test for Contact using functions done!
*/