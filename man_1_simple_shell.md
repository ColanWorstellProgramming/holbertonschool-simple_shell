% HSH(1)
% Colan Worstell & Manuel Zambrano
% December 2022

# NAME
hsh - a simple shell replication project.

# SYNOPSIS
**./hsh**\
**echo "command" | ./hsh**\
**./hsh < script**\

# DESCRIPTION
**hsh** A simple shell replication. Run with ./hsh in interactive mode to run any command normally ran in bash. You can use this program interactively or non-interactivly and pass in script files.

# EXAMPLES
**./hsh**
: Runs program in interactive mode.\
**echo "ls" | ./hsh**
: Runs program in non-interactive mode, runs ./hsh with "ls" command.\
**./hsh scriptfile**
: Runs program in non-interactive mode, runs ./hsh with a script "scriptfile".

# SEE ALSO
**sh(1)**
