#pragma once

#include <conio.h>
#include <time.h>
#include <windows.h>

#include <iostream>

#define H 22
#define W 22

class chessboard {
 public:
  char qp[H][W];
  int i, j, x1, y1;
  chessboard();
  void food();
  void prt(int grade, int score, int gamespeed);
};
