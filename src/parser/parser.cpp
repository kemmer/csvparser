// Created by Cristiano Kemmer on 7/6/19.
// Project csvparser

#include "parser.h"
#include <iostream>


void Parser::printClassInformation()
{
  std::cout << "class Parser from module 'parser'" << std::endl;
}

void Parser::printOpenedFiles()
{
  if (this->files.empty()) {
    std::cout << "No opened files" << std::endl;
    return;
  }

  for (auto & file : this->files) {
    std::cout << "Opened file: " << file;
  }
}
