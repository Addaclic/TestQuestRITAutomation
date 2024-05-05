#ifndef COMMON_COMMON_H_
#define COMMON_COMMON_H_

#include <netinet/in.h>
#include <sys/poll.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>

#include <iostream>

namespace common {
class Socket {
 public:
  Socket() {
    fd_ = socket(AF_INET, SOCK_STREAM, 0);  // file descriptor
  };

  int get_fd() { return fd_; };

  ~Socket() { close(fd_); };

 private:
  int fd_;
};
};  // namespace common

#endif  // COMMON_COMMON_H_
