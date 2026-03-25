
2.2 3D Bar (Graphics Function)

👉 This uses graphics.h (Turbo C / old compiler)

#include <graphics.h>

int main() {
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "");

    bar3d(100, 100, 200, 200, 20, 1);

    getch();
    closegraph();
    return 0;
}

⚠️ Reality: This will NOT run in modern VS Code. Only Turbo C / old setup.
