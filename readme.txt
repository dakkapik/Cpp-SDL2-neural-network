compiling template
g++ 01_hello_SDL.cpp -IC:\mingw_dev_lib\include\SDL2 -LC:\mingw_dev_lib\lib -w -Wl,-subsystem,windows -lmingw32 -lSDL2main -lSDL2 -o 01_hello_SDL


compiling for game
g++ main.cpp Game.h game.cpp icon.o -IC:\mingw_dev_lib\SDL\include\SDL2 -LC:\mingw_dev_lib\SDL\lib -IC:\mingw_dev_lib\SDL_image\include\SDL2 -LC:\mingw_dev_lib\SDL_image\lib -w -Wl,-subsystem,windows -lmingw32 -lSDL2main -lSDL2 -lSDL2_image -o DakkaGameEng


compiling for dev
g++ main.cpp Game.h game.cpp icon.o -IC:\mingw_dev_lib\SDL\include\SDL2 -LC:\mingw_dev_lib\SDL\lib -IC:\mingw_dev_lib\SDL_image\include\SDL2 -LC:\mingw_dev_lib\SDL_image\lib -w -lmingw32 -lSDL2main -lSDL2 -lSDL2_image -o DakkaGameEng


transfor .rc to .o
windres -i icon.rc -o icon.o
