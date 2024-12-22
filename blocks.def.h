//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	{"",	"~/.dwm/status/battery.sh",	10,	26},
	{"",	"~/.dwm/status/cpu.sh",	1,	11},
	{"",	"~/.dwm/status/nettraffic.sh",	1,	8},
	{"",	"~/.dwm/status/ram.sh",		10,	6},
	{"",	"~/.dwm/status/volume.sh",	1,	7},
	{"",	"~/.dwm/status/vpn.sh",	1,	7},
	{"",	"~/.dwm/status/date.sh",	180,	12},
	{"",	"~/.dwm/status/time.sh",	1,	5},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
