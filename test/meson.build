gtest_project = subproject('gtest')

gtest = dependency('gtest_main', required : false)

if not gtest.found()
    error('MESON_SKIP_TEST: no gtest found')
endif

tests_src = [
    'wavemaker_test.cpp',
]

testexe = executable('testexe',
                     tests_src,
                     include_directories : inc,
                     dependencies : [
                        gtest,
                     ],
                     link_with : wavemaker_lib
                     )

test('wavemakerlib test', testexe, protocol : 'gtest')