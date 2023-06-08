#include <ncurses.h>

int main()
{
  int ch;

  initscr();
  raw();
  keypad(stdscr, TRUE);

  while(1) {
    printw("Enter any char to see it in bold (f1 to esc)\n");
    ch = getch();

    if(ch == KEY_F(1)) {
      printw("F1 key pressed\n");
      break;
    } else {
      printw("The key pressed is ");
      attron(A_BOLD);
      printw("%c \n", ch);
      attroff(A_BOLD);
    }

    refresh();
  }

  endwin();

  return 0;
}
