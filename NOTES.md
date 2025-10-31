Abstraction over LLL
GNU Compiler Collection -- GCC

GCC for C 
G++ / Clang for C++

C toolkit could potentially encompass 

C++ 
Objective C
Java 
Rust
Swift
C#

Using C for type binding with Python to use Cython is a good TOOL

Instructions always end ; but not BODIES of instruction like main function {}

C Preprocessors
Process before compilation from SC begins

Multiple directives like
Macros, File Inclusion, Conditional Comilation, #undef, #pragma etc

Define MORE code by less CODE

SC -> Preprocessor ->(.i) Compilation -> (.s) Assembler -> (.o) Linker 
final executable


#define MACROS 
#include // file inclusion PPD
#pragma // for pragmatic programming
Provides specific instructions to the compiler to control its behaviour. 
It is used to disable warnings, set alignment, etc.

C needs at least ONE function which is MAIN()

Variable -> Name of Memo Location
data_type variable_name = value // static typing

Number - INT - 4 bytes - 32 Bits of Binary
2^32-1, 1 digit for signature

int m_int
char m_char - single character - 1 byte
float m_float - 4 byte same as INT but available for FLOATING precision
max of 7 signigicant 

modification to based data types using 

unsigned = reserved keyword
unsigned int p_int;
long bigger_int;
long long bigger_int;
unsigned long long int big_pos_int;
unsigned char pos_char; -- stored numbers associated with character (smaller set ASCII)
double - 8 bytes
long double - 16 bytes
short int sm_int;

string passes

%c - character
%d - numbers
%s - strings

languages have ABI - application binary interface
which gives specific lengths to fundamental datatype

for the same blocks of memory
the core registrers and operations of CPU are different

The compiler keeps a “type map”

C is weakly typed as it allows type punning at COMPILe time

Type Coercion - C Type Casting

char < short < int < long < float < double.

string manipulation for printf ==> %[flags][width][.precision][length]specifier

unary operators are simulation effective

AND, OR , XOR , NOT

Left Shift , Right Shift

Left n - Multiple 2^n
Right n - Divide 2^n
Bitwise -> Logical &&

Left and Right Shift Operators in C 
multiplication and Division by powers of 2 without arithmetic

function is a named block that does something 

function signagure prototype
we can define the later


anything defined with local namespace is UNDECLARED for the other stack bit

to manipulate registers we use refrence address not name to avoid 
COPIES creation

dataType *variableName;

overload any VAR with & to refer its address

* -> works as dereferencing the pointer
& -> works as referening the address