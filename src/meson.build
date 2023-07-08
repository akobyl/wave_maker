wave_maker_sources = ['wave_maker.c']
wavemaker_lib = static_library('wave_maker',
                              wave_maker_sources,
                              include_directories : inc,
                              )

wavemaker_dep = declare_dependency(
            include_directories : inc,
            link_with : wavemaker_lib,
            )