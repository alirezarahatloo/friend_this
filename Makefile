all:MYCLASS
	@g++ -o main main.cpp Myclass.o
	@.\main
	@del *.o
MYCLASS:
	@g++ -c Myclass.cpp
