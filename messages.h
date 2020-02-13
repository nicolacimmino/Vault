#ifndef __PGEN_MESSAGES_H__
#define __PGEN_MESSAGES_H__

const char message0[] PROGMEM =
    "    ______ _____  _____ _   _ \r\n"
    "    | ___ \\  __ \\|  ___| \\ | |\r\n"
    "    | |_/ / |  \\/| |__ |  \\| |\r\n"
    "    |  __/| | __ |  __|| . ` |\r\n"
    "    | |   | |_\\ \\| |___| |\\  |\r\n"
    "    \\_|    \\____/\\____/\\_| \\_/\r\n"
    "              \e[33m(c) Nicola 2020";

const char message1[] PROGMEM =
    "    \e[32m1. \e[33mTEST A \r\n"
    "    \e[32m2. \e[33mTEST B\r\n"
    "    \e[32m3. \e[33mTEST C\r\n";

const char message2[] PROGMEM =
    "    \e[32m1. \e[33mB-TEST A \r\n"
    "    \e[32m2. \e[33mB-TEST B\r\n"
    "    \e[32m3. \e[33mB-TEST C\r\n";

const char *const messages[] PROGMEM = {message0, message1, message2};

#endif
