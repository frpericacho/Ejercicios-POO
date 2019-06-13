CXX = clang++
STD = c++17
CXXFLAGS = -std=${STD} -g -Wall -pedantic -Wextra
CPPFLAGS = -I.
SRC = ciudad.cpp cliente.cpp confirmada.cpp hotel.cpp presupuesto.cpp reserva.cpp viaje.cpp main.cpp

RMV = rm -f
OBJ := $(SRC:.cpp=.o)
EXE = main.out

all: ${EXE}

run: ${EXE}
	./$<

${EXE}: ${OBJ}
	$(CXX) $(CXXFLAGS) $^ -o $@

$(OBJ): $(SRC)

clean: 
	$(RMV) *.o