bin/test : src/tui_test.cpp
	g++ src/tui_test.cpp -obin/test -std=c++2a  -lftxui-component -lftxui-screen -lftxui-dom

runTest : bin/test
	./bin/test


bin/space : src/main.cpp
	g++ src/main.cpp -obin/space -std=c++2a  -Iinclude -lftxui-component -lftxui-screen -lftxui-dom 

run : bin/space
	./bin/space

bin/ventana : src/ventana.cpp
	g++ src/ventana.cpp -obin/ventana -std=c++2a  -Iinclude -lftxui-component -lftxui-screen -lftxui-dom 

runVentana : bin/ventana
	./bin/ventana