// Created by Cristiano Kemmer on 7/6/19.
// Project csvparser

#include <iostream>
#include "Parser.h"
#include "Constants.h"

int main()
{
  using namespace std;

  cout << "Hello, this is Frontline!" << endl;

  Parser::printClassInformation();
  Parser p;
  p.printOpenedFiles();

  return 0;
}
