// Josue Fonseca
// fonsecajosue88@csu.fullerton.edu
// @fonsecajosue
// Partners: @haylieboscia,@pratiklamichhane05

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() <= 1) {
    std::cout << "Error: Needs one or more argument";
    return 1;
  }

  double count{0};
  bool temp = true;
  double sum{0.0};
  for (const std::string& argument : arguments) {
    if (temp == true) {
      temp = false;
    } else {
      sum += std::stod(argument);
      ++count;
    }
  }

  double average = sum / count;
  std::cout << "Average = " << average << "\n";

  return 0;
}
