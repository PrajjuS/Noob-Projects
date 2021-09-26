CC = gcc
CFLAGS = -c -g -Wall
RM = rm
RMFLAGS = -rf

all: Projects

Projects: Project1 Project2

Project1: First-Project/PrajjuS.cpp
	$(CC) $(CFLAGS) First-Project/PrajjuS.cpp

Project2: Login-Registration/login-register.cpp
	$(CC) $(CFLAGS) Login-Registration/login-register.cpp

.PHONY: clean
clean:
	$(RM) $(RMFLAGS) *.o

