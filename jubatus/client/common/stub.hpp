#ifndef JUBATUS_CLIENT_COMMON_STUB_HPP_
#define JUBATUS_CLIENT_COMMON_STUB_HPP_

#include <string>

namespace msgpack {
namespace rpc {

class client {
 public:
  client(const std::string& host, uint16_t port) {};
  void close() {};
  void set_timeout(unsigned int sec) {};
};

}  // namespace rpc
}  // namespace msgpack

#endif  // JUBATUS_CLIENT_COMMON_STUB_HPP_
