#ifndef ___PGEN_TERMINAL_H__
#define ___PGEN_TERMINAL_H__

#include "VT100.h"
#include "messages.h"

#define TERMINAL_MAX_HOTKEYS 4
#define TERMINAL_WIDTH 80
#define TERMINAL_HEIGTH 24
#define TERMINAL_FIRST_CANVAS_LINE 10
#define TERMINAL_CANVAS_LINES 12
#define TERMINAL_STATUS_LINE 23
#define TERMINAL_BACKGROUND_COLOR VT_BLACK
#define TERMINAL_FOREGROUND_COLOR VT_YELLOW
#define TERMINAL_STATUS_LINE_BACKGROUND_COLOR VT_YELLOW
#define TERMINAL_STATUS_LINE_FOREGROUND_COLOR VT_BLACK
#define TERMINAL_MENU_BASE 100

class Terminal
{
private:
    Stream *stream;
    void printMessage(uint8_t messageId);
    struct terminalHotkey
    {
        void (*callback)();
        char key;
    };

    terminalHotkey hotkeys[TERMINAL_MAX_HOTKEYS];
    byte lastHotkeyIndex = 0;
    void (*menuCallback)(byte selection);

public:
    void init(Stream *stream);
    void clearHotkeys();
    void addHotkey(char key, void (*callback)());
    void setMenuCallback(void (*menuCallback)(byte selection));
    void clearScreen();
    void clearCanvas();
    void printBanner();
    void printStatusMessage(char *message);
    void print(char *text, byte line = NULL, byte column = NULL);
    void printMenuEntry(byte position, char *text);
    void readString(char *string, byte stringMaxSize, char mask = 0);
    void waitMenuSelection();
    
};

#endif