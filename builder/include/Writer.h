#ifndef RNWRITER_h
#define RNWRITER_h

#include <string>
#include <TFile.h>
#include <TTree.h>

namespace RN
{
  class Writer
  {
    TFile* file;
    TTree* tree;
   
  public:
    Writer(std::string fname);
    ~Writer();

    void Write();
    void Fill();

    double target_total;
    double veto_total;
    double target_cb;
    double veto_cb;
    unsigned long long time;
  };
}
#endif
