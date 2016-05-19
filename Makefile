# cs335 Lab 8
# to compile your project, type make and press enter

all: lab8

hw1: lab8.cpp
	g++ lab8.cpp -I/usr/X11R6/include ->/usr/X11R6/lib -Wall -olab6 -lX11 -lGL -lGLU -lm

clean:
	rm -f lab8
	rm -f *.o

