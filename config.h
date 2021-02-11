//Modify this file to change what commands output to your statusbar, and recompile using the make command.
#define MIN *60
#define HOUR *60*60

static const Block blocks[] = {
	{
		.icon = "",
		.command = "mpc-status-oneliner.sh 30",
		.signal = 1,
		.interval = 0
	}, {
		.icon = "Wth: ",
		.command = "curl -N 'https://wttr.in/?format=1'",
		.interval = 30 MIN
	}, {
		.icon = " / ",
		.command = "df / -h | tail -n+2 | awk '{print $4}'",
		.interval = 10 MIN
	}, {
		.icon = " /home ",
		.command = "df /home -h | tail -n+2 | awk '{print $4}'",
		.interval = 10 MIN
	}, {
		.icon = " ",
		.command = "date +'%F %H:%M'",
		.interval = 15
	},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " │ ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
