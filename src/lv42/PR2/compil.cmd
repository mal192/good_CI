echo off 
del lv42.exe
echo error -Werror
echo _
gcc -Wall -Wextra  -std=c11 funcV.c mainF.c -o lv42 
lv42.exe
pause