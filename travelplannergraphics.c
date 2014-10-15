#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "travelplannergraphics.h"

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


void menu(int choice){
  puts("What do you want to do?");
  puts("1. See possible routes from entered start and stop");
  puts("2. Go from start to stop at entered time");
  puts("3. Go from start to stop at latest entered time");
  puts("4. Configure the bus network");
  puts("0. Exit Travel Planner");
  printf("\n Choice: ");
}

void edit_network_menu(int editchoice){
  puts("What do you want to do?");
  puts("1. Delete bus stop");
  puts("2. Insert new bus stop");
  puts("3. Delete route");
  puts("4. Insert new route");
  puts("0. Go back to Travel Planner");
  printf("\n Choice: ");
}
