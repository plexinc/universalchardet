cmake_minimum_required(VERSION 3.23 FATAL_ERROR)
project(universalchardet VERSION 1.0.0)

set(SRCS
    src/base/CharDistribution.cpp
    src/base/JpCntx.cpp
    src/base/LangBulgarianModel.cpp
    src/base/LangCyrillicModel.cpp
    src/base/LangGreekModel.cpp
    src/base/LangHebrewModel.cpp
    src/base/LangHungarianModel.cpp
    src/base/LangThaiModel.cpp
    src/base/nsBig5Prober.cpp
    src/base/nsCharSetProber.cpp
    src/base/nsEscCharsetProber.cpp
    src/base/nsEscSM.cpp
    src/base/nsEUCJPProber.cpp
    src/base/nsEUCKRProber.cpp
    src/base/nsEUCTWProber.cpp
    src/base/nsGB2312Prober.cpp
    src/base/nsHebrewProber.cpp
    src/base/nsLatin1Prober.cpp
    src/base/nsMBCSGroupProber.cpp
    src/base/nsMBCSSM.cpp
    src/base/nsSBCharSetProber.cpp
    src/base/nsSBCSGroupProber.cpp
    src/base/nsSJISProber.cpp
    src/base/nsUniversalDetector.cpp
    src/base/nsUTF8Prober.cpp)

include(GNUInstallDirs)

add_library(${PROJECT_NAME} ${SRCS})

set_target_properties(${PROJECT_NAME} PROPERTIES VERSION ${PROJECT_VERSION}
                                                 SOVERSION 1)
add_subdirectory(src/base)
install(
  TARGETS ${PROJECT_NAME}
  EXPORT ${PROJECT_NAME}
  FILE_SET public_headers
  LIBRARY DESTINATION lib
  ARCHIVE DESTINATION lib
  PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/
  RUNTIME DESTINATION bin)

# install( TARGETS ${PROJECT_NAME} EXPORT ${PROJECT_NAME} FILE_SET
# public_headers DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/${PROJECT_NAME}
# INCLUDES DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})

install(
  EXPORT ${PROJECT_NAME}
  FILE ${PROJECT_NAME}.cmake
  NAMESPACE ${PROJECT_NAME}::
  DESTINATION lib/cmake/${PROJECT_NAME})

include(CMakePackageConfigHelpers)

configure_package_config_file(
  ${PROJECT_NAME}Config.cmake.in
  "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}Config.cmake"
  INSTALL_DESTINATION "lib/cmake/${PROJECT_NAME}")

install(FILES "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}Config.cmake"
        DESTINATION "lib/cmake/${PROJECT_NAME}")
# install(DESTINATION include)

# Create a version file
write_basic_package_version_file(
  "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}ConfigVersion.cmake"
  VERSION ${PROJECT_VERSION}
  COMPATIBILITY AnyNewerVersion)

install(FILES "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}ConfigVersion.cmake"
        DESTINATION "lib/cmake/${PROJECT_NAME}")
