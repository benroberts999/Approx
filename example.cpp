#include "Approx.hpp"
#include <iostream>

int main() {

  using qip::Approx;

  std::cout << std::boolalpha;

  std::cout << (20.0 == Approx(25.0).del(1.0)) << "\n";
  std::cout << (20.0 == Approx(25.0).del(10.0)) << "\n";
  std::cout << (20.0 == Approx(-25.0).del(10.0)) << "\n";
  std::cout << (-20.0 == Approx(-25.0).del(10.0)) << "\n";

  std::cout << "---\n";

  std::cout << (20.0 == Approx(25.0).eps(1.0)) << "\n";
  std::cout << (20.0 == Approx(25.0).eps(10.0)) << "\n";
  std::cout << (20.0 == Approx(-25.0).eps(10.0)) << "\n";
  std::cout << (-20.0 == Approx(-25.0).eps(10.0)) << "\n";

  std::cout << "---\n";

  std::cout << (20.0 == Approx(25.0).eps(0.01)) << "\n";
  std::cout << (20.0 == Approx(25.0).eps(0.1)) << "\n";
  std::cout << (20.0 == Approx(25.0).eps(0.3)) << "\n";
  std::cout << (20.0 == Approx(-25.0).eps(0.3)) << "\n";
  std::cout << (-20.0 == Approx(-25.0).eps(0.3)) << "\n";

  std::cout << "---\n";

  std::cout << (20.0 + 1.0e-15 == Approx(20.0)) << "\n";
  std::cout << (20.0 + 1.0e-13 == Approx(20.0)) << "\n";
}