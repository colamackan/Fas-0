#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void menu_choices (int choice) {
  puts("Please choose an operation");
  puts("1. Update network");
  puts("2. Possible routes to destination");
  puts("3. Earliest departure to destination");
  puts("4. Latest arrival to destination");
  puts("0. Exit planner");
  printf("\n Choice: ");
}




void logo(){

  puts("\t _______   ____       ___      __        __   _____  __ ");
  puts("\t|_______| |  _  |    / _ \\     \\ \\      / /  | ____| | |");
  puts("\t   | |    | | | |   / /_\\ \\     \\ \\    / /   | |__   | |");
  puts("\t   | |    | |/ /   / _____ \\     \\ \\  / /    |  __|  | | ");
  puts("\t   | |    | |\\ \\  / /     \\ \\     \\ \\/ /     | |___  | |___      ");
  puts("\t   |_|    |_| \\_\\/_/       \\_\\     \\__/      |_____| |_____|  \n");
  

  puts("     _____    __       ____       ___    __   ___    __   _____   _____   ");
  puts("    / __  /  / /      / _  |     /   |  / /  /   |  / /  / ___/  / __  / ");
  puts("   / /_/ /  / /      / /_| |    / /| | / /  / /| | / /  / /__   / /_/ /    ");
  puts("  / ____/  / /      / ___  |   / / | |/ /  / / | |/ /  / ___/  /   __/        ");
  puts(" / /      / /____  / /   | |  / /  |   /  / /  |   /  / /___  / /\\ \\         ");
  puts("/_/      /______/ /_/    |_| /_/   |__/  /_/   |__/  /_____/ /_/  \\_\\          ");
}
