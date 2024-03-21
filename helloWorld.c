#include<stdio.h> 			/*	# -> pre processor directive.It does the pre preparation before compilation process.
				  				include -> It includes the necessary things in program.
				  				"< >" -> It tells that see this file in the standard include path.
				 				 stdio -> This is a standard input output library which is standard path.
				 				 .h -> It is header file which represents ,it contains only function declaration.
				 			*/

int main(void)				 /*	int -> Integer is retrun type of function.
				 			 		main -> It is entry point funtion.
							  		() -> These are function brackets. They tells us that it is a function.
								  	void -> It represents there is no argrument.If we do not use void ,we can take 'n' number of arguments.
				 			 */

{                			 /* { ->This is starting curly brace tells the main function body starts from here. */

	printf("HelloWorld");	/*	printf -> It is function call and it is also use as display function on terminal.Printf is a function which takes 'n' number of arguments.
						  			";" -> It represents that expression is a statement.
						 	*/

	return(0);    			/*	return -> Return internally calls exist system call.
									"0" -> It is for successfull execution of program.
							*/

}                			 /* } -> It represents the end of the program body. */