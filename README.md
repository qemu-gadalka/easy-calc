# easy-calc

for compile use MinGW (i used wsl)

Commands:
X64: **i686-w64-mingw32-gcc -m32 -static -s -o calc.exe calc.c -luser32 -lgdi32 -lkernel32**

X86_64: **x86_64-w64-mingw32-gcc -static -s -o calc.exe calc.c -luser32 -lgdi32 -lkernel32**

GCC: **gcc -o calc calc.c**
