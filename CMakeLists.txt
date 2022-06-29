CMAKE_MINIMUM_REQUIRED(VERSION 3.15)

project(edm4hep2json)

find_package(ROOT COMPONENTS RIO Tree)
find_package(EDM4HEP) # implicit: Podio
find_package(nlohmann_json)

set(CMAKE_CXX_STANDARD 17 CACHE STRING "")

add_executable(edm4hep2json src/edm4hep2json.cxx)

target_include_directories (edm4hep2json
                            PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

target_link_libraries (edm4hep2json LINK_PUBLIC ROOT::Core
                                                podio::podio
                                                podio::podioRootIO
                                                EDM4HEP::edm4hep)
