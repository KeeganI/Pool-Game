# Pool-Game
This is my first project with OpenGL in c++. It is a game of pool, with a work in progress physics engine. This was a group project for my computer graphics course.

Controls

Press “r” key to reset the game.
Press “esc” key to close the game.
Move mouse to set the angle you wish to move the ball.
Left click the mouse in order to push the ball forward. 

New Algorithms

Ball Placement
Collision Detection
Ball Movement

The view for the game is a green rectangle with a brown border and 6 pockets. This represents the pool table, the green surface for the balls and the brown wooded borders. 
There are black circles around the table which represent the pockets to sink the pool balls into. 
The coloured balls setup in a triangle on the pool table are the balls that the user must sink into the pockets.
The white ball is the ball the user hits to sink the other coloured balls.
The line that follows is your mouse on the white pall is the pool cue. This is used to aim and fire the ball. The cue works as a way to push the ball. 

When all the balls are put into the holes the user wins the game and the game is reset.
If the black ball is put into a hole before the other coloured balls the user has lost the game and the game is reset.
If the white ball is put into a hole the white ball is put back to its original position. 
We created an algorithm to tell what part of the ball is being hit, so the angle the ball moves is according to where its touched by the pool que. This also works with balls colliding, when a ball collides with another ball the balls are sent in the direction they are touched. This also includes when a ball hits the brown wall. The ball is show in the opposite direction of where it is touched by the wall. 
