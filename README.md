# fhuor_text_game
Run Code with build.bat
- .\build.bat

In CMake:
# Step 1: Create build directory (once)
cd "C:\Users\ThinkPad T14s\Documents\VS Code\fhuor_text_game"
mkdir build
cd build

# Step 2: Configure project (Windows with MinGW)
cmake -G "MinGW Makefiles" ..

# Step 3: Build project
cmake --build .

# Step 4: Run executable
.\fhuor_text_game.exe

Basic Idea:
- text based interface, where the player can make choices (just like in the original game)
- certain pictures of the girls should pop up when player makes certain decisions 
(i.e. buy ice cream for minji instead of mal-sook, picture of minji eating ice cream could pop up)
- sus but not +18 pictures are allowed to gain more upvotes on reddit as soon as we publish the game

Update Clemens (6.11.2025)
- added basic class implementation for the player, the waifu and eun_bi
- added some debatable properties like score, loving_score, age, player_name ...
- added some functions like speciality, increase_score, greeting ...
- seperated classes into hpp and cpp files, so main.cpp stays logic free most of the time
- added some pictures and study materials
