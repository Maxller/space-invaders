bin/test : src/tui_test.cpp
	g++ src/tui_test.cpp -obin/test -std=c++2a 

ejecutar : bin/test
	./bin/test
