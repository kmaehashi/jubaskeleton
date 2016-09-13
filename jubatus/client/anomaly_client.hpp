// This file is auto-generated from anomaly.idl(0.7.2-50-gbcc1e21) with jenerator version 0.8.5-6-g5a2c923/feature/improve-get_labels-ulong
// *** DO NOT EDIT ***

#ifndef JUBATUS_CLIENT_ANOMALY_CLIENT_HPP_
#define JUBATUS_CLIENT_ANOMALY_CLIENT_HPP_

#include <map>
#include <string>
#include <vector>
#include <jubatus/client/common/client.hpp>
#include <jubatus/client/common/datum.hpp>
#include "anomaly_types.hpp"

namespace jubatus {
namespace anomaly {
namespace client {

class anomaly : public jubatus::client::common::client {
 public:
  anomaly(const std::string& host, uint64_t port, const std::string& name,
      unsigned int timeout_sec)
      : client(host, port, name, timeout_sec) {
  }

  bool clear_row(const std::string& id) {
    return true;
  }

  id_with_score add(const jubatus::client::common::datum& row) {
    return id_with_score();
  }

  float update(const std::string& id,
      const jubatus::client::common::datum& row) {
    return 1.0;
  }

  float overwrite(const std::string& id,
      const jubatus::client::common::datum& row) {
     return 1.0;
  }

  bool clear() {
    return true;
  }

  float calc_score(const jubatus::client::common::datum& row) {
    return 1.0;
  }

  std::vector<std::string> get_all_rows() {
    return std::vector<std::string>();
  }
};

}  // namespace client
}  // namespace anomaly
}  // namespace jubatus

#endif  // JUBATUS_CLIENT_ANOMALY_CLIENT_HPP_
