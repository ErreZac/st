static const char *colorname[] = {
	/* 8 normal colors */
	"#1d2021", //#282828
	"#cc241d",
	"#98971a",
	"#d79921",
	"#458588",
	"#b16286", //
	"#689d6a", //
	"#a89984",
	/* 8 bright colors */
	"#665c54",
	"#fb4934",
	"#b8bb26",
	"#fabd2f",
	"#83a598",
	"#d3869b", // F5C2E7
	"#8ec07c", //
	"#fbf1c7", // #ebdbb2

[256] = "#fbf1c7", /* default foreground colour */
[257] = "#1d2021", /* default background colour */
[258] = "#928374", /*575268*/
};
/*
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
unsigned int defaultcs = 258;
static unsigned int defaultrcs = 258;
