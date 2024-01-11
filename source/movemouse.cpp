#include <stdio.h>
#include <stdlib.h>

#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include <iostream>

void mouseMove(int x, int y)
{
    std::cout<<"moving mouse"<<std::endl;
    Display *displayMain = XOpenDisplay(NULL);
    Window root_window;

    if(displayMain == NULL)
    {
        fprintf(stderr, "Errore nell'apertura del Display !!!\n");
        exit(EXIT_FAILURE);
    }
    root_window = XRootWindow(displayMain, 0);
    XSelectInput(displayMain, root_window, KeyReleaseMask);
    XWarpPointer(displayMain, root_window, None, 0, 0, 1920, 1080, x, y);

    XCloseDisplay(displayMain);
}

int main()
{
    std::cout<<"Hello Richard!"<<std::endl;
    mouseMove(500, 500);
    return 0;
}