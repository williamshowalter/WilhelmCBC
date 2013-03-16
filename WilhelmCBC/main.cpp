/*
 Written by William Showalter. williamshowalter@gmail.com.
 Date Last Modified: 2013 February 23
 Created: 2013 February 23

 Released under Creative Commons - creativecommons.org/licenses/by-nc-sa/3.0/
 Attribution-NonCommercial-ShareAlike 3.0 Unported (CC BY-NC-SA 3.0)

 **NOTE**
 I am not a crytologist/cryptanalyst and this software has not been heavily analyzed for security,
 so you should use it to protect actual sensitive data.

 Software is provided as is with no guarantees.


 Driver for WilhelmCBC class
 */

#include <iostream>
#include "WilhelmCBC.h"

int main(int argc, const char * argv[])
{
	//try {
	WilhelmCBC encryptor;
	// Change the file paths before you try and run this. I haven't copied and modified the user menu wrapper from my 301 project.
		
	//encryptor.setInput ("/Users/William/Desktop/testinput.sql");
	//encryptor.setOutput ("/Users/William/Desktop/theoutput");
	//encryptor.setKey ("myPassword!");

	encryptor.publicDebugFunc();
	return 0;
	//}
	//catch (...)
	//{
		return 0;
	//}
}

