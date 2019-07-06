// Created by Cristiano Kemmer on 7/6/19.
// Project csvparser

#include "includes/Parser.h"
#include <iostream>

void Parser::printClassInformation()
{
  std::cout << "class Parser from module 'parser'" << std::endl;
}

void Parser::printOpenedFiles()
{
  if (true == this->files.empty()) {
    std::cout << "No opened files" << std::endl;
    return;
  }

  for (auto it = this->files.begin(); it != this->files.end(); ++it) {
    std::cout << "Opened file: " << *it;
  }
}
