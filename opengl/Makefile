CC=g++
BIN_DIR=bin
SRC_DIR=src
SRCS=$(wildcard $(SRC_DIR)/*.cpp)
LIB=lib/glad.c
OBJS=$(SRCS:%.cpp=%.o)
CPPFLAGS=-Wall -D_DEFAULT_SOURCE -std=c++20 -lGL -lglfw -lpthread -O2 -I./include -I/usr/include
MAIN=$(BIN_DIR)/main

all: $(MAIN)

$(MAIN): $(OBJS)
	@mkdir -p ./$(BIN_DIR)
	$(CC) $(CPPFLAGS) $(OBJS) $(LIB) -o $(MAIN)

clean:
	rm -rf $(MAIN) $(OBJS) $(BIN_DIR)
	find . -name "*~" -exec rm {} \;
	find . -name "*.o" -exec rm {} \;

.PHONY: clean
