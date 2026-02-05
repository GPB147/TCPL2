```python
"C": "Page 69"

	"0 C(Short)" = 
	{

		"""0 Chose standard libraries we need

		1 Chose types we need

		2 Chose byte and bit and value and meaning we need

		3 Coding

		4 Runing program or programs by cc main.c name.c name.o name.c ... command"""	

	}
		
	"1 keys":

		"""0 Numbers = [..., 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, ...]
		
		1 Symboles:

			0 Normal = \ () {} ' , <> # ; \\ /**/ // = != >= <= * + - / \" += -= *= &= ^= %= /= >>= <<= ''' ++ -- == || && ** _ % ! -> """

			"""1 Bit manipulation: 

				0 ValueNumber0 & ValueNumber1 = [If rightest number of bit of both values are 1 so result is 1 and for lefter than this +1]

				1 ValueNumber0 | ValueNumber1 = [Change 0 bit number in every of both values to each 1 they have in same priority]

				2 ValueNumber0 ^ ValueNumber1 = [Bit number in result is 1 if in same priority both have different numbers and for other result is 0]

				3 ValueNumber0 << TimesNumber = [Move all bits of value TimesNumber step left]

				4 ValueNumber0 >> TimesNumber = [Move all bits of value TimesNumber step right]

				5 ValueNumber0~ = [Change all 0 bits to 1 and all 1 bits to 0]

				6 ValueNumber0 <<= TimesNumber = [ValueNumber = ValueNumber << TimesNumber]

				7 ValueNumber >>= TimesNumber = [ValueNumber = ValueNumber >> TimesNumber]"""

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

						4 %c, x = [Single character]

						5 %s, x = [String]

						5 %s, x = [Character string]

						4 ("%c", value) = [Single character]

						5 ("%s", value) = [String]

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

							1 Using:


								0 void = [No memory, Used for no data]

								1 char = [1 byte %s or %c or %d, Used for characters(String, "") / raw bytes]

								4 double = [8 bytes, Called by %f, Used for more precise decimals(...)]

								2 signed char = [-128 to 127, Called by %hhd]

								3 unsigned char = [0 to 255 values values, Called by %hhu]

								4 signed short = [Called by %hd]

								5 short int = [Called by %hd]

								6 unsigned short = [Called by %hu]

								7 singed int = [Called by %d] 

								8 int = [Called by %d, Used for general integers(Character + general integer(Numbers, ''))]

								5 unsigned int = [Called by %u or %d]

								6 long double = [Called by %Lf]

								7 unsigned short = [Called by %hu]

								8 unsigned long = [Called by %lu]

								9 unsigned int = [Called by %u]

								10 signed long = [Called by %ld]

								11 long int = [Called by %ld]

								12 unsigned long = [Called by %lu]

								13 signed long long = [Called by %lld]

								14 long long = [Called by %lld]

								15 float = [Called by %f, Used for decimal numbers(...)]

								16 double = [Called by %f, Used for more precise decimals(...)]

								17 long double = [Called by %Lf]

								18 unsigned long int = []

								19 unsigned short int = []

								20 long long unsigned int = []

							2 Converting:

								0 To specific type:

									0 By expressions

										0 Normal:

											0 char to int = [Example = char s[x]; if (s[i] >= '0' && s[i] <= '9')]

											1 short to int

										1 By library:

											0 <math.h>:

												0 sqrt((type) name)

											1 <ctype.h>:

												0 atot(... if have) { x }

												1 itoa(... if have) { x }

												2 atof(... if have_ { x }

									1 By defining:

										0 int to char = [Example = int i; char s; i = s; s = i]

										1 float to int

										2 float to double

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

				0 if (x) {y}

				1 else {y}

				2 else if (x) {y}

				3 switch (x) { case y: { z } default: { w } } = [Switching x to w by default and to z just if y happen, break working for iterations and switch in cases]

			4 iterations:

				0 while (x <= >= == y) {xxasewe} = [Working with boolean(True&False)]

				1 for (it is; while it is; do this) {althogh do this is too};

				2 do { x } while (y);

				3 goto x; = [Used few times]

				4 break; = [Working for iterations and switch in case]

				5 continue;
				
			5 Input&Output:
			
				0 getchar() = [input]

				1 putchar(x) = [output]

			6 Array:

				0 type name[number] = [Defining this in first of program and we have number-1 array]

				0 name[Number] = z

			7 Boolean(Enumerations):

				0 enum name { No, Yes }; = [Defining No to 0 and Yes to 1 and ..., Example = enum Home { gpb148 = 20, Michell = 14, Jordan = 5, ... };]

				1 Expression ? True : False; = [If expression is true do left one(True) thing and if is false do right(False) thing]

			8 1Bytes=8bits(0 and 1)=256Values(0-255):

				0 0 = [\0, Nothing, None, Not exist] = 00000000

				1 1 = [Ctrl + A] = 00000001

				2 2 = [Ctrl + B] = 00000010

				3 3 = [Ctrl + C] = 00000011

				4 4 = [Ctrl + D] = 00000100

				5 5 = [Ctrl + E] = 00000101

				6 6 = [Ctrl + G] = 00000110

				7 7 = [Ctrl + I] = 00000111

				8 8 = [Ctrl + J] = 00001000

				9 9 = [Tab] = 00001001

				10 10 = [Enter] = 00001010

				11 11 = [Ctrl + \v] = 00001011

				12 12 = [Ctrl + L] = 00001100

				13 13 = [Ctrl + M] = 00001101

				14 14 = [Ctrl + N] = 00001110

				15 15 = [Ctrl + O] = 00001111

				16 16 = [Ctrl + P] = 00010000

				17 17 = [Ctrl + Q] = 00010001

				18 18 = [Ctrl + R] = 00010010

				19 19 = [Ctrl + S] = 00010011

				20 20 = [Ctrl + T] = 00010100

				21 21 = [Ctrl + U] = 00010101

				22 22 = [Ctrl + V] = 00010110

				23 23 = [Ctrl + W or Ctrl + Backspace] = 00010111

				24 24 = [Ctrl + X] = 00011000

				25 25 = [Ctrl + Y] = 00011001

				26 26 = [Ctrl + Z] = 00011010

				27 27 = [ESC] = 00011011

				28 28 = [Ctrl + \] = 00011100

				29 29 = [Ctrl + ]] = 00011101

				30 30 = [Haven't] = 00011110

				31 31 = [Ctrl + /] = 00011111

				32 32 = [Space] = 00100000

				33 33 = [!] = 00100001

				34 34 = ["] = 00100010

				35 35 = [#] = 00100011

				36 36 = [$] = 00100100

				37 37 = [%] = 00100101

				38 38 = [&] = 00100110

				39 39 = ['] = 00100111

				40 40 = [(] = 00101000

				41 41 = [)] = 00101001

				42 42 = [*] = 00101010

				43 43 = [+] = 00101011

				44 44 = [,] = 00101100

				45 45 = [-] = 00101101

				46 46 = [.] = 00101110

				47 47 = [/] = 00101111

				48 48 = [0] = 00110000

				49 49 = [1] = 00110001

				50 50 = [2] = 00110010

				51 51 = [3] = 00110011

				52 52 = [4] = 00110100

				53 53 = [5] = 00110101

				54 54 = [6] = 00110110

				55 55 = [7] = 00110111

				56 56 = [8] = 00111000

				57 57 = [9] = 00111001

				58 58 = [:] = 00111010

				59 59 = [;] = 00111011

				60 60 = [<] = 00111100

				61 61 = [=] = 00111101

				62 62 = [>] = 00111110

				63 63 = [?] = 00111111

				64 64 = [@] = 01000000

				65 65 = [A] = 01000001

				66 66 = [B] = 01000010

				67 67 = [C] = 01000011

				68 68 = [D] = 01000100

				69 69 = [E] = 01000101

				70 70 = [F] = 01000110

				71 71 = [G] = 01000111

				72 72 = [H] = 01001000

				73 73 = [I] = 01001001

				74 74 = [J] = 01001010

				75 75 = [K] = 01001011

				76 76 = [L] = 01001100

				77 77 = [M] = 01001101

				78 78 = [N] = 01001110

				79 79 = [O] = 01001111

				80 80 = [P] = 01010000

				81 81 = [Q] = 01010001

				82 82 = [R] = 01010010

				83 83 = [S] = 01010011

				84 84 = [T] = 01010100

				85 85 = [U] = 01010101

				86 86 = [V] = 01010110

				87 87 = [W] = 01010111

				88 88 = [X] = 01011000

				89 89 = [Y] = 01011001

				90 90 = [Z] = 01011010

				91 91 = [[] = 01011011

				92 92 = [\] = 01011100

				93 93 = []] = 01011101

				94 94 = [^] = 01011110

				95 95 = [_] = 01011111

				96 96 = [`] = 01100000

				97 97 = [a] = 01100001

				98 98 = [b] = 01100010

				99 99 = [c] = 01100011

				100 100 = [d] = 01100100

				101 101 = [e] = 01100101

				102 102 = [f] = 01100110

				103 103 = [g] = 01100111

				104 104 = [h] = 01101000

				105 105 = [i] = 01101001

				106 106 = [j] = 01101010

				107 107 = [k] = 01101011

				108 108 = [l] = 01101100

				109 109 = [m] = 01101101

				110 110 = [n] = 01101110

				111 111 = [o] = 01101111

				112 112 = [p] = 01110000

				113 113 = [q] = 01110001

				114 114 = [e] = 01110010

				115 115 = [s] = 01110011

				116 116 = [t] = 01110100

				117 117 = [u] = 01110101

				118 118 = [v] = 01110110

				119 119 = [w] = 01110111

				120 120 = [x] = 01111000

				121 121 = [y] = 01111001

				122 122 = [z] = 01111010

				123 123 = [{] = 01111011

				124 124 = [|] = 01111100

				125 125 = [}] = 01111101

				126 126 = [~] = 01111110

				127 127 = [DEL] = 01111111

				128 128-255 = [Haven't] = 10000000-11111111
			 
			9 Standard libraries:	

				0 #include x = [x = standard library like <stdio.h> for printf()]

				1 #include <stdio.h>:
	
					0 printf('x\n');     
						
					1 scanf('\n'); = [Reading input]

					2 EOF = [End Of File]

				2 #include <ctype.h>:

					0 isspace(x) = [If x value number is space like \t or \n or ...]

					1 isdigit(x) = [If x value number is number llike 0 or 1 or 2 or ...]

					2 atoi(.. if have) { x } = [Converting string to integer]

					3 itoa(... if have) { x } [Converting integer to string]

				3 #include <string.h>:

					0 strlen(... if have) { x } [String counter function]

				4 #include <math.h>:

					0 sqrt((type) name) = [Converting name's type to type]

				5 #include <stdlib.h>:

					0 atof(... if have_ { x } = [Converting string to double]

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