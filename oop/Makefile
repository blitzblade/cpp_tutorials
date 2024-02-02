app: user.o teacher.o positioning.o m.o
	g++  user.o teacher.o positioning.o m.o -o app -std=c++11

user.o: user.cpp
	g++ -c user.cpp -std=c++11

teacher.o: teacher.cpp
	g++ -c teacher.cpp -std=c++11

positioning.o: positioning.cpp
	g++ -c positioning.cpp -std=c++11

m.o: main.cpp
	g++ -c main.cpp -o m.o -std=c++11

clean:
	rm *.o app