```python
"C": "Page 43"

	"0 C(Short)" = 
	{

		"""0 Chose standard libraries we need

		1 Chose types we need

		2 Coding

		3 """	

	}
		
	"1 keys":

		"""0 Numbers = [..., 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, ...]
		
		1 Symboles = \ () {} ' , <> # ; \\ /**/ // = != >= <= * + - / \" += -= *=''' ++ -- == || && ** _ % ! """

		"""2 Words =  
	
			0 Core:

			1 Operators:

				0 What:

					0 \:

						0 \n = [new line]

						1 \t = [tab]

						2 \v = [Vertical tab]

						3 \b = [backspace=back writing]

						4 \r = [Return]

						5 \f

						6 \a

						7 \\

						8 \?

						9 \'

						10 \"

						11 \ooo = [Octal number = Real number of bytes, Example = #define name '\391' or '\002']

						12 \xhh = [Hexadecimal number, Example = #define name '\xt' or '\x3']

					1 %:

						0 ("%d", value) = [Defining digits=integers(x) for d]

						1 ("%f", value) = [Defining floats(x) for f]

						2 ("%o", value) = [octal]

						3 ("%x", value) = [hexadecimal]

<<<<<<< HEAD
						4 %c, x = [Single character]

<<<<<<< HEAD
						5 %s, x = [String]
=======
						5 %s, x = [Character string]
>>>>>>> c0f1f4aed30485d1af85c1453aad29a4a0789f50
=======
						4 ("%c", value) = [Single character]

						5 ("%s", value) = [String]
>>>>>>> master

						6 ("%%", value) = [itself]

						7 ("%ld", value) = [Long digit]

						8 number % number = [Extra in dividing process, Example = 4 % 400 = 0]
			
				1 How to use:

					0 Basic = [printf("Operators", Define1, Define2, ...)]

					1 Advance = [NumberOperation, Example = printf("3d\t5.2f", var0, var1)]

			2 Defining:

				0 Variable:

					0 Local:
	
						0 What = [It's define in self function by default, Short name]

						1 How to use:

							0 type name; name = value

							1 type name = value


					1 General(External):

						0 What = [It's define in all functions and everywhere, Long name]

						1 How to do it:

							0 Specific type:

								0 First = [Defining variables in outside of every function, Example = type name or type name[number];]

								1 Second = [Called variables in inside of every function by extern in first, Example = extern type name]

							1 Every type:

								0 #define name value = [defining value in every type of name can called in first of program, Example = #define mohammad gpb147]

						2 Why it's not a good idea = [It's heavy because it's allways run and used memory and CPU, Hard to modify program]

					2 Types:

						0 What = [how the CPU and memory see the data by specific bytes]

						1 X:

							0 Knowing:

								0 short = [Small bytes, Called by %hd, Used for small integers, Just int]

								1 long = [Big bytes, Called by %ld, Used for bigger integers, Just int and double]

								2 signed = [Modifier, Used for allows negative, Just char and int]

								3 unsigned = [Modifier, Called by %u, Used for only positive, Just char and int]	

								4 const = [Called by %, Used for, All]	
						
<<<<<<< HEAD
<<<<<<< HEAD
								1 char = [1 byte %s or %c, Used for characters / raw bytes]

								2 int = [Less bytes %d, Used for general integers(characters + general integers)]

								3 Float = [More bytes, Called by %f, Used for decimal numbers(...)]

								4 double = [Very more bytes, Called by %f, Used for more precise decimals(...)]
=======
								1 char = [1 byte, Called by %s or %c, Used for characters / raw bytes]
=======
							1 Using:
>>>>>>> master

								0 void = [No memory, Used for no data]

								1 char = [1 byte %s or %c, Used for characters(String, "") / raw bytes]

<<<<<<< HEAD
								4 double = [8 bytes, Called by %f, Used for more precise decimals(...)]
>>>>>>> c0f1f4aed30485d1af85c1453aad29a4a0789f50
=======
								2 signed char = [-128 to 127, Called by %hhd]
>>>>>>> master

								3 unsigned char = [0 to 255 values values, Called by %hhu]

								4 signed short = [Called by %hd]

								5 short int = [Called by %hd]

								6 unsigned short = [Called by %hu]

								7 singed int = [Called by %d] 

								8 int = [Called by %d, Used for general integers(Character + general integer(Numbers, ''))]

<<<<<<< HEAD
<<<<<<< HEAD
								5 unsigned int = [Called by %u or %d]

								6 long double = [Called by %Lf]

								7 unsigned short = [Called by %hu]

								8 unsigned long = [Called by %lu]

=======
								5 unsigned int = [Called by %d]
=======
								9 unsigned int = [Called by %u]
>>>>>>> master

								10 signed long = [Called by %ld]

<<<<<<< HEAD
>>>>>>> c0f1f4aed30485d1af85c1453aad29a4a0789f50
						2 X x, y, z,...; x = ?; y = ?; ... = [defining(using xnumber.xnumber for floating like 31.0)]
=======
								11 long int = [Called by %ld]
>>>>>>> master

								12 unsigned long = [Called by %lu]

								13 signed long long = [Called by %lld]

								14 long long = [Called by %lld]

								15 float = [Called by %f, Used for decimal numbers(...)]

								16 double = [Called by %f, Used for more precise decimals(...)]

								17 long double = [Called by %Lf]

								18 unsigned long int = []

								19 unsigned short int = []

							2 Converting:

								0 To specific type:

									0 By expressions

										0 char to int = [Example = char s[x]; if (s[i] >= '0' && s[i] <= '9')]

										1 short to int

									1 By defining:

										0 int to char = [Example = int i; char s; i = s; s = i]

										1 float to int

										2 float to double

									2 By library:

										0 <math.h> = [sqrt((type) name)]

								1 To every type:

									0 (X)x = [x already have a type and we want to change that]


						2 X x, y, z,...; x = ?; y = ?; ... = [defining(using xnumber.xnumber for floating like 31.0)] 
							
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

			7 Boolean(Enumerations):

				0 enum name { No, Yes }; = [Defining No to 0 and Yes to 1 and ..., Example = enum Home { gpb148 = 20, Michell = 14, Jordan = 5, ... };]

			8 Bytes:

				9 9 = [Tab]

				10 10 = [Enter] 

				32 32 = [Space]

				33 33 = [!]

				34 34 = ["]

				35 35 = [#]

				36 36 = [$]

				37 37 = [%]

				38 38 = [&]

				39 39 = [']

				40 40 = [(]

				41 41 = [)]

				42 42 = [*]

				43 43 = [+]

				44 44 = [,]

				45 45 = [-]

				46 46 = [.]

				47 47 = [/]

				48 48 = [0]

				49 49 = [1]

				50 50 = [2]

				51 51 = [3] 

				52 52 = [4]

				53 53 = [5]

				54 54 = [6]

				55 55 = [7] 

				56 56 = [8]

				57 57 = [9]

				58 58 = [:]

				59 59 = [;]

				60 60 = [<]

				61 61 = [=]

				62 62 = [>]

				63 63 = [?]

				64 64 = [@]

				65 65 = [A]

				66 66 = [B]

				67 67 = [C] 

				68 68 = [D]

				69 69 = [E]

				70 70 = [F]

				71 71 = [G] 

				72 72 = [H]

				73 73 = [I]

				74 74 = [J]

				75 75 = [K] 

				76 76 = [L]

				77 77 = [M]

				78 78 = [N]

				79 79 = [O]

				80 80 = [P] 

				81 81 = [Q]

				82 82 = [R]

				83 83 = [S]

				84 84 = [T] 

				85 85 = [U]

				86 86 = [V]

				87 87 = [W]

				88 88 = [X] 

				89 89 = [Y]

				90 90 = [Z]

				91 91 = [[]

				92 92 = [\]

				93 93 = []]

				94 94 = [^]

				95 95 = [_]

				96 96 = [`]

				97 97 = [a]

				98 98 = [b] 

				99 99 = [c]

				100 100 = [d]

				101 101 = [e]

				102 102 = [f] 

				103 103 = [g]

				104 104 = [h]

				105 105 = [i]

				106 106 = [j] 

				107 107 = [k]

				108 108 = [l]

				109 109 = [m]

				110 110 = [n]

				111 111 = [o]

				112 112 = [p]

				113 113 = [q] 

				114 114 = [e]

				115 115 = [s]

				116 116 = [t]

				117 117 = [u] 

				118 118 = [v]

				119 119 = [w]

				120 120 = [x]

				121 121 = [y]

				122 122 = [z] 

				123 123 = [{]

				124 124 = [|]

				125 125 = [}]

				126 126 = [~]
			 
			9 Standard libraries:	

				0 #include x = [x = standard library like <stdio.h> for printf()]

				1 #include <stdio.h>:
	
					0 printf('x\n');     
						
					1 scanf('\n'); = [Reading input]

					2 EOF = [End Of File]

				2 #include <ctype.h>

				3 #include <string.h>:

					0 strlen(... if have) {x} = [String counter function]

				4 #include <math.h>:

					0 sqrt((type) name) = [Converting name's type to type]

				5 #include <stdlib.h>

				6 #include <assert.h>

				7 #include <stdarg.h>

				8 #include <setjmp.h>

				9 #include <signal.h>

				10 #include <time.h>

				11 #include <limits.h> 

				12 #include <float.h>
					
			10 Libraries:

				0
		3 Spaces"""
```