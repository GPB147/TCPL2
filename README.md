```python
"C": "Page 35"

	"0 C(Short)" = {

	}
		
	"1 keys":

		"""0 Numbers = [..., 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, ...]
		
		1 Symboles = \ () {} ' , <> # ; \\ /**/ = != >= <= * + - / \" += -= *=''' ++ -- == || && ** _ """

		"""2 Words =  
	
			0 Core:

			1 Operators:

				0 What:

					0 \:

						0 \n = [new line]

						1 \t = [tab]

						2 \v = [Vertical tab]

						3 \b = [backspace=back writing]

						4 \r

						5 \f

						6 \a

						7 \\

						8 \?

						9 \'

						10 \"

						11 \ooo = [Octal number]

						12 \xhh = [Hex number]

					1 %:

						0 %d, x = [Defining digits=integers(x) for d]

						1 %f, x = [Defining floats(x) for f]

						2 %o, x = [octal]

						3 %x, y = [hexadecimal]

						4 %c, x = [Single character]

						5 %s, x = [String]

						6 %%, x = [itself]

						7 %ld, x = [Long digit]
			
				1 How to use:

					0 Basic = [printf("Operators", Define1, Define2, ...)]

					1 Advance = [NumberOperation, Example = printf("3d\t5.2f", var0, var1)]

			2 Defining:

				0 Variable:

					0 Local:
	
						0 What = [It's define in self function by default, Short name]

					1 General(External):

						0 What = [It's define in all functions and everywhere, Long name]

						1 How to do it:

							0 Specific type:

								0 First = [Defining variables in outside of every function, Example = type name or type name[number];]

								1 Second = [Called variables in inside of every function by extern in first, Example = extern type name]

							1 Every type:

									0 #define name value = [defining value in every type of name can called in first of program, Example = #define mohammad gpb147]

						2 Why it's not good = [It's heavy because it's allways run and used memory and CPU, Hard to modify program]

					0 Types:

						0 What = [how the CPU and memory see the data by specific bytes]

						1 X:

							0 First:

								0 short = [2 bytes, Called by %hd, Used for small integers, Just int]

								1 long = [4 or 8 bytes, Called by %ld, Used for bigger integers, Just int and double]

								2 signed = [Modifier, Used for allows negative, Just char and int]

								3 unsigned = [Modifier, Called by %u, Used for only positive, Just char and int]

							1 Second:

								0 void = [No memory, Used for no data]				
						
								1 char = [1 byte %s or %c, Used for characters / raw bytes]

								2 int = [Less bytes %d, Used for general integers(characters + general integers)]

								3 Float = [More bytes, Called by %f, Used for decimal numbers(...)]

								4 double = [Very more bytes, Called by %f, Used for more precise decimals(...)]

							3 Third:

								0 signed char = [8 bits=-128 to 127, Called by %c]

								1 unsigned char = [8 bits=0 to 255 values values, Called by %c]

								2 short int = [16 bits, Called by %d]

								3 long int = [32 bits, Called by %ld]

								4 singed int = [Called by %d]

								5 unsigned int = [Called by %u or %d]

								6 long double = [Called by %Lf]

								7 unsigned short = [Called by %hu]

								8 unsigned long = [Called by %lu]

						2 X x, y, z,...; x = ?; y = ?; ... = [defining(using xnumber.xnumber for floating like 31.0)]

						3 (X)x = [x already have type but we want to use x in different type so we use this style of it]
							
				1 Function:

					0 Making:

						0 Type Name(type name, type name, ...) {'x'\n} = [defining x to Name by type memory and CPU used]

						1 return x/0

					2 Defining:

						0 Type Name(type name, type name, ...); = [Must to define in fist of program]

			3 Statement:

				0 if (x) {y};

				1 else {x};

				2 else if (x) {y};

				3 switch

			4 iterations:

				0 while (x <= >= == y) {xxasewe} = [Working with boolean(True&False)]

				1 for (it is; while it is; do this) {althogh do this is too};
				
			5 Input&Output:
			
				0 getchar() = [input]

				1 putchar(x) = [output]

			6 Array:

				0 type name[number] = [Defining this in first of program and we have number-1 array]

				0 name[Number] = z
			
			7 Standard libraries:	

				0 #include x = [x = standard library like <stdio.h> for printf()]

				1 #include <stdio.h>:
	
					0 printf('x\n');     
						
					1 scanf('\n'); = [Reading input]

					2 EOF = [End Of File]

					3 header 

				2 #include <ctype.h>;

				3 #include <string.h>;

				4 #include <math.h>;

				5 #include <stdlib.h>;

				6 #include <assert.h>;

				7 #include <stdarg.h>;

				8 #include <setjmp.h>;

				9 #include <signal.h>;

				10 #include <time.h>;

				11 #include <limits.h>; 

				12 #include <float.h>;
					
			8 Libraries:

				0
		3 Spaces"""
```