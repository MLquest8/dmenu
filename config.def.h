/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

 /* -b  option; if 0, dmenu appears at bottom     */
static int topbar = 1;
 /* -r option; if 0, dmenu will accept even if input has no match */
static int rejectnomatch = 0;
 /* -p  option; prompt to the left of input field */
static char *prompt      = NULL;
 /* --cmd option; prepends the match with "termcmd" */
static char termcmd[CMDSIZ]  = "st -e";
static int cmdprepend    = 0; /* if 0, "termcmd" won't be prepend the match by default; alt+enter to toggle */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=10"
};
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#bbbbbb", "#222222" },
	[SchemeSel] = { "#eeeeee", "#005577" },
	[SchemeOut] = { "#000000", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 0;
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
