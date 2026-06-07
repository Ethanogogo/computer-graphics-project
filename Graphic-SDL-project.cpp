#include <SDL2/SDL.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <cmath>

const int WIDTH = 800;
const int HEIGHT = 600;

float angle = 0.0f;

void drawHexPrism(float radius, float height)
{
    const int sides = 6;
    float halfHeight = height / 2.0f;

    // Top face
    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    for (int i = 0; i < sides; i++)
    {
        float theta = 2.0f * M_PI * i / sides;
        glVertex3f(radius * cos(theta),
            halfHeight,
            radius * sin(theta));
    }
    glEnd();

    // Bottom face
    glColor3f(0.0f, 1.0f, 0.0f);
    glBegin(GL_POLYGON);
    for (int i = 0; i < sides; i++)
    {
        float theta = 2.0f * M_PI * i / sides;
        glVertex3f(radius * cos(theta),
            -halfHeight,
            radius * sin(theta));
    }
    glEnd();

    // Side faces
    glBegin(GL_QUADS);
    for (int i = 0; i < sides; i++)
    {
        float theta1 = 2.0f * M_PI * i / sides;
        float theta2 = 2.0f * M_PI * (i + 1) / sides;

        glColor3f(
            (float)i / sides,
            0.5f,
            1.0f - (float)i / sides);

        glVertex3f(radius * cos(theta1), halfHeight, radius * sin(theta1));
        glVertex3f(radius * cos(theta2), halfHeight, radius * sin(theta2));
        glVertex3f(radius * cos(theta2), -halfHeight, radius * sin(theta2));
        glVertex3f(radius * cos(theta1), -halfHeight, radius * sin(theta1));
    }
    glEnd();
}

int main(int argc, char* argv[])
{
    SDL_Init(SDL_INIT_VIDEO);

    SDL_Window* window = SDL_CreateWindow(
        "3D Hexagonal Prism",
        SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED,
        WIDTH,
        HEIGHT,
        SDL_WINDOW_OPENGL);

    SDL_GLContext context = SDL_GL_CreateContext(window);

    glEnable(GL_DEPTH_TEST);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0, (double)WIDTH / HEIGHT, 1.0, 100.0);

    bool running = true;
    SDL_Event event;

    while (running)
    {
        while (SDL_PollEvent(&event))
        {
            if (event.type == SDL_QUIT)
                running = false;
        }

        angle += 0.5f;

        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

        glMatrixMode(GL_MODELVIEW);
        glLoadIdentity();

        glTranslatef(0.0f, 0.0f, -8.0f);

        // Movement (rotation)
        glRotatef(angle, 1.0f, 1.0f, 0.0f);

        drawHexPrism(1.5f, 3.0f);

        SDL_GL_SwapWindow(window);

        SDL_Delay(16);
    }

    SDL_GL_DeleteContext(context);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}