project('IntroToDesignPatterns', 'cpp',
  version : '0.1',
  default_options : ['warning_level=1', 'cpp_std=c++14'])

# Define include directories
inc = [include_directories('include')]

# Define source files
sources = files(
  'simuduck.cpp'
)

subdir('include')
subdir('source')

# Executable
exe = executable(
  'simuduck',
  sources: sources,
  include_directories: inc
)

test('basic', exe)
