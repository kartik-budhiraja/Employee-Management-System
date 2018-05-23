/* -------------------------------------------
Name:kartik budhiraja
Student number:120592175
Email:kbudhiraja@myseneca.ca
Section:svv
Date:30-11-2017
----------------------------------------------
Assignment: 1
Milestone: 4
---------------------------------------------- */
//declaration of all structures and functions to be included in the main program
// Structure type Name declaration
struct Name {                             //structure which contains name deatils:firstname,middleinitial,lastname
	char firstName[31];
	char middleInitial[7];
	char lastName[36];
};

// Structure type Address declaration
// Place your code from Milestone #2 here...
struct Address {                    //structure which contains address details:streetnumber,street name,city
	int streetnumber;
	char street[41];
	int apartmentNumber;
	char postalcode[8];
	char city[41];
};


// Structure type Numbers declaration
// Place your code from Milestone #2 here...
struct Numbers {                   //structure which contains numbers like cell,home or business
	char cell[21];
	char home[21];
	char business[21];
};



// Structure type Contact declaration
// Place your code here...
struct Contact {                   //contact structure contains objects of structures Name,Address,Numbers as a member of it to store the value of each contact
	struct Name name;              //object of struct Name
	struct Address address;        //object of struct Address
	struct Numbers number;          //object of struct Numbers
};



//------------------------------------------------------
// Function Prototypes
//------------------------------------------------------

// ====== Milestone 4 =======

// Get and store from standard input the values for Name
// Place your code here...
void getName(struct Name *name);   //prototype of function that stores the values of fullname


// Get and store from standard input the values for Address
// Place your code here...
void getAddress(struct Address *address);  //prototype of function that stores the values of the complete address

// Get and store from standard input the values for Numbers
// Place your code here...
void getNumbers(struct Numbers *number);    //prototype of function that stores the values of the complete contact information

