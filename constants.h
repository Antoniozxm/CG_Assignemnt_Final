#pragma once

#define PI 3.14159265359

bool moving = false;
float speed = 0.1f;
float ro = -180.0f;
float heliRot = PI;
float curX = 0.0f;
float curZ = 0.0f;


GLUquadricObj* obj = gluNewQuadric();
float bladeAngle = 0.0f;
float upVector = 0.0f;
float rotationVector = 0.0f;

float camera_angle = 0;
float camera_x = -20;
float camera_y = 0;
float camera_height = 6;
float camera_rotate_speed = 0.003;
float camera_distance = 40;

float eye_x = 0;
float eye_y = 0;
float eye_z = 0;

float camera_x_angle = 0;
float camera_y_angle = 0;
float mouse_old_pos_x = 0;
float mouse_old_pos_y = 0;

float unit = 0;
char status = 'x';

GLboolean ambient = true;
GLboolean diffuse = true;
GLboolean specular = true;

GLuint texture[10];

GLfloat no_light[] = { 0.0, 0.0, 0.0, 1.0 };
GLfloat light_ambient[] = { 1.0, 1.0, 1.0, 1.0 };
GLfloat light_diffuse[] = { 1.0, 1.0, 1.0, 1.0 };
GLfloat light_specular[] = { 1.0, 1.0, 1.0, 1.0 };
GLfloat light_position[] = { 2.0, 25.0, 3.0, 1.0 };

GLfloat table_leg_no_mat[] = { 0.0,0.0,0.0,1.0 };
GLfloat table_leg_ambient[] = { 1.000, 0.388, 0.278, 1.0 };
GLfloat table_leg_diffuse[] = { 1.000, 0.388, 0.278, 1.0 };
GLfloat table_leg_specular[] = { 1.000, 0.388, 0.278, 1.0 };
GLfloat table_leg_shiness[] = { 15 };

GLfloat table_top_no_mat[] = { 0.0,0.0,0.0,1.0 };
GLfloat table_top_ambient[] = { 1.000, 0.388, 0.278, 1.0 };
GLfloat table_top_diffuse[] = { 1.000, 0.388, 0.278, 1.0 };
GLfloat table_top_specular[] = { 1.000, 0.388, 0.278, 1.0 };
GLfloat table_top_shiness[] = { 17 };

GLfloat chair_leg_no_mat[] = { 0.0,0.0,0.0,1.0 };
GLfloat chair_leg_ambient[] = { 1.000, 0.388, 0.278, 1.0 };
GLfloat chair_leg_diffuse[] = { 1.000, 0.388, 0.278, 1.0 };
GLfloat chair_leg_specular[] = { 1.000, 0.388, 0.278, 1.0 };
GLfloat chair_leg_shiness[] = { 15 };

GLfloat chair_seat_no_mat[] = { 0.0,0.0,0.0,1.0 };
GLfloat chair_seat_ambient[] = { 1.000, 0.388, 0.278, 1.0 };
GLfloat chair_seat_diffuse[] = { 1.000, 0.388, 0.278, 1.0 };
GLfloat chair_seat_specular[] = { 1.000, 0.388, 0.278, 1.0 };
GLfloat chair_seat_shiness[] = { 17 };

GLfloat chair_top_no_mat[] = { 0.0,0.0,0.0,1.0 };
GLfloat chair_top_ambient[] = { 1.000, 0.388, 0.278, 1.0 };
GLfloat chair_top_diffuse[] = { 1.000, 0.388, 0.278, 1.0 };
GLfloat chair_top_specular[] = { 1.000, 0.388, 0.278, 1.0 };
GLfloat chair_top_shiness[] = { 17 };

GLfloat bed_no_mat[] = { 0.0,0.0,0.0,1.0 };
GLfloat bed_ambient[] = { 0.859, 0.439, 0.576, 1.0 };
GLfloat bed_diffuse[] = { 0.8, 0.48, 0.6, 0.9 };
GLfloat bed_specular[] = { 0.86, 0.50, 0.60, 1.0 };
GLfloat bed_shiness[] = { 13 };

GLfloat bed_head_no_mat[] = { 0.0,0.0,0.0,1.0 };
GLfloat bed_head_ambient[] = { 0.545, 0.271, 0.075, 1.0 };
GLfloat bed_head_diffuse[] = { 0.58, 0.29, 0.06, 0.9 };
GLfloat bed_head_specular[] = { 0.545, 0.271, 0.075, 1.0 };
GLfloat bed_head_shiness[] = { 13 };

GLfloat shelf_no_mat[] = { 0.0,0.0,0.0,1.0 };
GLfloat shelf_ambient[] = { 1.000, 0.388, 0.278, 1.0 };
GLfloat shelf_diffuse[] = { 1.000, 0.388, 0.278, 0.9 };
GLfloat shelf_specular[] = { 1.000, 0.388, 0.278, 1.0 };
GLfloat shelf_shiness[] = { 13 };


GLfloat wall_no_mat[] = { 0.0,0.0,0.0,1.0 };
GLfloat wall_ambient[] = { 0.373, 0.620, 0.627, 1.0 };
GLfloat wall_diffuse[] = { 0.30, 0.6, 0.59, 0.9 };
GLfloat wall_specular[] = { 0.32,0.6, 0.61, 1.0 };
GLfloat wall_shiness[] = { 13 };

GLfloat floor_no_mat[] = { 0.0,0.0,0.0,1.0 };
GLfloat floor_ambient[] = { 0.184, 0.310, 0.310, 0.8 };
GLfloat floor_diffuse[] = { 0.19, 0.3, 0.33, 1.0 };
GLfloat floor_specular[] = { 0.184, 0.35, 0.35, 1.0 };
GLfloat floor_shiness[] = { 15 };

GLfloat ceiling_no_mat[] = { 0.0,0.0,0.0,1.0 };
GLfloat ceiling_ambient[] = { 0.373, 0.620, 0.627, 1.0 };
GLfloat ceiling_diffuse[] = { 0.35, 0.612, 0.65, 0.9 };
GLfloat ceiling_specular[] = { 0.4, 0.65, 0.647, 1.0 };
GLfloat ceiling_shiness[] = { 15 };