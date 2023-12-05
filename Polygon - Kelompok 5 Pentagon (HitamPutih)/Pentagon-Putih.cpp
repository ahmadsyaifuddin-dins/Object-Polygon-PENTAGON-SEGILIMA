#include <GL/glut.h>

// Fungsi untuk menggambar poligon
void drawPentagon() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set latar belakang putih
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0.0f, 0.0f, 0.0f); // Set warna hitam

    glBegin(GL_POLYGON);
    glVertex2f(0.0, 0.9);  // Puncak atas
    glVertex2f(-0.9, 0.3); // Kiri atas
    glVertex2f(-0.6, -0.78); // Kiri bawah
    glVertex2f(0.6, -0.78);  // Kanan bawah
    glVertex2f(0.9, 0.3);  // Kanan atas
    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(450, 450); // Ukuran jendela
    glutCreateWindow("Pentagon Hitam");

    glutDisplayFunc(drawPentagon);

    glutMainLoop();

    return 0;
}

