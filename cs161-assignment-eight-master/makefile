CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g

LDFLAGS = -lboost_date_time

OBJS = Point.o LineSegment.o

SRCS = Point.cpp LineSegment.cpp Main.cpp

HEADERS = Point.hpp LineSegment.hpp

nine: $(SRCS) $(HEADERS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o nine


