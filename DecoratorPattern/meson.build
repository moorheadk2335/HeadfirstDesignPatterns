project('starbuzz', 'cpp',
  version : '0.1',
  default_options : ['warning_level=3',
                     'cpp_std=c++14'])

include = include_directories('include')
sources = files('starbuzz.cpp')

# subdir('include')
# subdir('source')

exe = executable(
  'starbuzz',
  'starbuzz.cpp',
  sources : sources,
  include_directories : include)
