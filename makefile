bin/test : src/tui_test.cpp
	g++ src/tui_test.cpp -obin/test -std=c++2a  -lftxui-component -lftxui-screen -lftxui-dom

ejecutar : bin/test
	./bin/test
