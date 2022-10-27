//  This file is part of Content Cell Incubator
//  Copyright (C) Narges Shahhoseini, 2022.
//  Released under MIT license; see LICENSE

#include <iostream>

#include "emp/base/vector.hpp"

#include "evo-content/config_setup.hpp"
#include "evo-content/example.hpp"
#include "evo-content/ExampleConfig.hpp"

// This is the main function for the NATIVE version of Content Cell Incubator.

evo_content::Config cfg;

int main(int argc, char* argv[])
{ 
  // Set up a configuration panel for native application
  setup_config_native(cfg, argc, argv);
  cfg.Write(std::cout);

  std::cout << "Hello, world!" << "\n";

  return example();
}
