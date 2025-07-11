#ifndef file_io
#define file_io

#include <string>
#include <iostream>
#include <cstdio>

using str = std::string;

void setIO(str file) {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);

  if(file.size() > 0){
    freopen((file + ".in").c_str(), "r", stdin);
    freopen((file + ".out").c_str(), "w", stdout);
  }
}

#endif
