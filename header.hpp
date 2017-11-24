#include <iostream>
#include <string>
#include <yaml-cpp/yaml.h>
#include <fstream>

struct Email {
  std::string nickname;
  std::string server;
};

struct Person {
  std::string  first_name;
  std::string  last_name;
  Email        email;
  size_t       age;
  std::string  phone;
};
