colo wildcharm
set ai rnu shcf=-ic et shiftwidth=4 bg=dark ts=4 acd ar cul
sy on   |   no ; :
set mp=g++\ -Wall\ -Wconversion\ -Wshadow\ -Wfatal-errors\ -g\ -std=c++17\ -fsanitize=undefined,address\ %:r.cpp
