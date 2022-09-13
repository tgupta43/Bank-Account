#
#
CC=g++
#
#CFLAGS = -c -Wall -I/usr/include/mysql 
#LFLAGS = -L/usr/lib/mysql -lmysqlclient
CFLAGS = -c -Wall 
LFLAGS = 


all: Bank

Bank: Bank_main.o Bank.o Account.o printMeFirst.o
	$(CC) Bank.o Account.o Bank_main.o printMeFirst.o -o Bank_main $(LFLAGS)

Bank_main.o: Bank_main.cpp 
	$(CC) $(CFLAGS) Bank_main.cpp

Account.o: Account.cpp
	$(CC) $(CFLAGS) Account.cpp

Bank.o: Bank.cpp
	$(CC) $(CFLAGS) Bank.cpp

printMeFirst.o: printMeFirst.cpp
	$(CC) $(CFLAGS) printMeFirst.cpp

clean:
	rm *.o Bank

run:
	./Bank 5
