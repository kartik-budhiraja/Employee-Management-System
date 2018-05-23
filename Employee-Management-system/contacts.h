/* -------------------------------------------
Name:Kartik Budhiraja
Date:30-11-2017
----------------------------------------------
Employee Management System
---------------------------------------------- */

struct Name {                             //structure which contains name deatils:firstname,middleinitial,lastname
	char firstName[31];
	char middleInitial[7];
	char lastName[36];
};


struct Address {                    //structure which contains address details:streetnumber,street name,city
	int streetnumber;
	char street[41];
	int apartmentNumber;
	char postalcode[8];
	char city[41];
};



struct Numbers {                   //structure which contains numbers like cell,home or business
	char cell[21];
	char home[21];
	char business[21];
};




struct Contact {                   //contact structure contains objects of structures Name,Address,Numbers as a member of it to store the value of each contact
	struct Name name;              //object of struct Name
	struct Address address;        //object of struct Address
	struct Numbers number;          //object of struct Numbers
};




void getName(struct Name *name);   //prototype of function that stores the values of fullname



void getAddress(struct Address *address);  //prototype of function that stores the values of the complete address


void getNumbers(struct Numbers *number);    //prototype of function that stores the values of the complete contact information

