# BUILDING TEXT EDITOR FROM SCRATCH

## 1. SETUP

### 1.1 Installing C Compiler
<pre>
Compiling with Make:
-   ```cc kilo.c -o kilo``` this will produce an executable named kilo. -o stands for “output”, and specifies that the output executable should be named kilo.
-   To run kilo, type <span style="background-color: blue">./kilo</span> in your shell and press Enter. The program doesn’t print any output, but you can check its exit status (the value main() returns) by running echo $?, which should print 0.
-   run <span style="background-color: blue">make</span> , and you should see it compile
</pre>

## 2. ENTERING RAW MODE
<pre>
-   By default your terminal starts in canonical mode, also called cooked mode. In this mode, keyboard input is only sent to your program when the user presses Enter. This is useful for many programs: it lets the user type in a line of text, use Backspace to fix errors until they get their input exactly the way they want it, and finally press Enter to send it to the program. But it does not work well for programs with more complex user interfaces, like text editors. We want to process each keypress as it comes in, so we can respond to it immediately.
</pre>
### 1.2 Press 'q' to quit

### 1.3 Turn of Echoing

