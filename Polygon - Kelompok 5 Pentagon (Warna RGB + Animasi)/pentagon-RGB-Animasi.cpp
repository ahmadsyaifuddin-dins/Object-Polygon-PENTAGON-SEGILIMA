#include <GL/glut.h>
#include <cmath>

// Sudut rotasi
float rotationAngle = 0.0f;

// Fungsi untuk menggambar pentagon dengan animasi berputar
void drawRotatingPentagon() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set latar belakang putih
    glClear(GL_COLOR_BUFFER_BIT);

    glPushMatrix();
//    glRotatef(rotationAngle, 0.0f, 0.0f, 1.0f); // Rotasi sekitar sumbu Z / Bentuk Animasi 1
//    glRotatef(rotationAngle, 0.0f, 1.0f, 0.0f); // Berbalik sumbu X / Bentuk Animasi 2
//    glRotatef(rotationAngle, 1.0f, 0.0f, 0.0f); // Berbalik sumbu Y / Bentuk Animasi 3
      glRotatef(rotationAngle, 0.0f, 0.0f, 0.0f); // Maju Mundur / Bentuk Animasi 4
//    glRotatef(rotationAngle, 1.0f, 1.0f, 0.0f); // Berbalik sumbu Y dan X / Bentuk Animasi 5

    // Menggambar pentagon dengan warna RGB terbagi
    glBegin(GL_POLYGON);

    // Sisi 1 (Merah)
    glColor3f(1.0f, 0.0f, 0.0f); // Merah
    glVertex2f(0.0, 0.9);  // Puncak atas

    // Sisi 2 (Hijau)
    glColor3f(0.0f, 1.0f, 0.0f); // Hijau
    glVertex2f(-0.9, 0.3); // Kiri atas

    // Sisi 3 (Biru)
    glColor3f(0.0f, 0.0f, 1.0f); // Biru
    glVertex2f(-0.6, -0.78); // Kiri bawah

    // Sisi 4 (Merah)
    glColor3f(1.0f, 0.0f, 0.0f); // Merah
    glVertex2f(0.6, -0.78);  // Kanan bawah

    // Sisi 5 (Hijau)
    glColor3f(0.0f, 1.0f, 0.0f); // Hijau
    glVertex2f(0.9, 0.3);  // Kanan atas

    glEnd();

    glPopMatrix();
    glFlush();

    // Menambahkan sudut rotasi untuk animasi berputar
    rotationAngle += 0.3f; //kecepatan rotasi
    if (rotationAngle >= 360.0f)
        rotationAngle -= 360.0f;

    glutPostRedisplay();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(450, 450); // Ukuran jendela
    glutCreateWindow("Animasi Pentagon Berputar");

    glutDisplayFunc(drawRotatingPentagon);

    glutMainLoop();

    return 0;
}

