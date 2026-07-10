static const Block blocks[] = {
// Icon, Command, Update Interval, Update Signal
    {" ", "block-memory", 10, 0},
//  {"", "block-battery", 60, 0},
    {"", "block-volume", 0, 10},
    {"  ", "block-datetime", 1, 0},
};

// Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
