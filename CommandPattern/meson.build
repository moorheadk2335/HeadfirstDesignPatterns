project('homeautomation', 'cpp',
  version : '0.1',
  default_options : ['warning_level=3',
                     'cpp_std=c++14'])

sources = files('remotecontrol.cpp')
include = [include_directories('include')]

subdir('include')
subdir('source')

exe = executable('remotecontrol',
  sources : sources,
  include_directories : include,
  install : true)

test('basic', exe)
