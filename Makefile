

all: main.cpp Abr.cpp
	g++ -O0 -std=gnu++0x *.cpp -o blorf

#main: main.cpp Abr.h
#	g++ -O0 -std=gnu++0x main.cpp -o blorf

#Abr: Abr.cpp Abr.h
#	g++ -O0 -std=gnu++0x Abr.cpp -o blorf

d_all: main.cpp Abr.cpp
	g++ -g -O0 -std=gnu++0x *.cpp -o blorf

#d_main: main.cpp 
#	g++ -g -O0 -std=gnu++0x main.cpp -o blorf

#d_Abr: Abr.cpp Abr.h
#	g++ -g -O0 -std=gnu++0x Abr.cpp -o blorf
