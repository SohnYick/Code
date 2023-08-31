appFiles = GUI.o App.o Manager.o Employee.o Boss.o

App: $(appFiles)	
	g++ $(appFiles) -o App.exe
	app.exe

GUI.o: GUI.cpp GUI.h
	g++ -c GUI.cpp

App.o: App.cpp
	g++ -c App.cpp

Manager.o: Manager.cpp Manager.h
	g++ -c Manager.cpp

Employee.o: Employee.cpp Employee.h
	g++ -c Employee.cpp

Boss.o: Boss.cpp Boss.h
	g++ -c Boss.cpp	

clean:
	rm -f *.o *.exe
