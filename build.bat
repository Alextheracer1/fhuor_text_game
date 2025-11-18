@echo off
cd build && cmake -G "MinGW Makefiles" .. --fresh && cmake --build . && fhuor_text_game.exe