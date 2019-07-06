// Created by Cristiano Kemmer on 7/6/19.
// Project csvparser

#ifndef CSVPARSER_PARSER_H
#define CSVPARSER_PARSER_H

#include <vector>
#include <string>


class Parser
{
  std::vector<std::string> files;

public:
  void static printClassInformation();

  void printOpenedFiles();
};


#endif //CSVPARSER_PARSER_H
