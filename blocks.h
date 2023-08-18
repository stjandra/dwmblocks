//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/

    // This is updated by a script in /etc/NetworkManager/dispatcher.d
    {"",     "vpn_ip",                                                   0,    11},

    {"",     "my_battery",                                              30,	    0},

    {"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},

    // Datetime is updated by dwmblocks_my script every minute
    {"",     "my_date",                                                  0,    10},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
