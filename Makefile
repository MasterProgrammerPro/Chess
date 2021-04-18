CXX=g++
CPPFLAGS=-Wall -Werror
CXXFLAGS=-g

EXEC=chess
SRCS=$(wildcard *.cpp)
OBJS=$(SRCS:.cpp=.o)

$(EXEC) : $(OBJS)
	$(CXX) $^ -o $@ $(CXXFLAGS)

$(OBJ_PATH)%.o : %.cpp
	$(CXX) -c $^ -o $@ $(CPPFLAGS)

clean :
	/bin/rm -f $(EXEC)
	/bin/rm -f *.o