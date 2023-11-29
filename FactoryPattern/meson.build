project('pizzastore', 'cpp',
  version : '0.1',
  default_options : ['warning_level=3',
                     'cpp_std=c++14'])

sources = files('pizzatime.cpp')
include = [include_directories('include')]

subdir('source')
subdir('include')

exe = executable(
  'pizzatime',
  sources : sources,
  include_directories : include)

test('basic', exe)
