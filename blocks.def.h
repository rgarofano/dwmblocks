static const Block blocks[] = {
// Icon, Command, Update Interval, Update Signal
    {" ", "status-memory", 10, 0},
//  {"", "status-battery", 60, 0},
    {"", "status-volume", 0, 10},
    {"  ", "status-datetime", 1, 0},
};

// Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
