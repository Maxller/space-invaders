bin/test : src/tui_test.cpp
	g++ src/tui_test.cpp -obin/test -std=c++2a  -lftxui-component -lftxui-screen -lftxui-dom

runTest : bin/test
	./bin/test


bin/space : src/main.cpp
	g++ src/main.cpp -obin/space -std=c++2a  -lftxui-component -lftxui-screen -lftxui-dom

run : bin/space
	./bin/space