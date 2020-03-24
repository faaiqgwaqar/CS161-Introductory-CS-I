CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g

LDFLAGS = -lboost_date_time

OBJS = Team.o Player.o

SRCS = Main.cpp Team.cpp Player.cpp

HEADERS = Team.hpp Player.hpp

bball: $(SRCS) $(HEADERS)
	 $(CXX) $(CXXFLAGS) $(SRCS) -o bball

