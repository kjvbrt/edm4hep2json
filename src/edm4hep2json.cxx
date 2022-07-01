#include "edm4hep2json.hxx"
#include "podio/ROOTReader.h"

int main() {
  read_events<podio::ROOTReader>("input/fccee-lar-ecal-envts.root");

  return EXIT_SUCCESS;
}
