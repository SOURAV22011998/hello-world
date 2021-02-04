#include <iostream>
// #include <climits>
#include <TApplication.h>
#include <TFile.h>
#include <TTree.h>
//#include "ino-proto-data-format.h"
#include <vector>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cstdio>
#include <TTimeStamp.h>
using namespace std;


TTimeStamp      *Evetime;
   Int_t           ENum;
   TBits           *xstriphitsL0;
   TBits           *ystriphitsL0;
   TBits           *xstriphitsL1;
   TBits           *ystriphitsL1;
   TBits           *xstriphitsL2;
   TBits           *ystriphitsL2;
   TBits           *xstriphitsL3;
   TBits           *ystriphitsL3;
   TBits           *xstriphitsL4;
   TBits           *ystriphitsL4;
   TBits           *xstriphitsL5;
   TBits           *ystriphitsL5;
   TBits           *xstriphitsL6;
   TBits           *ystriphitsL6;
   TBits           *xstriphitsL7;
   TBits           *ystriphitsL7;
   TBits           *xstriphitsL8;
   TBits           *ystriphitsL8;
   TBits           *xstriphitsL9;
   TBits           *ystriphitsL9;
   TBits           *xstriphitsL10;
   TBits           *ystriphitsL10;
   TBits           *xstriphitsL11;
   TBits           *ystriphitsL11;
   ULong64_t       tdcdata[32];
   ULong64_t       tdcdata1[32];
   ULong64_t       tdcdata2[32];
   Int_t           tdcmult[32];
   ULong64_t       tdcref;

   TBranch        *b_Evetime;   //!
   TBranch        *b_ENum;   //!
   TBranch        *b_xstriphitsL0;   //!
   TBranch        *b_ystriphitsL0;   //!
   TBranch        *b_xstriphitsL1;   //!
   TBranch        *b_ystriphitsL1;   //!
   TBranch        *b_xstriphitsL2;   //!
   TBranch        *b_ystriphitsL2;   //!
   TBranch        *b_xstriphitsL3;   //!
   TBranch        *b_ystriphitsL3;   //!
   TBranch        *b_xstriphitsL4;   //!
   TBranch        *b_ystriphitsL4;   //!
   TBranch        *b_xstriphitsL5;   //!
   TBranch        *b_ystriphitsL5;   //!
   TBranch        *b_xstriphitsL6;   //!
   TBranch        *b_ystriphitsL6;   //!
   TBranch        *b_xstriphitsL7;   //!
   TBranch        *b_ystriphitsL7;   //!
   TBranch        *b_xstriphitsL8;   //!
   TBranch        *b_ystriphitsL8;   //!
   TBranch        *b_xstriphitsL9;   //!
   TBranch        *b_ystriphitsL9;   //!
   TBranch        *b_xstriphitsL10;   //!
   TBranch        *b_ystriphitsL10;   //!
   TBranch        *b_xstriphitsL11;   //!
   TBranch        *b_ystriphitsL11;   //!
   TBranch        *b_TDCdata;   //!
   TBranch        *b_TDCdata1;   //!
   TBranch        *b_TDCdata2;   //!
   TBranch        *b_TDCmult;   //!
   TBranch        *b_TDCref;   //!



int main()
{
    //TApplication app("my_app",0,0);
	TFile *f1 = new TFile("/home/sourav/analysis/TIFR_DATA/INORUN_20151112_105747.ire","READ","My root file1");//Input file's path
	//f1->GetListOfKeys()->Print(); //this you can do using TBrowser t also
	//f1->GetListOfKeys(); 
	//f1->ls(); 

   TTree *fChain = (TTree*) f1->Get("evetree");
  
   fChain->SetBranchAddress("Evetime", &Evetime, &b_Evetime);
   fChain->SetBranchAddress("ENum", &ENum, &b_ENum);
   fChain->SetBranchAddress("xstriphitsL0", &xstriphitsL0, &b_xstriphitsL0);
   fChain->SetBranchAddress("ystriphitsL0", &ystriphitsL0, &b_ystriphitsL0);
   fChain->SetBranchAddress("xstriphitsL1", &xstriphitsL1, &b_xstriphitsL1);
   fChain->SetBranchAddress("ystriphitsL1", &ystriphitsL1, &b_ystriphitsL1);
   fChain->SetBranchAddress("xstriphitsL2", &xstriphitsL2, &b_xstriphitsL2);
   fChain->SetBranchAddress("ystriphitsL2", &ystriphitsL2, &b_ystriphitsL2);
   fChain->SetBranchAddress("xstriphitsL3", &xstriphitsL3, &b_xstriphitsL3);
   fChain->SetBranchAddress("ystriphitsL3", &ystriphitsL3, &b_ystriphitsL3);
   fChain->SetBranchAddress("xstriphitsL4", &xstriphitsL4, &b_xstriphitsL4);
   fChain->SetBranchAddress("ystriphitsL4", &ystriphitsL4, &b_ystriphitsL4);
   fChain->SetBranchAddress("xstriphitsL5", &xstriphitsL5, &b_xstriphitsL5);
   fChain->SetBranchAddress("ystriphitsL5", &ystriphitsL5, &b_ystriphitsL5);
   fChain->SetBranchAddress("xstriphitsL6", &xstriphitsL6, &b_xstriphitsL6);
   fChain->SetBranchAddress("ystriphitsL6", &ystriphitsL6, &b_ystriphitsL6);
   fChain->SetBranchAddress("xstriphitsL7", &xstriphitsL7, &b_xstriphitsL7);
   fChain->SetBranchAddress("ystriphitsL7", &ystriphitsL7, &b_ystriphitsL7);
   fChain->SetBranchAddress("xstriphitsL8", &xstriphitsL8, &b_xstriphitsL8);
   fChain->SetBranchAddress("ystriphitsL8", &ystriphitsL8, &b_ystriphitsL8);
   fChain->SetBranchAddress("xstriphitsL9", &xstriphitsL9, &b_xstriphitsL9);
   fChain->SetBranchAddress("ystriphitsL9", &ystriphitsL9, &b_ystriphitsL9);
   fChain->SetBranchAddress("xstriphitsL10", &xstriphitsL10, &b_xstriphitsL10);
   fChain->SetBranchAddress("ystriphitsL10", &ystriphitsL10, &b_ystriphitsL10);
   fChain->SetBranchAddress("xstriphitsL11", &xstriphitsL11, &b_xstriphitsL11);
   fChain->SetBranchAddress("ystriphitsL11", &ystriphitsL11, &b_ystriphitsL11);
   fChain->SetBranchAddress("tdcdata", tdcdata, &b_TDCdata);
   fChain->SetBranchAddress("tdcdata1", tdcdata1, &b_TDCdata1);
   fChain->SetBranchAddress("tdcdata2", tdcdata2, &b_TDCdata2);
   fChain->SetBranchAddress("tdcmult", tdcmult, &b_TDCmult);
   fChain->SetBranchAddress("tdcref", &tdcref, &b_TDCref);
   

   
   
   Long64_t nentries = fChain->GetEntriesFast();
   cout<<"total number of events = "<<nentries<<endl;
   //Long64_t nbytes = 0, nb = 0;
   /*for (Long64_t jentry=0; jentry<nentries;jentry++) 
   {
       fChain->GetEntry(jentry);
       int hit=xstriphitsL1->FirstSetBit(0);
       cout<<hit<<endl;
       v_hit.push_back(hit);//xstrip of layer 1 of all the events
       size_v=v_hit.size();
       //list1.push_back(hit);

   }*/

    vector <bool> hits_xy ;
    int i;
    int ii;
    //Bool_t hits_xy[768]={false};

    Bool_t xhit0,xhit1,xhit2,xhit3,xhit4,xhit5,xhit6,xhit7,xhit8,xhit9,xhit10,xhit11;
    Bool_t yhit0,yhit1,yhit2,yhit3,yhit4,yhit5,yhit6,yhit7,yhit8,yhit9,yhit10,yhit11;

   FILE* f = fopen("/home/sourav/analysis/TIFR_DATA/INORUN_20151112_105747.txt", "w");//Output file's path
   for (Long64_t jentry=0; jentry<nentries; jentry++) 
   {
   //    fChain->GetEntry(jentry);
      fChain->GetEntry(jentry);
     for (i=0;i<32;i++)
     {
        xhit0=xstriphitsL0->TestBitNumber(i);
        hits_xy.push_back(xhit0);
     }

     for (i=0;i<32;i++)
     {
        xhit1=xstriphitsL1->TestBitNumber(i);
               hits_xy.push_back(xhit1);
  
     }

     for (i=0;i<32;i++)
     {
        xhit2=xstriphitsL2->TestBitNumber(i);
                hits_xy.push_back(xhit2);
     
      }

     for (i=0;i<32;i++)
     {
        xhit3=xstriphitsL3->TestBitNumber(i);
               hits_xy.push_back(xhit3);
      
     }
     
     for (i=0;i<32;i++)
     {
        xhit4=xstriphitsL4->TestBitNumber(i);
                hits_xy.push_back(xhit4);
    
     }

     for (i=0;i<32;i++)
     {
        xhit5=xstriphitsL5->TestBitNumber(i);
                hits_xy.push_back(xhit5);
    
     }
     
     for (i=0;i<32;i++)
     {
        xhit6=xstriphitsL6->TestBitNumber(i);
                hits_xy.push_back(xhit6);
     
     }

     for (i=0;i<32;i++)
     {
        xhit7=xstriphitsL7->TestBitNumber(i);
                hits_xy.push_back(xhit7);
     
     }
     
     for (i=0;i<32;i++)
     {
        xhit8=xstriphitsL8->TestBitNumber(i);
                        hits_xy.push_back(xhit8);
   
     }

     for (i=0;i<32;i++)
     {
        xhit9=xstriphitsL9->TestBitNumber(i);
                        hits_xy.push_back(xhit9);
    
     }
     
     for (i=0;i<32;i++)
     {
        xhit10=xstriphitsL10->TestBitNumber(i);
                        hits_xy.push_back(xhit10);
     
     }

     for (i=0;i<32;i++)
     {
        xhit11=xstriphitsL11->TestBitNumber(i);
                        hits_xy.push_back(xhit11);
     
     }




    for (i=0;i<32;i++)
     {
        yhit0=ystriphitsL0->TestBitNumber(i);
                       hits_xy.push_back(yhit0);

      }

     for (i=0;i<32;i++)
     {
        yhit1=ystriphitsL1->TestBitNumber(i);
                        hits_xy.push_back(yhit1);
    
     }

     for (i=0;i<32;i++)
     {
        yhit2=ystriphitsL2->TestBitNumber(i);
                        hits_xy.push_back(yhit2);

      }

     for (i=0;i<32;i++)
     {
        yhit3=ystriphitsL3->TestBitNumber(i);
                        hits_xy.push_back(yhit3);
    
     }
     
     for (i=0;i<32;i++)
     {
        yhit4=ystriphitsL4->TestBitNumber(i);
                        hits_xy.push_back(yhit4);
     
     }

     for (i=0;i<32;i++)
     {
        yhit5=ystriphitsL5->TestBitNumber(i);
                       hits_xy.push_back(yhit5);
     
     }
     
     for (i=0;i<32;i++)
     {
        yhit6=ystriphitsL6->TestBitNumber(i);
                       hits_xy.push_back(yhit6);
     
     }

     for (i=0;i<32;i++)
     {
        yhit7=ystriphitsL7->TestBitNumber(i);
                        hits_xy.push_back(yhit7);
     
      }
     
     for (i=0;i<32;i++)
     {
        yhit8=ystriphitsL8->TestBitNumber(i);
                       hits_xy.push_back(yhit8);
      
      }

     for (i=0;i<32;i++)
     {
        yhit9=ystriphitsL9->TestBitNumber(i);
                       hits_xy.push_back(yhit9);
     
     }
     
     for (i=0;i<32;i++)
     {
        yhit10=ystriphitsL10->TestBitNumber(i);
                        hits_xy.push_back(yhit10);
     
     }

     for ( i=0;i<32;i++)
     {
        yhit11=ystriphitsL11->TestBitNumber(i);
         hits_xy.push_back(yhit11);
    
     }
   
   for ( ii=0; ii<768; ii++) 
   { 
      if(ii<767)
      {
      fwrite(hits_xy[ii] ? "1," : "0,", 2*sizeof(char), 1, f);
      }
      if(ii==767)
      {
      fwrite(hits_xy[ii] ? "1" : "0", sizeof(char), 1, f);
      }
   }
      fwrite("\n", sizeof(char), 1, f); 
      hits_xy.clear();
   }
      fclose(f);
   }  
    
   

   //  FILE* f = fopen("/home/rituparna/Desktop/MSC_Project/python_code/works/Codes/HT/plot_rough/dataaa_c217.txt", "w");
   // // for (Long64_t jentry=0; jentry<nentries;jentry++) 
   // // {
   //   for (int ii=0; ii<768; ii++) 
   //    {
   //    fwrite(hits_xy[ii] ? "1," : "0,", 2*sizeof(char), 1, f);
   //    cout<<ii<<endl;
   //    }
   
   //    fwrite("\n", 2*sizeof(char), 1, f); 
   //    fclose(f);
   //}  
// } 
        
    
   

