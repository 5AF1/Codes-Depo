#include <fstream>

int main() {
  std::ofstream outfile;

  outfile.open("test.txt", std::ios_base::app);
  outfile << "Data";
  return 0;
}
