static const char *colorname[] = {
	/* 8 normal colors */
	"#1d2021", //#282828
	"#fb4934",
	"#b8bb26",
	"#fabd2f",
	"#83a598",
	"#d3869b", // F5C2E7
	"#8ec07c", //
	"#fbf1c7",
	/* 8 bright colors */
	"#665c54",
	"#d79921",
    "#282828",
    "#3c3836",
    "#a89984",
    "#ebdbb2",
	"#cc241d",
	"#fbf1c7", // #ebdbb2
               //
    [256] = "#0e1011", /* default background colour */
    [257] = "#f9f5d7", /* default foreground colour */
};

unsigned int defaultfg = 257;
unsigned int defaultbg = 256;
unsigned int defaultcs = 257;
static unsigned int defaultrcs = 256;
