App: Manager.o App.o |	
	g++ Manager.o App.o -o App.exe
	app.exe

Manager.o: Manager.cpp Manager.h
	g++ -c Manager.cpp

App.o: App.cpp
	g++ -c App.cpp


clean:
	rm -f *.o *.exe
