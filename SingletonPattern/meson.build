project('chocolatefactory', 'cpp',
  version : '0.1',
  default_options : ['warning_level=3',
                     'cpp_std=c++14'])

sources = files('chocolatefactory.cpp')
include = [include_directories('include')]

subdir('source')

exe = executable(
  'chocolatefactory',
  sources : sources,
  include_directories : include)
