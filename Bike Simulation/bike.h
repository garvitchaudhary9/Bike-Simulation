//
//  bike.h
//  Bike Simulation
//
//  Created by Garvit Chaudhary on 28/09/21.
//

#ifndef bike_h
#define bike_h
#define GL_SILENCE_DEPRECATION
#include<openGL/gl.h>
#include<GLUT/glut.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
//global variables
#define PI 3.14159
#define WIN_WIDTH 1920
#define WIN_HEIGHT 1080
#define BIKE_LENGTH 3.3f
#define ROD_RADIUS 0.05f
#define GAS_TANK 0.3f
#define BACK_CONNECTOR 0.5f
#define LEFT_ANGLE 50.0f
#define WHEEL_OFFSET 0.11f
#define WHEEL_LEN 0.8f
#define TOP_LEN 1.0f
#define NUM_SPOKES 5
#define SPOKE_ANGLE 72
#define RADIUS_WHEEL 1.0f
#define TUBE_WIDTH 0.20f
#define RIGHT_ROD 2.35f
#define RIGHT_ANGLE 33.0f
#define MIDDLE_ROD 1.8f
#define MIDDLE_ANGLE 125.0f
#define FRONT_ROD 2.5f
#define CRANK_ROD 1.9f
#define CRANK_RODS 2.5f
#define CRANK_ANGLE 0.0f
#define HANDLE_ROD 1.2f
#define FRONT_INCLINE 38.0f
#define HANDLE_LIMIT 30.0f
#define INC_STEERING 2.0f
#define INC_SPEED 0.05f
//bike related variables
GLfloat pedalAngle, speed, steering;
//user view related variables
GLfloat camx,camy,camz;
GLfloat anglex,angley,anglez;
//mouse related variables
int prevx,prevy;
GLenum Mouse;
//bike position related variables
GLfloat xpos,zpos,direction;
//function prototypes
void welcome_window(void);
void operations_window(void);
void ZCylinder(GLfloat radius,GLfloat length);
void XCylinder(GLfloat radius,GLfloat length);
void drawFrame(void);
void gear( GLfloat inner_radius, GLfloat outer_radius,GLfloat width,GLint teeth, GLfloat tooth_depth );
void drawChain(void);
void drawPedals(void);
void drawTyre(void);
void drawSeat(void);
void init(void);
void reset(void);
void display_bike(void);
void idle(void);
void updateScene(void);
void landmarks(void);
void special(int key,int x,int y);
void keyboard(unsigned char key,int x,int y);
void mouse(int button,int state,int x,int y);
void motion(int x,int y);
GLfloat Abs(GLfloat);
GLfloat degrees(GLfloat);
GLfloat radians(GLfloat);
GLfloat angleSum(GLfloat, GLfloat);
#endif /* bike_h */
