wavemaker_sources = ['wavemaker.c']
wavemaker_lib = static_library('wavemaker',
                              wavemaker_sources,
                              include_directories : inc,
                              )

wavemaker_dep = declare_dependency(
            include_directories : inc,
            link_with : wavemaker_lib,
            )