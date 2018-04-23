graphic: graphic.cpp
	g++ --std=c++11 $< -o $@ -lsfml-graphics -lsfml-window -lsfml-system
