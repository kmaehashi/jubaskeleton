#include "jubatus/client.hpp"

#include <iostream>

int main() {
  {
  jubatus::classifier::client::classifier client("127.0.0.1", 9199, "", 10);
  bool result = client.set_label("pos");
  std::cout << result << std::endl;
  }

  {
  jubatus::anomaly::client::anomaly client("127.0.0.1", 9199, "", 10);
  std::cout << client.get_all_rows().size() << std::endl;
  }
}
