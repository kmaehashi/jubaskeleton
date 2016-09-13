// This file is auto-generated from classifier.idl(0.8.9-17-gd4c007f) with jenerator version 0.8.5-6-g5a2c923/feature/improve-get_labels-ulong
// *** DO NOT EDIT ***

#ifndef JUBATUS_CLIENT_CLASSIFIER_CLIENT_HPP_
#define JUBATUS_CLIENT_CLASSIFIER_CLIENT_HPP_

#include <map>
#include <string>
#include <vector>
#include <jubatus/client/common/client.hpp>
#include <jubatus/client/common/datum.hpp>
#include "classifier_types.hpp"

namespace jubatus {
namespace classifier {
namespace client {

class classifier : public jubatus::client::common::client {
 public:
  classifier(const std::string& host, uint64_t port, const std::string& name,
      unsigned int timeout_sec)
      : client(host, port, name, timeout_sec) {
  }

  int32_t train(const std::vector<labeled_datum>& data) {
    return data.size();
  }

  std::vector<std::vector<estimate_result> > classify(
      const std::vector<jubatus::client::common::datum>& data) {
    return std::vector<std::vector<estimate_result> >();
  }

  std::map<std::string, uint64_t> get_labels() {
    return std::map<std::string, uint64_t>();
  }

  bool set_label(const std::string& new_label) {
    return true;
  }

  bool clear() {
    return true;
  }

  bool delete_label(const std::string& target_label) {
    return true;
  }
};

}  // namespace client
}  // namespace classifier
}  // namespace jubatus

#endif  // JUBATUS_CLIENT_CLASSIFIER_CLIENT_HPP_
