colo wildcharm
set ai rnu shcf=-ic et shiftwidth=4 ts=4 bg=dark acd ar cul ttm=100
sy on   |   no ; :

set mp=g++\ -Wall\ -Wconversion\ -Wshadow\ -Wfatal-errors\ -DLOCAL\ -g\ -std=c++20\ -fsanitize=undefined,address\ %:r.cpp
