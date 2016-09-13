// Jubatus: Online machine learning framework for distributed environment
// Copyright (C) 2013 Preferred Networks and Nippon Telegraph and Telephone Corporation.
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License version 2.1 as published by the Free Software Foundation.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA

#ifndef JUBATUS_CLIENT_COMMON_CLIENT_HPP_
#define JUBATUS_CLIENT_COMMON_CLIENT_HPP_

#include <stdint.h>
#include <map>
#include <string>
#include <stdint.h>

#include "stub.hpp"

namespace jubatus {
namespace client {
namespace common {

class client {
 public:
  client(const std::string& host,
         uint64_t port,
         const std::string& name,
         unsigned int timeout_sec)
      : c_(host, port), name_(name) {
  }

  msgpack::rpc::client& get_client() {
    return c_;
  }

  std::string get_config() {
  }

  std::map<std::string, std::string> save(const std::string& id) {
  }

  bool load(const std::string& id) {
  }

  std::map<std::string, std::map<std::string, std::string> > get_status() {
  }

  bool do_mix() {
  }

  std::map<std::string, std::map<std::string, std::string> >
      get_proxy_status() {
  }

  std::string get_name() const {
    return name_;
  }

  void set_name(const std::string& name) {
    name_ = name;
  }

 protected:
  msgpack::rpc::client c_;
  std::string name_;
};

}  // namespace common
}  // namespace client
}  // namespace jubatus

#endif  // JUBATUS_CLIENT_COMMON_CLIENT_HPP_
