echo off 
del lv42.exe

echo _
gcc -Wall -Wextra -Werror  -std=c11 -c *.c mainF.c 
gcc -Wall -Wextra -Werror  -std=c11 -o lv42 *.o
del *.o
lv42.exe
pause