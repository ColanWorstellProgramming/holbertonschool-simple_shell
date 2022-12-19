HSH (1)			              **BSD General Commands Manual**                                   HSH(1)









# NAME
 
	hsh — command interpreter (shell)

# SYNOPSIS
 hsh [-aCefnuvxIimqVEbp] [+aCefnuvxIimqVEbp] [-o option_name] [+o option_name] [command_file [argument ...]]

  hsh -c [-aCefnuvxIimqVEbp] [+aCefnuvxIimqVEbp] [-o option_name] [+o option_name] command_string [command_name [argument ...]]

  hsh -s [-aCefnuvxIimqVEbp] [+aCefnuvxIimqVEbp] [-o option_name] [+o option_name] [argument ...]



# DESCRIPTION
hsh is a compiled project replicating the bash shell hs. To use hsh simply type ./hsh into the command line to run in interactive mode, or in non-interactive mode the user can type echo "command" | ./hsh
It also can be run as ./hsh < script to run in non-interactive mode.

#   Argument List Processing
All of the single letter options that have a corresponding name can be
used as an argument to the -o option.  The set -o name is provided next
to the single letter option in the description below.  Specifying a dash
“-” turns the option on, while using a plus “+” disables the option.  The
following options can be set from the command line or with the set
builtin (described later).

	       -a allexport     Export all variables assigned to.

           -c               Read commands from the command_string operand in‐
                            stead of from the standard input.  Special parame‐
                            ter 0 will be set from the command_name operand
                            and the positional parameters ($1, $2, etc.)  set
                            from the remaining argument operands.

           -C noclobber     Don't overwrite existing files with “>”. 	   


   	       -e errexit      	    If not interactive, exit immediately if any
                            untested command fails.  The exit status of a com‐
                            mand is considered to be explicitly tested if the
                            command is used to control an if, elif, while, or
                            until; or if the command is the left hand operand
                            of an “&&” or “||” operator.

           -f noglob        Disable pathname expansion.

           -n noexec        If not interactive, read commands but do not exe‐
                            cute them.  This is useful for checking the syntax
                            of shell scripts.

           -u nounset       Write a message to standard error when attempting
                            to expand a variable that is not set, and if the
                            shell is not interactive, exit immediately.

           -v verbose       The shell writes its input to standard error as it
                            is read.  Useful for debugging.

           -x xtrace        Write each command to standard error (preceded by
                            a ‘+ ’) before it is executed.  Useful for debug‐
                            ging.

           -I ignoreeof     Ignore EOF's from input when interactive.

           -i interactive   Force the shell to behave interactively.

           -l               Make dash act as if it had been invoked as a login
                            shell.

           -m monitor       Turn on job control (set automatically when inter‐
                            active).

           -s stdin         Read commands from standard input (set automati‐
                            cally if no file arguments are present).  This op‐
                            tion has no effect when set after the shell has
                            already started running (i.e. with set).

           -V vi            Enable the built-in vi(1) command line editor
                            (disables -E if it has been set).

           -E emacs         Enable the built-in emacs(1) command line editor
                            (disables -V if it has been set).

           -b notify        Enable asynchronous notification of background job
                            completion.  (UNIMPLEMENTED for 4.4alpha)

           -p priv          Do not attempt to reset effective uid if it does
                            not match uid. This is not set by default to help
                            avoid incorrect usage by setuid root programs via
                            system(3) or popen(3).

# DEFINITIONS

The following definitions are used throughout the rest of this document.

# blank
 A space or tab.

# word
 A sequence of characters considered as a single unit by the shell. Also known as a token.

# name
 A word consisting only of alphanumeric characters and underscores, and beginning with an alphabetic character or an underscore. Also referred to as an identifier.

# metacharacter
 A character that, when unquoted, separates words. One of the following:
**| & ; ( ) < > space tab**

# control operator
 A token that performs a control function. It is one of the following symbols:
**|| & && ; ;; ( ) | |& <newline>**


# LIST OF ALLOWED FUNCTIONS AND SYSTEM CALLS

**access**  (man 2 access)
 **chdir**  (man 2 chdir)
 **close** (man 2 close)
**closedir** (man 3 closedir)
**execve** (man 2 execve)
**exit** (man 3 exit)
**fflush** (man 3 fflush)
**fork** (man 2 fork)
**free** (man 3 free)
**getcwd** (man 3 getcwd)
**getline** (man 3 getline)
**getpid** (man 2 getpid)
**isatty** (man 3 isatty)
**kill** (man 2 kill)
**malloc** (man 3 malloc)
**open** (man 2 open)
**opendir** (man 3 opendir)
**perror** (man 3 perror)
**read** (man 2 read)
**readdir** (man 3 readdir)
**signal** (man 2 signal)
**stat** (__xstat) (man 2 stat)
**lstat** (__lxstat) (man 2 lstat)
**fstat** (__fxstat) (man 2 fstat)
**strtok** (man 3 strtok)
**wait** (man 2 wait)
**waitpid** (man 2 waitpid)
**wait3** (man 2 wait3)
**wait4** (man 2 wait4)
**write** (man 2 write)


# EXIT STATUS
     Errors that are detected by the shell, such as a syntax error, will cause
     the shell to exit with a non-zero exit status.  If the shell is not an
     interactive shell, the execution of the shell file will be aborted.  Oth‐
     erwise the shell will return the exit status of the last command exe‐
     cuted, or if the exit builtin is used with a numeric argument, it will
     return the argument.
# FILES
     $HOME/.profile

     /etc/profile

# SEE ALSO
     csh(1), echo(1), getopt(1), ksh(1), login(1), printf(1), test(1),
     getopt(3), passwd(5), environ(7), sysctl(8)

# HISTORY
     **dash** is a POSIX-compliant implementation of /bin/sh that aims to be as
     small as possible.  **dash** is a direct descendant of the NetBSD version of
     ash (the Almquist SHell), ported to Linux in early 1997.  It was renamed
     to dash in 2002.

# AUTHORS
     Write by Manuel Zambrano and Colan Worstell.

# BUGS
     Setuid shell scripts should be avoided at all costs, as they are a sig‐
     nificant security risk.

     PS1, PS2, and PS4 should be subject to parameter expansion before being
     displayed.


