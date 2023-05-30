# 3D Maze
### Creating a 3D maze with raycasting

![textured_1](https://github.com/BiniyamMelaku2/maze/blob/main/screenshots/textured_1.png)


-----

### Resources
- [SDL2 API](https://wiki.libsdl.org/CategoryAPI)
- [LazyFoo Beginning Game Programming](http://lazyfoo.net/tutorials/SDL/index.php)
- [Ray-Casting Tutorial For Game Development And Other Purposes by F. Permadi](http://permadi.com/1996/05/ray-casting-tutorial-table-of-contents/)
- [LodeV Raycasting Tutorial](http://lodev.org/cgtutor/raycasting.html)
- [Game Engine Black Book](https://www.amazon.com/Game-Engine-Black-Book-Wolfenstein/dp/1539692876)


### How to Compile and Run

- Compile with `gcc 4.8.4` with the following flags:
    ``gcc -O2 -g -Wall -Werror -Wextra -pedantic -Isrc/headers *.c -lSDL2 -lSDL2_image -lm -o maze `sdl2-config --cflags --libs` `` OR `make -f Makefile`
- Run the maze: `./maze` or `./maze maps/<map_name>`
- Disable textures: `./maze no_tex` or `./maze maps/<map_name> no_tex`

-----


#### How to move
- `W` : move forward
- `S` : move backward
- `A` : rotate camera left
- `D` : rotate camera right
- `Q` : strafe left
- `E` : strafe right
- `F` : toggle fullscreen
- `ESC` : quit


#### Maps
The maps are defined in 2D arrays in text files, which are parsed when passed as an argument to the maze executable. `0` represents open space, all other integers are walls.


# Tasks
## 0. Walls !
In this first part, you’ll have to:

* Create a window with SDL2
* Use raycasting to draw walls on your window !

## 1. Orientation
In this part, you must draw a different color depending on the orientation of the walls.

* You must at least draw walls facing NORTH and SOUTH in a different color from walls facing EAST and WEST.

## 2. Rotation
You must provide a way to rotate the camera during the execution.

* For example, you can rotate the camera when the left,right arrows are pressed on the keyboard. Or you can rotate the camera when the mouse moves, just like a FPS game !

## 3. Move
You must provide a way to move the camera during the execution.

* For example, you can move the camera when the w,a,s,d keys are pressed on the keyboard

## 4. Ouch !
In this part, you must handle the collisions of the player (yes, let’s call the camera player now, it’s getting serious) with the walls.

* The player must not be able to enter walls
* You can make the player slide on the walls instead of just stop it.

## 5. Parser
In this part you must implement a parser to get the map from a file.

* You are free to define the standards of your map (The character for a wall, the character for nothing, the extension of the file if you want, …)
* Your program will need a parameter to run which will be the path to the map file

## 6. Draw the map
In this part, you must draw the map on the window.

* You’re free to draw the map where you want, with the color you want, …
* You must provide a way to enable/disable it during the execution
* Include the player’s line of sight in the map

   <img src="https://github.com/BiniyamMelaku2/maze/blob/main/screenshots/mazeproject.gif" border="0">
