cmake_minimum_required(VERSION 3.30)
# Nous voulons un cmake "récent" pour utiliser les dernières fonctionnalités


# Notre projet est étiqueté hello
project(exolus)

# Crée des variables avec les fichiers à compiler
set(SRCS
    main.c
    exolus.c
    )
    
set(HEADERS
    exolus.h
    )

# On indique que l'on veut un exécutable "hello" compilé à partir des fichiers décrits par les variables SRCS et HEADERS
add_executable(exolus ${SRCS} ${HEADERS})


find_package (PkgConfig REQUIRED)
pkg_check_modules(GLIB_PKG REQUIRED glib-2.0)

if (GLIB_FOUND)
  include_directories(${GLIB_INCLUDE_DIRS})
  target_link_libraries (exolus ${GLIB_LIBRARIES})
endif (GLIB_FOUND)
