Install OpenGL by getting X11, GLUT, GLFW and SDL. 
Can be found with this link: https://www.prinmath.com/csci5229/misc/install.html
The SOIL.h file has been provided.
So far our group could only get this run on linux.
This code was tested using Visual Studio Code.

Run this line to compile the code g++ -Wall -o tic TacTacToe.cpp board.cpp -lglut -lGLU -lGL -lm -lSOIL
Then run ./tic to start the game.
A window will pop out prompting the user where they would like to make their first move.
The user can just click one spot of the 3x3 grid. Then the AI will go next.
Repeat until someone has won a game of TicTacToe. Get 3 in a row
Once the game is over user can click on TicTacTow window to replay the game or
they can click on the x button to close out of the game.

*if player would like to play against friend they go to line 20 and change true to false in
bool againstComputer