## Rotating Cube with Colors
This program is a simple OpenGL application that displays a rotating cube with colors. The cube rotates around three axes, x, y, and z, and the colors of the cube are set to red, green, blue, and yellow.

### Requirements
This program requires the OpenGL Utility Toolkit (GLUT) library to be installed on your system. You can download GLUT from the OpenGL website at https://www.opengl.org/resources/libraries/glut/.

### Usage
To run the program, compile the code with a C++ compiler and link it with the GLUT library. On a Unix-based system, you can use the following command:

g++ -o cube cube.cpp -lglut -lGLU -lGL

Once the program is compiled, you can run it with the following command:

./cube
### Controls

The cube rotates automatically around three axes, but you can use the following controls to interact with the program:

'q' or 'Q' : Quit the program
### Notes

The program uses double buffering to reduce flicker and enable smooth animation. 
The 'idle' function is called repeatedly to update the angles of rotation and redraw the scene. 
The 'display' function is called each time the scene is redrawn. 
The 'cube' function draws the cube using 'glBegin' and 'glEnd' functions, with 'glVertex3f' to specify the vertices and 'glColor3fv' to set the colors. 
The 'glRotatef' and 'glTranslatef' functions are used to rotate and translate the cube. 
The 'gluPerspective' function is used to set up the perspective projection. Finally, 
the 'glutInitDisplayMode' function is used to enable depth testing, which ensures that objects closer to the viewer are displayed in front of objects farther away.
