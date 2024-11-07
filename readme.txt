--compiling template--
g++ 01_hello_SDL.cpp -IC:\mingw_dev_lib\include\SDL2 -LC:\mingw_dev_lib\lib -w -Wl,-subsystem,windows -lmingw32 -lSDL2main -lSDL2 -o 01_hello_SDL

--compiling for game--
g++ main.cpp Classes\Game.h Classes\game.cpp icon.o -IC:\mingw_dev_lib\SDL\include\SDL2 -LC:\mingw_dev_lib\SDL\lib -IC:\mingw_dev_lib\SDL_image\include\SDL2 -LC:\mingw_dev_lib\SDL_image\lib -w -Wl,-subsystem,windows -lmingw32 -lSDL2main -lSDL2 -lSDL2_image -o DakkaGameEng


--compiling for dev--
g++ main.cpp Classes\Game.h Classes\Game.cpp Classes\Layer.h Classes\Layer.cpp icon.o -IC:\mingw_dev_lib\SDL\include\SDL2 -LC:\mingw_dev_lib\SDL\lib -IC:\mingw_dev_lib\SDL_image\include\SDL2 -LC:\mingw_dev_lib\SDL_image\lib -w -lmingw32 -lSDL2main -lSDL2 -lSDL2_image -o DakkaGameEng


--compiling for dev and play--
g++ main.cpp Classes\Point.h Classes\Point.cpp Classes\Game.h Classes\Game.cpp Classes\Layer.h Classes\Layer.cpp icon.o -IC:\mingw_dev_lib\SDL\include\SDL2 -LC:\mingw_dev_lib\SDL\lib -IC:\mingw_dev_lib\SDL_image\include\SDL2 -LC:\mingw_dev_lib\SDL_image\lib -w -lmingw32 -lSDL2main -lSDL2 -lSDL2_image -o DakkaGameEng && .\DakkaGameEng


--compile no layer lib--
g++ main.cpp Classes\Game.h Classes\Game.cpp icon.o -IC:\mingw_dev_lib\SDL\include\SDL2 -LC:\mingw_dev_lib\SDL\lib -IC:\mingw_dev_lib\SDL_image\include\SDL2 -LC:\mingw_dev_lib\SDL_image\lib -w -lmingw32 -lSDL2main -lSDL2 -lSDL2_image -o DakkaGameEng


--transfor .rc to .o--
windres -i icon.rc -o icon.o

###################################################################
--EXPLAIN--
**USING G++ COMPILE THIS**
g++

**ALL CUSTOM FILES CREATED WITH DIRECTORIES**
main.cpp Classes\Game.h Classes\game.cpp icon.o

**INCLUDE AND LIBRARY CALLOUT**
-IC:\mingw_dev_lib\SDL\include\SDL2 -LC:\mingw_dev_lib\SDL\lib 
-IC:\mingw_dev_lib\SDL_image\include\SDL2-LC:\mingw_dev_lib\SDL_image\lib

**UNKOWN FLAGS -> THIS CAN ACTIVATE/DEACTIVATE THE COMMANDLINE**
-w -Wl,-subsystem,windows 

**CALLOUT TO EXTENSION LIB**
-lmingw32 -lSDL2main -lSDL2 -lSDL2_image

**NAME THE .EXE FILE**
-o DakkaGameEng