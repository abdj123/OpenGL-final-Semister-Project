#include <GL/glut.h>

GLfloat angle1 = 0.0; // angle of rotation around x-axis
GLfloat angle2 = 0.0; // angle of rotation around y-axis
GLfloat angle3 = 0.0; // angle of rotation around z-axis
GLfloat colors[][3] = { {1.0, 0.0, 0.0}, {0.0, 1.0, 0.0}, {0.0, 0.0, 1.0}, {1.0, 1.0, 0.0} }; // red, green, blue, yellow colors

void cube(void) {
  glRotatef(angle1, 1.0, 0.0, 0.0); // rotate cube around x-axis
  glRotatef(angle2, 0.0, 1.0, 0.0); // rotate cube around y-axis
  glRotatef(angle3, 0.0, 0.0, 1.0); // rotate cube around z-axis
  glBegin(GL_QUADS); // draw the cube
  glColor3fv(colors[0]); // set red color
  glVertex3f(-1.0, -1.0,  1.0);
  glVertex3f( 1.0, -1.0,  1.0);
  glVertex3f( 1.0,  1.0,  1.0);
  glVertex3f(-1.0,  1.0,  1.0);
  glColor3fv(colors[1]); // set green color
  glVertex3f(-1.0, -1.0, -1.0);
  glVertex3f(-1.0,  1.0, -1.0);
  glVertex3f( 1.0,  1.0, -1.0);
  glVertex3f( 1.0, -1.0, -1.0);
  glColor3fv(colors[2]); // set blue color
  glVertex3f(-1.0,  1.0, -1.0);
  glVertex3f(-1.0,  1.0,  1.0);
  glVertex3f( 1.0,  1.0,  1.0);
  glVertex3f( 1.0,  1.0, -1.0);
  glColor3fv(colors[3]); // set yellow color
  glVertex3f(-1.0, -1.0, -1.0);
  glVertex3f( 1.0, -1.0, -1.0);
  glVertex3f( 1.0, -1.0,  1.0);
  glVertex3f(-1.0, -1.0,  1.0);
  glEnd();
}

void display(void) {
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  glLoadIdentity();
  gluPerspective(60.0, 1.0, 1.0, 100.0); // set perspective projection
  glTranslatef(0.0, 0.0, -7.0); // move the cube back a bit
  cube();
  glutSwapBuffers(); // double buffer
}

void idle() {
  angle1 += 0.1; // increase the angle of rotation around x-axis
 angle2 += 0.05; // increase the angle of rotation around y-axis
angle3 += 0.03; // increase the angle of rotation around z-axis
glutPostRedisplay(); // redraw the scene
}

int main(int argc, char** argv) {
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
glutInitWindowSize(600, 600);
glutCreateWindow("Rotating Cube with Colors");
glEnable(GL_DEPTH_TEST); // enable depth testing
glClearColor(0.0, 0.0, 0.0, 0.0); // set background color to black
glutDisplayFunc(display);
glutIdleFunc(idle);
glutMainLoop();
return 0;
}
