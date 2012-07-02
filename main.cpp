/* 
 * File:   main.cpp
 * Author: Doni
 *arif rahman on github
 * Created on 21 Mei 2012, 20:54
 * 
 * Kelompok 2
 * Febrian Doni (10108513)
 * Zulfikar Sembiring (10108475)
 * Nurhalimah (10108513)
 * Muhammad Fauzan (10108473)
 */

#include <windows.h>
#include <GL/glut.h>


double putar = 0.0;
double besar = -13.0;

void gazibu(double putar) {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    glTranslatef(0.0f, 0.0f, besar);
    glRotatef(putar, 0.0f, 1.0f, 0.0f);

    //lantai
    glPushMatrix();
    glScaled(1., 0.04, 1);
    glTranslatef(0.0, -30.2, 0.0);
    glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
    glColor3f(0.5, 0, 0);
    glutSolidCube(7.0);
    glPopMatrix();

    //lantai
    //atap
    
    
    //atap
    /*glPushMatrix();
    glScaled(0.8, 1.0, 0.8);
    glTranslatef(0.0, 1.5, 0.0);
    glRotated(-90, 1, 0, 0);
    glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
    glColor3f(0, 0, 0.6);
    glutSolidCone(4.5, 2, 8, 1);
    glPopMatrix();*/
     //atap
    glPushMatrix();
    glTranslated(-2.1, 8, 0.3);
    glRotatef(60,0.0,0.0,-4.0);
    glScaled(0.02, 0.7, 0.8);
    glutSolidCube(7.0);
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(2.1, 8, 0.3);
    glRotatef(60,0.0,0.0,4.0);
    glScaled(0.02, 0.7, 0.8);
    glutSolidCube(7.0);
    glPopMatrix();
    

    glTranslatef(0.0, 0.4, 0.0);
    glScaled(1.2, 0.25, 1.2);


    glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
    glColor3f(0, 0.5, 0);
    
    //tangga1
  /*  glPushMatrix();
    glTranslated(1.5, -5.5, 2);
    glScaled(0.3, 0.21, 0.2);
    glutSolidCube(7.0); 
    glPopMatrix();
    
    //tangga2
    glPushMatrix();
    glTranslated(1.6, -4.2, 2);
    glScaled(0.27, 0.19, 0.2);
    glutSolidCube(7.0); 
    glPopMatrix();
    
    
    //tangga3
    glPushMatrix();
    glTranslated(1.68, -3.1, 2);
    glScaled(0.23, 0.23, 0.2);
    glutSolidCube(7.0); 
    glPopMatrix();
    
    //tangga4
    glPushMatrix();
    glTranslated(1.77, -2, 2);
    glScaled(0.19, 0.27, 0.2);
    glutSolidCube(7.0); 
    glPopMatrix();
    
    //tangga5
    glPushMatrix();
    glTranslated(1.92, -0.9, 2);
    glScaled(0.16, 0.31, 0.2);
    glutSolidCube(7.0); 
    glPopMatrix();
    
    //tangga6
    glPushMatrix();
    glTranslated(2.09, 0.3, 2);
    glScaled(0.12, 0.35, 0.2);
    glutSolidCube(7.0); 
    glPopMatrix();
    
    //tangga7
    glPushMatrix();
    glTranslated(2.25, 1.35, 2);
    glScaled(0.08, 0.39, 0.2);
    glutSolidCube(7.0); 
    glPopMatrix();
 
    //dindingkanan
    glPushMatrix();
    glTranslated(2.5, -0.8, 0.6);
    glScaled(0.02, 1.5, 0.6);
    glutSolidCube(7.0);
    glPopMatrix();
    
     //dindingkiri
    /*glPushMatrix();
    glTranslated(-2.5, -0.8, 0.25);
    glScaled(0.02, 1.5, 0.6);
    glutSolidCube(7.0);
    glPopMatrix(); 
  
    //tiang2
   /* glPushMatrix();
    glTranslated(-2, -1.9, 2);
    glScaled(.2, 10.5, .2);
    glutSolidSphere(0.4, 80, 120);
    glPopMatrix();*/

    
    
    //dindingbelakang
   /* glPushMatrix();
    glTranslated(0.1, -1, -1.8);
    glScaled(0.75, 1.5, 0.02);
    glutSolidCube(7.0);
    glPopMatrix();*/

    //tiang4
   /* glPushMatrix();
    glTranslated(2, -1.9, -2);
    glScaled(2.2, 10.5, .2);
    glutSolidSphere(0.4, 80, 120);
    glPopMatrix();*/


    glFlush();
    glutSwapBuffers();
}

void putar_kanan() {
    putar += 1.0;
    gazibu(putar);
}

void putar_kiri() {
    putar -= 1.0;
    gazibu(putar);
}

void besar_tam() {
    besar++;
    glutPostRedisplay();
}

void besar_kec() {
    besar--;
    glutPostRedisplay();
}

void putar_skanan() {
    putar++;
    glutPostRedisplay();
}

void putar_skiri() {
    putar--;
    glutPostRedisplay();
}

void init() {
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glColor3f(.0, .0, .0);
    glViewport(0, 0, 640, 480);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(30.0f, (GLfloat) 640 / (GLfloat) 480, 0.1f, 200.0f);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

}

void display() {

    GLfloat lightIntensity[] = {1.7f, 1.7f, 1.7f, 1.0f};
    GLfloat light_position[] = {2.0f, 0.0f, 0.0f, 0.0f};
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);
    GLfloat light_position2[] = {0.0f, 0.0f, 8.0f, 0.0f};
    glLightfv(GL_LIGHT0, GL_POSITION, light_position2);
    GLfloat light_position3[] = {0.0f, 5.0f, 2.0f, 0.5f};
    glLightfv(GL_LIGHT0, GL_POSITION, light_position3);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, lightIntensity);
    glFlush();
    glutSwapBuffers();

    gazibu(putar);

}

void keyboard(unsigned char key, int putar, int y) {
    if (key == 'v' || key == 'V') {
        glutIdleFunc(putar_kanan);
    }
    if (key == 'b' || key == 'B') {
        glutIdleFunc(putar_kiri);
    }
    if (key == 'f' || key == 'F') {
        besar_tam();
    }
    if (key == 'g' || key == 'G') {
        besar_kec();
    }
    if (key == 'c' || key == 'C') {
        putar_skanan();
    }
    if (key == 'n' || key == 'N') {
        putar_skiri();
    }
    if (key == 'q' || key == 'Q') {
        exit(0);
    }

}

int main(int argc, char *argv[]) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(640, 480);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("Tugas OpenGL Gazibu IF10 KEL2");
    glutDisplayFunc(display);
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glShadeModel(GL_SMOOTH);
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_NORMALIZE);
    glEnable(GL_COLOR_MATERIAL);
    glutKeyboardFunc(keyboard);
    init();
    glutMainLoop();
    return 0;
}

