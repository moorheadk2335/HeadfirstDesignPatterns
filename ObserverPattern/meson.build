project('weatherstation', 'cpp',
  version : '0.1',
  default_options : ['warning_level=3',
                     'cpp_std=c++14'])

include = [include_directories('include')]

sources = files('weatherstation.cpp')

subdir('include')
subdir('source')

exe = executable(
  'weatherstation',
  sources : sources,
  include_directories : include)

test('basic', exe)
