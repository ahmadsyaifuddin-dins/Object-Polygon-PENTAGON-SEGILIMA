#include <GL/glut.h>

// Fungsi untuk menggambar pentagon dengan warna RGB terbagi
void drawPentagon() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set latar belakang putih
    glClear(GL_COLOR_BUFFER_BIT);

    // Menggambar pentagon dengan warna merah, hijau, dan biru pada masing-masing sisi
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

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(450, 450); // Ukuran jendela
    glutCreateWindow("Pentagon dengan Warna RGB");

    glutDisplayFunc(drawPentagon);

    glutMainLoop();

    return 0;
}

